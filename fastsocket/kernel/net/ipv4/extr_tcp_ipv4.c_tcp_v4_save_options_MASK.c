
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ip_options {scalar_t__ optlen; } ;
struct TYPE_2__ {struct ip_options opt; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct ip_options*,struct sk_buff*) ;
 int FUNC_2 (struct ip_options*) ;
 struct ip_options* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct ip_options*) ;

__attribute__((used)) static struct ip_options *FUNC_5(struct sock *VAR_1,
           struct sk_buff *VAR_2)
{
 struct ip_options *VAR_3 = &(FUNC_0(VAR_2)->opt);
 struct ip_options *VAR_4 = ((void*)0);

 if (VAR_3 && VAR_3->optlen) {
  VAR_4 = FUNC_3(VAR_3->optlen, VAR_0);
  if (VAR_4) {
   if (FUNC_1(VAR_4, VAR_2)) {
    FUNC_2(VAR_4);
    VAR_4 = ((void*)0);
   } else {
    FUNC_4(VAR_4);
   }
  }
 }
 return VAR_4;
}
