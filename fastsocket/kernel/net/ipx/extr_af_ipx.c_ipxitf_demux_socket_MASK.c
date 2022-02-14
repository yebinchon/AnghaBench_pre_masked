
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sock; } ;
struct ipxhdr {TYPE_1__ ipx_dest; } ;
struct ipx_interface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipxhdr* FUNC_0 (struct sk_buff*) ;
 struct ipx_interface* VAR_2 ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_2 (struct ipx_interface*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sock* FUNC_4 (struct ipx_interface*,struct ipxhdr*) ;
 int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct ipx_interface *VAR_3,
          struct sk_buff *VAR_4, int VAR_5)
{
 struct ipxhdr *VAR_6 = FUNC_0(VAR_4);
 struct sock *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 struct sk_buff *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 int VAR_11;

 if (VAR_3 == VAR_2 && FUNC_5(VAR_6->ipx_dest.sock) == 0x451)
  VAR_7 = FUNC_4(VAR_3, VAR_6);
 if (!VAR_7)

  VAR_7 = FUNC_2(VAR_3, VAR_6->ipx_dest.sock);
 if (VAR_2 && VAR_3 != VAR_2) {
  const int VAR_12 = FUNC_5(VAR_6->ipx_dest.sock);

  if (VAR_12 == 0x452 || VAR_12 == 0x453 || VAR_12 == 0x456)




   VAR_8 = FUNC_2(VAR_2,
       VAR_6->ipx_dest.sock);
 }




 VAR_11 = 0;
 if (!VAR_7 && !VAR_8) {
  if (!VAR_5)
   FUNC_3(VAR_4);
  goto out;
 }
 if (VAR_5)
  VAR_9 = FUNC_6(VAR_4, VAR_1);
 else
  VAR_9 = VAR_4;

 VAR_11 = -VAR_0;
 if (!VAR_9)
  goto out_put;


 if (VAR_7 && VAR_8)
  VAR_10 = FUNC_6(VAR_9, VAR_1);
 else
  VAR_10 = VAR_9;

 if (VAR_7)
  FUNC_1(VAR_7, VAR_9);

 if (!VAR_10)
  goto out_put;

 if (VAR_8)
  FUNC_1(VAR_8, VAR_10);

 VAR_11 = 0;
out_put:
 if (VAR_7)
  FUNC_7(VAR_7);
 if (VAR_8)
  FUNC_7(VAR_8);
out:
 return VAR_11;
}
