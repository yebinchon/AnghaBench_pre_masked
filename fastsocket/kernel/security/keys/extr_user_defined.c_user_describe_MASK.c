
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct key {int datalen; int description; } ;


 scalar_t__ FUNC_0 (struct key const*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,int ) ;

void FUNC_3(const struct key *VAR_0, struct seq_file *VAR_1)
{
 FUNC_2(VAR_1, VAR_0->description);
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_1, ": %u", VAR_0->datalen);
}
