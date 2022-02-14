
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct net* private; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int VAR_0 ;
 int FUNC_2 (struct seq_file*,char*,int ,...) ;
 int FUNC_3 (struct net*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_4, void *VAR_5)
{
 struct net *VAR_6 = VAR_4->private;

 FUNC_2(VAR_4, "TCP6: inuse %d\n",
         FUNC_3(VAR_6, &VAR_1));
 FUNC_2(VAR_4, "UDP6: inuse %d\n",
         FUNC_3(VAR_6, &VAR_3));
 FUNC_2(VAR_4, "UDPLITE6: inuse %d\n",
   FUNC_3(VAR_6, &VAR_2));
 FUNC_2(VAR_4, "RAW6: inuse %d\n",
         FUNC_3(VAR_6, &VAR_0));
 FUNC_2(VAR_4, "FRAG6: inuse %d memory %d\n",
         FUNC_1(VAR_6), FUNC_0(VAR_6));
 return 0;
}
