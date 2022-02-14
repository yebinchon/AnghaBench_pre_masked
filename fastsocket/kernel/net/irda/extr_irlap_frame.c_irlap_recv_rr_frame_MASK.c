
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct irlap_info {int nr; } ;
struct irlap_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irlap_cb*,int ,struct sk_buff*,struct irlap_info*) ;

__attribute__((used)) static inline void FUNC_1(struct irlap_cb *VAR_2,
           struct sk_buff *VAR_3,
           struct irlap_info *VAR_4, int VAR_5)
{
 VAR_4->nr = VAR_3->data[1] >> 5;


 if (VAR_5)
  FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4);
 else
  FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4);
}
