
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {int dummy; } ;
struct dccp_hdr {int dccph_type; } ;
struct TYPE_4__ {int dccpd_seq; } ;
struct TYPE_3__ {int dccps_osr; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct sock*,struct sk_buff*,struct dccp_hdr const*,unsigned int const) ;
 int FUNC_2 (struct sock*,int ) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_4,
         struct sk_buff *VAR_5,
         const struct dccp_hdr *VAR_6,
         const unsigned VAR_7)
{
 int VAR_8 = 0;

 switch (VAR_6->dccph_type) {
 case 128:
  FUNC_4(VAR_4, VAR_3);
  break;
 case 130:
  if (VAR_4->sk_state == VAR_2)
   break;
 case 129:
 case 131:
  if (VAR_4->sk_state == VAR_1)
   FUNC_4(VAR_4, VAR_3);

  FUNC_3(VAR_4)->dccps_osr = FUNC_0(VAR_5)->dccpd_seq;
  FUNC_2(VAR_4, VAR_0);

  if (VAR_6->dccph_type == 129 ||
      VAR_6->dccph_type == 130) {
   FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
   VAR_8 = 1;

  }
  break;
 }

 return VAR_8;
}
