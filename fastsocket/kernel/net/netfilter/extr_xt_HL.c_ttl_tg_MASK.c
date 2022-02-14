
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {struct ipt_TTL_info* targinfo; } ;
struct sk_buff {int len; } ;
struct ipt_TTL_info {int mode; int ttl; } ;
struct iphdr {int ttl; int check; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 struct iphdr *VAR_4;
 const struct ipt_TTL_info *VAR_5 = VAR_3->targinfo;
 int VAR_6;

 if (!FUNC_3(VAR_2, VAR_2->len))
  return VAR_0;

 VAR_4 = FUNC_2(VAR_2);

 switch (VAR_5->mode) {
  case 128:
   VAR_6 = VAR_5->ttl;
   break;
  case 129:
   VAR_6 = VAR_4->ttl + VAR_5->ttl;
   if (VAR_6 > 255)
    VAR_6 = 255;
   break;
  case 130:
   VAR_6 = VAR_4->ttl - VAR_5->ttl;
   if (VAR_6 < 0)
    VAR_6 = 0;
   break;
  default:
   VAR_6 = VAR_4->ttl;
   break;
 }

 if (VAR_6 != VAR_4->ttl) {
  FUNC_0(&VAR_4->check, FUNC_1(VAR_4->ttl << 8),
        FUNC_1(VAR_6 << 8));
  VAR_4->ttl = VAR_6;
 }

 return VAR_1;
}
