
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ dev; } ;
struct TYPE_5__ {scalar_t__ high_thresh; int mem; } ;
struct TYPE_6__ {TYPE_1__ frags; } ;
struct net {TYPE_2__ ipv4; } ;
struct TYPE_7__ {int lock; } ;
struct ipq {TYPE_3__ q; } ;
struct TYPE_8__ {scalar_t__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct net* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net*) ;
 struct ipq* FUNC_4 (struct net*,int ,int ) ;
 int FUNC_5 (struct ipq*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct ipq*) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_4__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct sk_buff *VAR_3, u32 VAR_4)
{
 struct ipq *VAR_5;
 struct net *VAR_6;

 VAR_6 = VAR_3->dev ? FUNC_2(VAR_3->dev) : FUNC_2(FUNC_9(VAR_3)->dev);
 FUNC_0(VAR_6, VAR_2);


 if (FUNC_1(&VAR_6->ipv4.frags.mem) > VAR_6->ipv4.frags.high_thresh)
  FUNC_3(VAR_6);


 if ((VAR_5 = FUNC_4(VAR_6, FUNC_6(VAR_3), VAR_4)) != ((void*)0)) {
  int VAR_7;

  FUNC_10(&VAR_5->q.lock);

  VAR_7 = FUNC_5(VAR_5, VAR_3);

  FUNC_11(&VAR_5->q.lock);
  FUNC_7(VAR_5);
  return VAR_7;
 }

 FUNC_0(VAR_6, VAR_1);
 FUNC_8(VAR_3);
 return -VAR_0;
}
