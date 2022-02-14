
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stat; int slabname; int nf_conntrack_cachep; int htable_size; int hash_vmalloc; int hash; int count; } ;
struct net {TYPE_1__ ct; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net*) ;
 int FUNC_5 (struct net*) ;
 int FUNC_6 (struct net*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct net*,int ,int *) ;
 int FUNC_9 (struct net*) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct net *VAR_1)
{
 i_see_dead_people:
 FUNC_8(VAR_1, VAR_0, ((void*)0));
 FUNC_9(VAR_1);
 if (FUNC_0(&VAR_1->ct.count) != 0) {
  FUNC_10();
  goto i_see_dead_people;
 }

 FUNC_7(VAR_1->ct.hash, VAR_1->ct.hash_vmalloc,
        VAR_1->ct.htable_size);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1->ct.nf_conntrack_cachep);
 FUNC_2(VAR_1->ct.slabname);
 FUNC_1(VAR_1->ct.stat);
}
