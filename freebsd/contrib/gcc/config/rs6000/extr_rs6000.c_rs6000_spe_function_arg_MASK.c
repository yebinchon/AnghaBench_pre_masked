
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {int sysv_gregno; scalar_t__ stdarg; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static rtx
FUNC_7 (CUMULATIVE_ARGS *VAR_7, enum machine_mode VAR_8,
    tree VAR_9)
{
  int VAR_10 = VAR_7->sysv_gregno;



  if (VAR_5 && (VAR_8 == VAR_1 || VAR_8 == VAR_0))
    {
      int VAR_11 = FUNC_5 (VAR_8, VAR_9);


      if (VAR_8 == VAR_1)
 VAR_10 += (1 - VAR_10) & 1;


      if (VAR_10 + VAR_11 - 1 > VAR_2)
 return VAR_3;

      return FUNC_6 (VAR_8, VAR_10);
    }
  if (VAR_7->stdarg)
    {
      int VAR_12 = FUNC_5 (VAR_8, VAR_9);


      if (VAR_12 == 2 && (VAR_10 & 1) == 0)
 VAR_10 += 1;

      if (VAR_10 + VAR_12 - 1 <= VAR_2)
 {
   rtx VAR_13, VAR_14;
   enum machine_mode VAR_15 = VAR_4;

   VAR_13 = FUNC_4 (VAR_15, VAR_10);
   VAR_13 = FUNC_2 (VAR_15, VAR_13, VAR_6);
   VAR_14 = FUNC_4 (VAR_15, VAR_10 + 1);
   VAR_14 = FUNC_2 (VAR_15, VAR_14, FUNC_0 (4));
   return FUNC_3 (VAR_8, FUNC_1 (2, VAR_13, VAR_14));
 }
      else
 return VAR_3;
    }
  else
    {
      if (VAR_10 <= VAR_2)
 return FUNC_4 (VAR_8, VAR_10);
      else
 return VAR_3;
    }
}
