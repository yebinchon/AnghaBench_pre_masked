
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conntrack_l4proto {int (* destroy ) (struct nf_conn*) ;} ;
struct nf_conntrack {int use; } ;
struct nf_conn {scalar_t__ master; TYPE_1__* tuplehash; int timeout; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int hnnode; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net*,int ) ;
 struct nf_conntrack_l4proto* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nf_conn*) ;
 int VAR_2 ;
 int FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (struct nf_conn*) ;
 struct net* FUNC_10 (struct nf_conn*) ;
 int FUNC_11 (struct nf_conn*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct nf_conn*) ;
 int FUNC_14 (char*,struct nf_conn*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct nf_conn*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static void
FUNC_21(struct nf_conntrack *VAR_3)
{
 struct nf_conn *VAR_4 = (struct nf_conn *)VAR_3;
 struct net *VAR_5 = FUNC_10(VAR_4);
 struct nf_conntrack_l4proto *VAR_6;

 FUNC_14("destroy_conntrack(%p)\n", VAR_4);
 FUNC_1(FUNC_4(&VAR_3->use) == 0);
 FUNC_1(!FUNC_20(&VAR_4->timeout));




 FUNC_15();
 VAR_6 = FUNC_3(FUNC_9(VAR_4), FUNC_11(VAR_4));
 if (VAR_6 && VAR_6->destroy)
  VAR_6->destroy(VAR_4);

 FUNC_16();

 FUNC_17(&VAR_2);




 FUNC_13(VAR_4);


 if (!FUNC_8(VAR_4)) {
  FUNC_0(FUNC_6(&VAR_4->tuplehash[VAR_0].hnnode));
  FUNC_5(&VAR_4->tuplehash[VAR_0].hnnode);
 }

 FUNC_2(VAR_5, VAR_1);
 FUNC_18(&VAR_2);

 if (VAR_4->master)
  FUNC_12(VAR_4->master);

 FUNC_14("destroy_conntrack: returning ct=%p to slab\n", VAR_4);
 FUNC_7(VAR_4);
}
