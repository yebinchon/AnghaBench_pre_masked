
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmt {int code; int k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int) ;
 int VAR_3 ;



 int VAR_4 ;

 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

 int FUNC_3 (int) ;
 int FUNC_4 (int) ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct stmt *VAR_9)
{
 register int VAR_10 = VAR_9->code;

 if (VAR_10 == VAR_7)
  return -1;

 switch (FUNC_0(VAR_10)) {

 case 130:
  return (FUNC_3(VAR_10) == VAR_2) ? VAR_1 :
   (FUNC_3(VAR_10) == VAR_6) ? VAR_8 : -1;

 case 133:
 case 132:
  return (FUNC_2(VAR_10) == VAR_3) ? VAR_8 :
   (FUNC_2(VAR_10) == VAR_4) ? VAR_9->k : -1;

 case 129:
  return VAR_1;

 case 128:
  return VAR_8;

 case 134:
 case 135:
  if (FUNC_4(VAR_10) == VAR_6)
   return VAR_0;
  return VAR_1;

 case 131:
  return FUNC_1(VAR_10) == VAR_5 ? VAR_8 : VAR_1;
 }
 FUNC_5();

}
