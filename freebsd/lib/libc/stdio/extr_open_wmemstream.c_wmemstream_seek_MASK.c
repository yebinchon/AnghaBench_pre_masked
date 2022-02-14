
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmemstream {scalar_t__ offset; scalar_t__ len; int mbstate; } ;
typedef int intmax_t ;
typedef scalar_t__ fpos_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,struct wmemstream*,scalar_t__,...) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (struct wmemstream*) ;

__attribute__((used)) static fpos_t
FUNC_4(void *VAR_5, fpos_t VAR_6, int VAR_7)
{
 struct wmemstream *VAR_8;
 fpos_t VAR_9;

 VAR_8 = VAR_5;
 VAR_9 = VAR_8->offset;
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

 if (VAR_8->offset != VAR_9)
  FUNC_2(&VAR_8->mbstate, 0, sizeof(VAR_8->mbstate));
 FUNC_3(VAR_8);




 return (VAR_8->offset);
}
