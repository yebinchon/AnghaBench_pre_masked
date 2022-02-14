
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct sk_buff {int mac_len; } ;
struct iphdr {int dummy; } ;
struct TYPE_4__ {scalar_t__ protocol; int tos; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_10(struct xfrm_state *VAR_5, struct sk_buff *VAR_6)
{
 const unsigned char *VAR_7;
 int VAR_8 = -VAR_0;

 if (FUNC_0(VAR_6)->protocol != VAR_2)
  goto out;

 if (!FUNC_5(VAR_6, sizeof(struct iphdr)))
  goto out;

 VAR_8 = FUNC_9(VAR_6, VAR_1);
 if (VAR_8)
  goto out;

 if (VAR_5->props.flags & VAR_3)
  FUNC_3(FUNC_0(VAR_6)->tos, FUNC_2(VAR_6));
 if (!(VAR_5->props.flags & VAR_4))
  FUNC_1(VAR_6);

 VAR_7 = FUNC_6(VAR_6);
 FUNC_8(VAR_6, -VAR_6->mac_len);
 FUNC_4(FUNC_6(VAR_6), VAR_7, VAR_6->mac_len);
 FUNC_7(VAR_6);
 VAR_8 = 0;

out:
 return VAR_8;
}
