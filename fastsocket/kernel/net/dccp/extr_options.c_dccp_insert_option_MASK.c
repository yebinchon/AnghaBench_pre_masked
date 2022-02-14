
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ dccpd_opt_len; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (unsigned char*,void const*,unsigned char const) ;
 unsigned char* FUNC_2 (struct sk_buff*,unsigned char const) ;

int FUNC_3(struct sock *VAR_1, struct sk_buff *VAR_2,
   const unsigned char VAR_3,
   const void *VAR_4, const unsigned char VAR_5)
{
 unsigned char *VAR_6;

 if (FUNC_0(VAR_2)->dccpd_opt_len + VAR_5 + 2 > VAR_0)
  return -1;

 FUNC_0(VAR_2)->dccpd_opt_len += VAR_5 + 2;

 VAR_6 = FUNC_2(VAR_2, VAR_5 + 2);
 *VAR_6++ = VAR_3;
 *VAR_6++ = VAR_5 + 2;

 FUNC_1(VAR_6, VAR_4, VAR_5);
 return 0;
}
