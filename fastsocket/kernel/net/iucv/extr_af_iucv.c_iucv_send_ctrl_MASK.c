
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct af_iucv_trans_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sock*,struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 struct sk_buff *VAR_5;

 VAR_4 = sizeof(struct af_iucv_trans_hdr) + VAR_0;
 VAR_5 = FUNC_2(VAR_1, VAR_4, 1, &VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_5, VAR_4);
  VAR_3 = FUNC_0(((void*)0), VAR_1, VAR_5, VAR_2);
 }
 return VAR_3;
}
