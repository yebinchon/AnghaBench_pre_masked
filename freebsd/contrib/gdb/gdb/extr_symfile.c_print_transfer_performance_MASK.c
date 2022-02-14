
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (int ,char*,char*,unsigned long) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

void
FUNC_2 (struct ui_file *VAR_1,
       unsigned long VAR_2,
       unsigned long VAR_3,
       unsigned long VAR_4)
{
  FUNC_1 (VAR_0, "Transfer rate: ");
  if (VAR_4 > 0)
    {
      FUNC_0 (VAR_0, "transfer-rate", "%lu",
   (VAR_2 * 8) / VAR_4);
      FUNC_1 (VAR_0, " bits/sec");
    }
  else
    {
      FUNC_0 (VAR_0, "transferred-bits", "%lu", (VAR_2 * 8));
      FUNC_1 (VAR_0, " bits in <1 sec");
    }
  if (VAR_3 > 0)
    {
      FUNC_1 (VAR_0, ", ");
      FUNC_0 (VAR_0, "write-rate", "%lu", VAR_2 / VAR_3);
      FUNC_1 (VAR_0, " bytes/write");
    }
  FUNC_1 (VAR_0, ".\n");
}
