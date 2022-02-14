
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {void** data; int pep_type; int pipe_handle; int message_id; scalar_t__ utid; } ;
struct pep_sock {int pipe_handle; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 int VAR_5 ;
 int FUNC_3 (struct sock*,struct sk_buff*,int *) ;
 struct pnpipehdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,struct sock*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_6, u8 VAR_7, u8 VAR_8, gfp_t VAR_9)
{
 struct pep_sock *VAR_10 = FUNC_2(VAR_6);
 struct pnpipehdr *VAR_11;
 struct sk_buff *VAR_12;

 VAR_12 = FUNC_1(VAR_1 + 4, VAR_9);
 if (!VAR_12)
  return -VAR_0;
 FUNC_7(VAR_12, VAR_6);

 FUNC_5(VAR_12, VAR_1 + 4);
 FUNC_0(VAR_12, sizeof(*VAR_11) + 4);
 FUNC_6(VAR_12);
 VAR_11 = FUNC_4(VAR_12);
 VAR_11->utid = 0;
 VAR_11->message_id = VAR_3;
 VAR_11->pipe_handle = VAR_10->pipe_handle;
 VAR_11->pep_type = VAR_4;
 VAR_11->data[1] = VAR_7;
 VAR_11->data[2] = VAR_2;
 VAR_11->data[3] = VAR_2;
 VAR_11->data[4] = VAR_8;

 return FUNC_3(VAR_6, VAR_12, &VAR_5);
}
