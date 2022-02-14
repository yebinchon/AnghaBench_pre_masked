
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {scalar_t__ optlen; unsigned char* __data; int rr; int rr_needaddr; int ts; int ts_needaddr; int ts_needtime; int srr; unsigned char faddr; int cipso; int is_strictroute; } ;
typedef unsigned char __be32 ;
struct TYPE_8__ {struct ip_options opt; } ;
struct TYPE_7__ {int saddr; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {unsigned char rt_spec_dst; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,unsigned char) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (struct ip_options*,int ,int) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;

int FUNC_10(struct ip_options * VAR_4, struct sk_buff * VAR_5)
{
 struct ip_options *VAR_6;
 unsigned char *VAR_7, *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;
 __be32 VAR_12;

 FUNC_6(VAR_4, 0, sizeof(struct ip_options));

 VAR_6 = &(FUNC_0(VAR_5)->opt);

 if (VAR_6->optlen == 0)
  return 0;

 VAR_7 = FUNC_8(VAR_5);
 VAR_8 = VAR_4->__data;

 VAR_12 = FUNC_9(VAR_5)->rt_spec_dst;

 if (VAR_6->rr) {
  VAR_11 = VAR_7[VAR_6->rr+1];
  VAR_9 = VAR_7[VAR_6->rr+2];
  VAR_4->rr = VAR_4->optlen + sizeof(struct iphdr);
  FUNC_5(VAR_8, VAR_7+VAR_6->rr, VAR_11);
  if (VAR_6->rr_needaddr && VAR_9 <= VAR_11) {
   if (VAR_9 + 3 > VAR_11)
    return -VAR_0;
   VAR_8[2] = VAR_9 + 4;
   VAR_4->rr_needaddr = 1;
  }
  VAR_8 += VAR_11;
  VAR_4->optlen += VAR_11;
 }
 if (VAR_6->ts) {
  VAR_11 = VAR_7[VAR_6->ts+1];
  VAR_9 = VAR_7[VAR_6->ts+2];
  VAR_4->ts = VAR_4->optlen + sizeof(struct iphdr);
  FUNC_5(VAR_8, VAR_7+VAR_6->ts, VAR_11);
  if (VAR_9 <= VAR_11) {
   if (VAR_6->ts_needaddr) {
    if (VAR_9 + 3 > VAR_11)
     return -VAR_0;
    VAR_4->ts_needaddr = 1;
    VAR_9 += 4;
   }
   if (VAR_6->ts_needtime) {
    if (VAR_9 + 3 > VAR_11)
     return -VAR_0;
    if ((VAR_8[3]&0xF) != VAR_2) {
     VAR_4->ts_needtime = 1;
     VAR_9 += 4;
    } else {
     VAR_4->ts_needtime = 0;

     if (VAR_9 + 8 <= VAR_11) {
      __be32 VAR_13;

      FUNC_5(&VAR_13, VAR_7+VAR_9-1, 4);
      if (FUNC_2(FUNC_1(FUNC_7(VAR_5)->dev), VAR_13) != VAR_3) {
       VAR_4->ts_needtime = 1;
       VAR_9 += 8;
      }
     }
    }
   }
   VAR_8[2] = VAR_9;
  }
  VAR_8 += VAR_11;
  VAR_4->optlen += VAR_11;
 }
 if (VAR_6->srr) {
  unsigned char * VAR_14 = VAR_7+VAR_6->srr;
  __be32 VAR_15;

  VAR_11 = VAR_14[1];
  VAR_9 = VAR_14[2];
  VAR_10 = 0;
  if (VAR_9 > VAR_11)
   VAR_9 = VAR_11 + 1;
  VAR_9 -= 4;
  if (VAR_9 > 3) {
   FUNC_5(&VAR_15, &VAR_14[VAR_9-1], 4);
   for (VAR_9-=4, VAR_10=4; VAR_9 > 3; VAR_9-=4, VAR_10+=4)
    FUNC_5(&VAR_8[VAR_10-1], &VAR_14[VAR_9-1], 4);



   if (FUNC_4(&FUNC_3(VAR_5)->saddr,
       &VAR_14[VAR_9 + 3], 4) == 0)
    VAR_10 -= 4;
  }
  if (VAR_10 > 3) {
   FUNC_5(&VAR_14[VAR_10-1], &VAR_12, 4);
   VAR_4->faddr = VAR_15;
   VAR_8[0] = VAR_14[0];
   VAR_8[1] = VAR_10+3;
   VAR_8[2] = 4;
   VAR_8 += VAR_10+3;
   VAR_4->srr = VAR_4->optlen + sizeof(struct iphdr);
   VAR_4->optlen += VAR_10+3;
   VAR_4->is_strictroute = VAR_6->is_strictroute;
  }
 }
 if (VAR_6->cipso) {
  VAR_11 = VAR_7[VAR_6->cipso+1];
  VAR_4->cipso = VAR_4->optlen+sizeof(struct iphdr);
  FUNC_5(VAR_8, VAR_7+VAR_6->cipso, VAR_11);
  VAR_8 += VAR_11;
  VAR_4->optlen += VAR_11;
 }
 while (VAR_4->optlen & 3) {
  *VAR_8++ = VAR_1;
  VAR_4->optlen++;
 }
 return 0;
}
