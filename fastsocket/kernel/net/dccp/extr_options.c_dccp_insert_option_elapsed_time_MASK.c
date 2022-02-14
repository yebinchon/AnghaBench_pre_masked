
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ dccpd_opt_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char*,int const*,int) ;
 unsigned char* FUNC_5 (struct sk_buff*,int const) ;

int FUNC_6(struct sock *VAR_2, struct sk_buff *VAR_3,
        u32 VAR_4)
{
 const int VAR_5 = FUNC_1(VAR_4);
 const int VAR_6 = 2 + VAR_5;
 unsigned char *VAR_7;

 if (VAR_5 == 0)
  return 0;

 if (FUNC_0(VAR_3)->dccpd_opt_len + VAR_6 > VAR_1)
  return -1;

 FUNC_0(VAR_3)->dccpd_opt_len += VAR_6;

 VAR_7 = FUNC_5(VAR_3, VAR_6);
 *VAR_7++ = VAR_0;
 *VAR_7++ = VAR_6;

 if (VAR_5 == 2) {
  const __be16 VAR_8 = FUNC_3((u16)VAR_4);
  FUNC_4(VAR_7, &VAR_8, 2);
 } else {
  const __be32 VAR_9 = FUNC_2(VAR_4);
  FUNC_4(VAR_7, &VAR_9, 4);
 }

 return 0;
}
