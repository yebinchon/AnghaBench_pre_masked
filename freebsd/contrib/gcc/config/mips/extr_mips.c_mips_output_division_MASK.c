
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const*,int *) ;

const char *
FUNC_1 (const char *VAR_5, rtx *VAR_6)
{
  const char *VAR_7;

  VAR_7 = VAR_5;
  if (VAR_2 || VAR_3)
    {
      FUNC_0 (VAR_7, VAR_6);
      VAR_7 = "nop";
    }
  if (VAR_1)
    {
      if (VAR_4)
 {
   FUNC_0 (VAR_7, VAR_6);
   VAR_7 = "bnez\t%2,1f\n\tbreak\t7\n1:";
 }
      else if (VAR_0)
        {
   FUNC_0 (VAR_7, VAR_6);
   VAR_7 = "teq\t%2,%.,7";
        }
      else
 {
   FUNC_0 ("%(bne\t%2,%.,1f", VAR_6);
   FUNC_0 (VAR_7, VAR_6);
   VAR_7 = "break\t7%)\n1:";
 }
    }
  return VAR_7;
}
