
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tc_cbq_lssopt {int change; int offtime; scalar_t__ minidle; int maxidle; int avpkt; int level; int ewma_log; int flags; } ;
struct sk_buff {int len; } ;
struct cbq_class {int offtime; scalar_t__ minidle; int maxidle; int avpkt; int level; int ewma_log; int * share; int * borrow; } ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_cbq_lssopt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static __inline__ int FUNC_3(struct sk_buff *VAR_3, struct cbq_class *VAR_4)
{
 unsigned char *VAR_5 = FUNC_2(VAR_3);
 struct tc_cbq_lssopt VAR_6;

 VAR_6.flags = 0;
 if (VAR_4->borrow == ((void*)0))
  VAR_6.flags |= VAR_1;
 if (VAR_4->share == ((void*)0))
  VAR_6.flags |= VAR_2;
 VAR_6.ewma_log = VAR_4->ewma_log;
 VAR_6.level = VAR_4->level;
 VAR_6.avpkt = VAR_4->avpkt;
 VAR_6.maxidle = VAR_4->maxidle;
 VAR_6.minidle = (u32)(-VAR_4->minidle);
 VAR_6.offtime = VAR_4->offtime;
 VAR_6.change = ~0;
 FUNC_0(VAR_3, VAR_0, sizeof(VAR_6), &VAR_6);
 return VAR_3->len;

nla_put_failure:
 FUNC_1(VAR_3, VAR_5);
 return -1;
}
