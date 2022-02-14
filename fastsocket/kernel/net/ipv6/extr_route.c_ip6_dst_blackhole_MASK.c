
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct rt6key {int dummy; } ;
struct dst_entry {int __use; scalar_t__ dev; int * metrics; void* output; void* input; int __refcnt; } ;
struct TYPE_2__ {struct dst_entry dst; } ;
struct rt6_info {int rt6i_flags; int rt6i_src; int rt6i_dst; scalar_t__ rt6i_metric; int rt6i_gateway; scalar_t__ rt6i_expires; scalar_t__ rt6i_idev; TYPE_1__ u; } ;
struct flowi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 void* VAR_3 ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int) ;

int FUNC_8(struct sock *VAR_5, struct dst_entry **VAR_6, struct flowi *VAR_7)
{
 struct rt6_info *VAR_8 = (struct rt6_info *) *VAR_6;
 struct rt6_info *VAR_9 = (struct rt6_info *)
  FUNC_2(&VAR_4);
 struct dst_entry *VAR_10 = ((void*)0);

 if (VAR_9) {
  VAR_10 = &VAR_9->u.dst;

  FUNC_0(&VAR_10->__refcnt, 1);
  VAR_10->__use = 1;
  VAR_10->input = VAR_3;
  VAR_10->output = VAR_3;

  FUNC_7(VAR_10->metrics, VAR_8->u.dst.metrics, VAR_1*sizeof(u32));
  VAR_10->dev = VAR_8->u.dst.dev;
  if (VAR_10->dev)
   FUNC_1(VAR_10->dev);
  VAR_9->rt6i_idev = VAR_8->rt6i_idev;
  if (VAR_9->rt6i_idev)
   FUNC_5(VAR_9->rt6i_idev);
  VAR_9->rt6i_expires = 0;

  FUNC_6(&VAR_9->rt6i_gateway, &VAR_8->rt6i_gateway);
  VAR_9->rt6i_flags = VAR_8->rt6i_flags & ~VAR_2;
  VAR_9->rt6i_metric = 0;

  FUNC_7(&VAR_9->rt6i_dst, &VAR_8->rt6i_dst, sizeof(struct rt6key));




  FUNC_3(VAR_10);
 }

 FUNC_4(*VAR_6);
 *VAR_6 = VAR_10;
 return (VAR_10 ? 0 : -VAR_0);
}
