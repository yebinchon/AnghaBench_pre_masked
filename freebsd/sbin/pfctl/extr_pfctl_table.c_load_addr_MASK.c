
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_buffer {int dummy; } ;


 scalar_t__ FUNC_0 (struct pfr_buffer*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct pfr_buffer*,char*,int,scalar_t__ (*) (struct pfr_buffer*,int ,int)) ;
 int FUNC_2 (char*,char*) ;

int
FUNC_3(struct pfr_buffer *VAR_1, int VAR_2, char *VAR_3[], char *VAR_4,
    int VAR_5)
{
 while (VAR_2--)
  if (FUNC_0(VAR_1, *VAR_3++, VAR_5)) {
   if (VAR_0)
    FUNC_2("cannot decode %s", VAR_3[-1]);
   return (-1);
  }
 if (FUNC_1(VAR_1, VAR_4, VAR_5, FUNC_0)) {
  FUNC_2("cannot load %s", VAR_4);
  return (-1);
 }
 return (0);
}
