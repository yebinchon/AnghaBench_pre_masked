
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstream {int offset; int len; } ;
typedef int intmax_t ;
typedef int fpos_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,struct memstream*,int,...) ;
 int FUNC_2 (struct memstream*) ;
 int VAR_4 ;

__attribute__((used)) static fpos_t
FUNC_3(void *VAR_5, fpos_t VAR_6, int VAR_7)
{
 struct memstream *VAR_8;




 VAR_8 = VAR_5;



 switch (VAR_7) {
 case 128:

  FUNC_0(VAR_6 >= 0);
  VAR_8->offset = VAR_6;
  break;
 case 130:

  FUNC_0(VAR_6 == 0);
  break;
 case 129:
  if (VAR_6 < 0) {
   if (VAR_6 + VAR_8->len < 0) {





    VAR_3 = VAR_0;
    return (-1);
   }
  } else {
   if (VAR_2 - VAR_8->len < VAR_6) {





    VAR_3 = VAR_1;
    return (-1);
   }
  }
  VAR_8->offset = VAR_8->len + VAR_6;
  break;
 }
 FUNC_2(VAR_8);




 return (VAR_8->offset);
}
