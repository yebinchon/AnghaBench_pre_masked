
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct can_frame {int dummy; } ;
struct bcm_op {size_t currframe; size_t nframes; int frames_abs; int sk; int ifindex; struct can_frame* frames; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct net_device* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ,struct can_frame*,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_7(struct bcm_op *VAR_2)
{
 struct sk_buff *VAR_3;
 struct net_device *VAR_4;
 struct can_frame *VAR_5 = &VAR_2->frames[VAR_2->currframe];


 if (!VAR_2->ifindex)
  return;

 VAR_4 = FUNC_2(&VAR_1, VAR_2->ifindex);
 if (!VAR_4) {

  return;
 }

 VAR_3 = FUNC_0(VAR_0, FUNC_4());
 if (!VAR_3)
  goto out;

 FUNC_5(FUNC_6(VAR_3, VAR_0), VAR_5, VAR_0);


 VAR_3->dev = VAR_4;
 VAR_3->sk = VAR_2->sk;
 FUNC_1(VAR_3, 1);


 VAR_2->currframe++;
 VAR_2->frames_abs++;


 if (VAR_2->currframe >= VAR_2->nframes)
  VAR_2->currframe = 0;
 out:
 FUNC_3(VAR_4);
}
