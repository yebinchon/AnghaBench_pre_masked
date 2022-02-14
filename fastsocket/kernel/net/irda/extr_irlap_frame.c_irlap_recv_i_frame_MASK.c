
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct irlap_info {int nr; int pf; int ns; } ;
struct irlap_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irlap_cb*,int ,struct sk_buff*,struct irlap_info*) ;

__attribute__((used)) static inline void FUNC_1(struct irlap_cb *VAR_3,
          struct sk_buff *VAR_4,
          struct irlap_info *VAR_5, int VAR_6)
{
 VAR_5->nr = VAR_4->data[1] >> 5;
 VAR_5->pf = VAR_4->data[1] & VAR_0;
 VAR_5->ns = (VAR_4->data[1] >> 1) & 0x07;


 if (VAR_6)
  FUNC_0(VAR_3, VAR_1, VAR_4, VAR_5);
 else
  FUNC_0(VAR_3, VAR_2, VAR_4, VAR_5);
}
