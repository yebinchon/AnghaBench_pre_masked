
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expect_vmalloc; int expect_hash; } ;
struct net {TYPE_1__ ct; } ;


 int FUNC_0 (struct net*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;

void FUNC_5(struct net *VAR_3)
{
 FUNC_0(VAR_3);
 if (FUNC_2(VAR_3, &VAR_0)) {
  FUNC_4();
  FUNC_1(VAR_1);
 }
 FUNC_3(VAR_3->ct.expect_hash, VAR_3->ct.expect_vmalloc,
        VAR_2);
}
