
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int count; } ;
struct net {TYPE_1__ ct; } ;
struct ip_conntrack_stat {int expect_delete; int expect_create; int expect_new; int error; int early_drop; int drop; int insert_failed; int insert; int delete_list; int delete; int ignore; int invalid; int new; int found; int searched; } ;


 void* VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 struct net* FUNC_1 (struct seq_file*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct net *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = FUNC_0(&VAR_3->ct.count);
 const struct ip_conntrack_stat *VAR_5 = VAR_2;

 if (VAR_2 == VAR_0) {
  FUNC_2(VAR_1, "entries  searched found new invalid ignore delete delete_list insert insert_failed drop early_drop icmp_error  expect_new expect_create expect_delete\n");
  return 0;
 }

 FUNC_2(VAR_1, "%08x  %08x %08x %08x %08x %08x %08x %08x "
   "%08x %08x %08x %08x %08x  %08x %08x %08x \n",
     VAR_4,
     VAR_5->searched,
     VAR_5->found,
     VAR_5->new,
     VAR_5->invalid,
     VAR_5->ignore,
     VAR_5->delete,
     VAR_5->delete_list,
     VAR_5->insert,
     VAR_5->insert_failed,
     VAR_5->drop,
     VAR_5->early_drop,
     VAR_5->error,

     VAR_5->expect_new,
     VAR_5->expect_create,
     VAR_5->expect_delete
  );
 return 0;
}
