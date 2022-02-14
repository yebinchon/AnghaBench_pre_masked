
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct seq_file*,int) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_6, u32 VAR_7)
{
 int VAR_8 = VAR_5 & VAR_4;

 if (VAR_8)
  FUNC_0(VAR_6, VAR_7);


 FUNC_1(VAR_6, "#");
 if (VAR_7 & VAR_0)
  FUNC_1(VAR_6, "     TIME       ");
 if (VAR_7 & VAR_1)
  FUNC_1(VAR_6, " CPU");
 if (VAR_7 & VAR_3)
  FUNC_1(VAR_6, "  TASK/PID       ");
 if (VAR_8)
  FUNC_1(VAR_6, "|||||");
 if (VAR_7 & VAR_2)
  FUNC_1(VAR_6, "  DURATION   ");
 FUNC_1(VAR_6, "               FUNCTION CALLS\n");


 FUNC_1(VAR_6, "#");
 if (VAR_7 & VAR_0)
  FUNC_1(VAR_6, "      |         ");
 if (VAR_7 & VAR_1)
  FUNC_1(VAR_6, " |  ");
 if (VAR_7 & VAR_3)
  FUNC_1(VAR_6, "   |    |        ");
 if (VAR_8)
  FUNC_1(VAR_6, "|||||");
 if (VAR_7 & VAR_2)
  FUNC_1(VAR_6, "   |   |      ");
 FUNC_1(VAR_6, "               |   |   |   |\n");
}
