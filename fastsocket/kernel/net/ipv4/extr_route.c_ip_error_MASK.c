
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int error; unsigned long rate_tokens; unsigned long rate_last; int dev; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct rtable {TYPE_2__ u; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_3 (struct sk_buff*) ;
 struct rtable* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8)
{
 struct rtable *VAR_9 = FUNC_4(VAR_8);
 unsigned long VAR_10;
 int VAR_11;

 switch (VAR_9->u.dst.error) {
  case 129:
  default:
   goto out;
  case 130:
   VAR_11 = VAR_1;
   break;
  case 128:
   VAR_11 = VAR_2;
   FUNC_0(FUNC_1(VAR_9->u.dst.dev),
     VAR_4);
   break;
  case 131:
   VAR_11 = VAR_3;
   break;
 }

 VAR_10 = VAR_7;
 VAR_9->u.dst.rate_tokens += VAR_10 - VAR_9->u.dst.rate_last;
 if (VAR_9->u.dst.rate_tokens > VAR_5)
  VAR_9->u.dst.rate_tokens = VAR_5;
 VAR_9->u.dst.rate_last = VAR_10;
 if (VAR_9->u.dst.rate_tokens >= VAR_6) {
  VAR_9->u.dst.rate_tokens -= VAR_6;
  FUNC_2(VAR_8, VAR_0, VAR_11, 0);
 }

out: FUNC_3(VAR_8);
 return 0;
}
