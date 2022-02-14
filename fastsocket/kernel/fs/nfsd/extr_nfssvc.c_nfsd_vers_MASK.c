
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum vers_op { ____Placeholder_vers_op } vers_op ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int ** VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int ** VAR_6 ;

int FUNC_0(int VAR_7, enum vers_op VAR_8)
{
 if (VAR_7 < VAR_1 || VAR_7 >= VAR_2)
  return 0;
 switch(VAR_8) {
 case 129:
  VAR_6[VAR_7] = VAR_5[VAR_7];




  break;
 case 130:
  VAR_6[VAR_7] = ((void*)0);




  break;
 case 128:
  return VAR_6[VAR_7] != ((void*)0);
 case 131:
  return VAR_5[VAR_7] != ((void*)0);
 }
 return 0;
}
