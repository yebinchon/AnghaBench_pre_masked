
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct irlap_cb {int caddr; int vr; } ;


 int VAR_0 ;
 int FUNC_0 (struct irlap_cb*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct irlap_cb *VAR_1, struct sk_buff *VAR_2,
          int VAR_3)
{

 VAR_2->data[0] = VAR_1->caddr;
 VAR_2->data[0] |= (VAR_3) ? VAR_0 : 0;


 VAR_2->data[1] |= (VAR_1->vr << 5);

 FUNC_0(VAR_1, VAR_2);
}
