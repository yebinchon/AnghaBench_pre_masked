
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char*) ;
 scalar_t__ FUNC_1 (unsigned long,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 char VAR_3[VAR_0];

 if (FUNC_1((unsigned long)VAR_2, VAR_3) < 0)
  FUNC_0(VAR_1, "<%pK>", VAR_2);
 else
  FUNC_0(VAR_1, "%s", VAR_3);
}
