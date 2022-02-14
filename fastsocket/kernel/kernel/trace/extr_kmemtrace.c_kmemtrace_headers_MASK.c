
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_2)
{

 if (!(VAR_1.val & VAR_0))
  return;

 FUNC_0(VAR_2, "#\n");
 FUNC_0(VAR_2, "# ALLOC  TYPE  REQ   GIVEN  FLAGS     "
   "      POINTER         NODE    CALLER\n");
 FUNC_0(VAR_2, "# FREE   |      |     |       |       "
   "       |   |            |        |\n");
 FUNC_0(VAR_2, "# |\n\n");
}
