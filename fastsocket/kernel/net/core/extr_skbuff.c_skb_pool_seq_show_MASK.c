
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int qlen; } ;
struct TYPE_7__ {int qlen; } ;
struct TYPE_6__ {int qlen; } ;
struct TYPE_5__ {int qlen; } ;
struct skb_pool {int clone_slab_hit; int clone_pool_hit; TYPE_4__ clone_recyc_list; TYPE_3__ clone_free_list; int slab_hit; int pool_hit; TYPE_2__ recyc_list; TYPE_1__ free_list; } ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct skb_pool *VAR_3 = VAR_2;

 FUNC_0(VAR_1, "%u\t%-15u%-15u%-15lu%-15lu%-15u%-15u%-15lu%-15lu\n",
  VAR_0, VAR_3->free_list.qlen, VAR_3->recyc_list.qlen,
  VAR_3->pool_hit, VAR_3->slab_hit,
  VAR_3->clone_free_list.qlen, VAR_3->clone_recyc_list.qlen,
  VAR_3->clone_pool_hit, VAR_3->clone_slab_hit);

 return 0;
}
