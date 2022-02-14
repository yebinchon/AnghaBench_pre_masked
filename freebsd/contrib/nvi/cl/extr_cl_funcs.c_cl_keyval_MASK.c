
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int scr_keyval_t ;
struct TYPE_4__ {int * c_cc; } ;
struct TYPE_5__ {TYPE_1__ orig; } ;
typedef int SCR ;
typedef TYPE_2__ CL_PRIVATE ;
typedef int CHAR_T ;


 TYPE_2__* FUNC_0 (int *) ;




 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

int
FUNC_1(SCR *VAR_5, scr_keyval_t VAR_6, CHAR_T *VAR_7, int *VAR_8)
{
 CL_PRIVATE *VAR_9;





 VAR_9 = FUNC_0(VAR_5);
 switch (VAR_6) {
 case 131:
  *VAR_8 = (*VAR_7 = VAR_9->orig.c_cc[VAR_0]) == VAR_4;
  break;
 case 130:
  *VAR_8 = (*VAR_7 = VAR_9->orig.c_cc[VAR_1]) == VAR_4;
  break;
 case 129:
  *VAR_8 = (*VAR_7 = VAR_9->orig.c_cc[VAR_2]) == VAR_4;
  break;





 default:
  *VAR_8 = 1;
  break;
 }
 return (0);
}
