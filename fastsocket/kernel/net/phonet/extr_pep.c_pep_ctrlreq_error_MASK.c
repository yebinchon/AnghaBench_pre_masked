
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sockaddr_pn {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {void** data; int pipe_handle; int message_id; int utid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,struct sockaddr_pn*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,struct sockaddr_pn*) ;
 struct pnpipehdr* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, struct sk_buff *VAR_6, u8 VAR_7,
    gfp_t VAR_8)
{
 const struct pnpipehdr *VAR_9 = FUNC_3(VAR_6);
 struct sk_buff *VAR_10;
 struct pnpipehdr *VAR_11;
 struct sockaddr_pn VAR_12;

 VAR_10 = FUNC_0(VAR_2 + 4, VAR_8);
 if (!VAR_10)
  return -VAR_0;
 FUNC_6(VAR_10, VAR_5);

 FUNC_5(VAR_10, VAR_1);
 VAR_11 = (struct pnpipehdr *)FUNC_4(VAR_10, sizeof(*VAR_11) + 4);

 VAR_11->utid = VAR_9->utid;
 VAR_11->message_id = VAR_4;
 VAR_11->pipe_handle = VAR_9->pipe_handle;
 VAR_11->data[0] = VAR_9->data[1];
 VAR_11->data[1] = VAR_9->data[0];
 VAR_11->data[2] = VAR_7;
 VAR_11->data[3] = VAR_3;
 VAR_11->data[4] = VAR_3;

 FUNC_1(VAR_6, &VAR_12);
 return FUNC_2(VAR_5, VAR_10, &VAR_12);
}
