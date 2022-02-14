
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int tw_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct seq_file*,char*,int ,...) ;
 int FUNC_7 (struct net*,int *) ;
 int FUNC_8 (struct seq_file*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_9, void *VAR_10)
{
 struct net *VAR_11 = VAR_9->private;
 int VAR_12, VAR_13;

 FUNC_3();
 VAR_12 = FUNC_5(&VAR_3);
 VAR_13 = FUNC_5(&VAR_5);
 FUNC_4();

 FUNC_8(VAR_9);
 FUNC_6(VAR_9, "TCP: inuse %d orphan %d tw %d alloc %d mem %d\n",
     FUNC_7(VAR_11, &VAR_4), VAR_12,
     VAR_1.tw_count, VAR_13,
     FUNC_0(&VAR_2));
 FUNC_6(VAR_9, "UDP: inuse %d mem %d\n",
     FUNC_7(VAR_11, &VAR_7),
     FUNC_0(&VAR_6));
 FUNC_6(VAR_9, "UDPLITE: inuse %d\n",
     FUNC_7(VAR_11, &VAR_8));
 FUNC_6(VAR_9, "RAW: inuse %d\n",
     FUNC_7(VAR_11, &VAR_0));
 FUNC_6(VAR_9, "FRAG: inuse %d memory %d\n",
   FUNC_2(VAR_11), FUNC_1(VAR_11));
 return 0;
}
