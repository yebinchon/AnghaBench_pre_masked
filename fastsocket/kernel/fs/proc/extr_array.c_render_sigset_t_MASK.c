
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, const char *VAR_2,
    sigset_t *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1, "%s", VAR_2);

 VAR_4 = VAR_0;
 do {
  int VAR_5 = 0;

  VAR_4 -= 4;
  if (FUNC_1(VAR_3, VAR_4+1)) VAR_5 |= 1;
  if (FUNC_1(VAR_3, VAR_4+2)) VAR_5 |= 2;
  if (FUNC_1(VAR_3, VAR_4+3)) VAR_5 |= 4;
  if (FUNC_1(VAR_3, VAR_4+4)) VAR_5 |= 8;
  FUNC_0(VAR_1, "%x", VAR_5);
 } while (VAR_4 >= 4);

 FUNC_0(VAR_1, "\n");
}
