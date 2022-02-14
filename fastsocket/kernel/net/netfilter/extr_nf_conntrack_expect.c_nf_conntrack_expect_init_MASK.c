
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conntrack_expect {int dummy; } ;
struct TYPE_2__ {int htable_size; int expect_vmalloc; int * expect_hash; scalar_t__ expect_count; } ;
struct net {TYPE_1__ ct; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net*,int *) ;
 int * FUNC_4 (int*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,int) ;

int FUNC_6(struct net *VAR_5)
{
 int VAR_6 = -VAR_0;

 if (FUNC_3(VAR_5, &VAR_1)) {
  if (!VAR_3) {
   VAR_3 = VAR_5->ct.htable_size / 256;
   if (!VAR_3)
    VAR_3 = 1;
  }
  VAR_4 = VAR_3 * 4;
 }

 VAR_5->ct.expect_count = 0;
 VAR_5->ct.expect_hash = FUNC_4(&VAR_3,
        &VAR_5->ct.expect_vmalloc, 0);
 if (VAR_5->ct.expect_hash == ((void*)0))
  goto err1;

 if (FUNC_3(VAR_5, &VAR_1)) {
  VAR_2 = FUNC_1("nf_conntrack_expect",
     sizeof(struct nf_conntrack_expect),
     0, 0, ((void*)0));
  if (!VAR_2)
   goto err2;
 }

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0)
  goto err3;

 return 0;

err3:
 if (FUNC_3(VAR_5, &VAR_1))
  FUNC_2(VAR_2);
err2:
 FUNC_5(VAR_5->ct.expect_hash, VAR_5->ct.expect_vmalloc,
        VAR_3);
err1:
 return VAR_6;
}
