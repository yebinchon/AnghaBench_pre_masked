
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_state {struct ipcomp_data* data; } ;
struct sk_buff {int len; int * data; } ;
struct ipcomp_data {int tfms; } ;
struct ip_comp_hdr {int dummy; } ;
struct crypto_comp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_comp*,int *,int const,int *,int*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int) ;
 void** FUNC_5 (int ,int const) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct xfrm_state *VAR_3, struct sk_buff *VAR_4)
{
 struct ipcomp_data *VAR_5 = VAR_3->data;
 const int VAR_6 = VAR_4->len;
 int VAR_7 = VAR_1;
 u8 *VAR_8 = VAR_4->data;
 const int VAR_9 = FUNC_1();
 u8 *VAR_10 = *FUNC_5(VAR_2, VAR_9);
 struct crypto_comp *VAR_11 = *FUNC_5(VAR_5->tfms, VAR_9);
 int VAR_12;

 FUNC_2();
 VAR_12 = FUNC_0(VAR_11, VAR_8, VAR_6, VAR_10, &VAR_7);
 FUNC_3();
 if (VAR_12)
  goto out;

 if ((VAR_7 + sizeof(struct ip_comp_hdr)) >= VAR_6) {
  VAR_12 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_8 + sizeof(struct ip_comp_hdr), VAR_10, VAR_7);
 FUNC_7();

 FUNC_6(VAR_4, VAR_7 + sizeof(struct ip_comp_hdr));
 return 0;

out:
 FUNC_7();
 return VAR_12;
}
