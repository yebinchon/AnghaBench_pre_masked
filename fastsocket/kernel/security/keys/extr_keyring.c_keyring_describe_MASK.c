
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct keyring_list {int maxkeys; int nkeys; } ;
struct TYPE_2__ {int subscriptions; } ;
struct key {char* description; TYPE_1__ payload; } ;


 scalar_t__ FUNC_0 (struct key const*) ;
 struct keyring_list* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct seq_file*,char*,int ,int ) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_6(const struct key *VAR_0, struct seq_file *VAR_1)
{
 struct keyring_list *VAR_2;

 if (VAR_0->description)
  FUNC_5(VAR_1, VAR_0->description);
 else
  FUNC_5(VAR_1, "[anon]");

 if (FUNC_0(VAR_0)) {
  FUNC_2();
  VAR_2 = FUNC_1(VAR_0->payload.subscriptions);
  if (VAR_2)
   FUNC_4(VAR_1, ": %u/%u", VAR_2->nkeys, VAR_2->maxkeys);
  else
   FUNC_5(VAR_1, ": empty");
  FUNC_3();
 }
}
