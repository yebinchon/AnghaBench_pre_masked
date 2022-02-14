
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {int error_code; int pipe_handle; scalar_t__ message_id; int utid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct sock*,struct sk_buff*,int *) ;
 void* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,void const*,int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct sock*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_3, struct sk_buff *VAR_4,
   u8 VAR_5, const void *VAR_6, int VAR_7, gfp_t VAR_8)
{
 const struct pnpipehdr *VAR_9 = FUNC_4(VAR_4);
 struct pnpipehdr *VAR_10;
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_2(VAR_1 + VAR_7, VAR_8);
 if (!VAR_11)
  return -VAR_0;
 FUNC_8(VAR_11, VAR_3);

 FUNC_6(VAR_11, VAR_1);
 FUNC_1(VAR_11, VAR_7);
 FUNC_5(VAR_11, VAR_6, VAR_7);
 FUNC_0(VAR_11, sizeof(*VAR_10));
 FUNC_7(VAR_11);
 VAR_10 = FUNC_4(VAR_11);
 VAR_10->utid = VAR_9->utid;
 VAR_10->message_id = VAR_9->message_id + 1;
 VAR_10->pipe_handle = VAR_9->pipe_handle;
 VAR_10->error_code = VAR_5;

 return FUNC_3(VAR_3, VAR_11, &VAR_2);
}
