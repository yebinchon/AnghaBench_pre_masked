
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_ndp_count; } ;
struct TYPE_2__ {scalar_t__ dccpd_opt_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__,unsigned char*,int const) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;
 unsigned char* FUNC_5 (struct sk_buff*,int const) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct dccp_sock *VAR_4 = FUNC_4(VAR_2);
 u64 VAR_5 = VAR_4->dccps_ndp_count;

 if (FUNC_3(VAR_3))
  ++VAR_4->dccps_ndp_count;
 else
  VAR_4->dccps_ndp_count = 0;

 if (VAR_5 > 0) {
  unsigned char *VAR_6;
  const int VAR_7 = FUNC_2(VAR_5);
  const int VAR_8 = VAR_7 + 2;

  if (FUNC_0(VAR_3)->dccpd_opt_len + VAR_8 > VAR_1)
   return -1;

  FUNC_0(VAR_3)->dccpd_opt_len += VAR_8;

  VAR_6 = FUNC_5(VAR_3, VAR_8);
  *VAR_6++ = VAR_0;
  *VAR_6++ = VAR_8;
  FUNC_1(VAR_5, VAR_6, VAR_7);
 }

 return 0;
}
