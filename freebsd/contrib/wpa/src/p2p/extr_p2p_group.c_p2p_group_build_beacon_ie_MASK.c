
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_group {int noa; TYPE_2__* p2p; } ;
struct TYPE_4__ {TYPE_1__* cfg; scalar_t__* vendor_elem; scalar_t__ wfd_ie_beacon; } ;
struct TYPE_3__ {int dev_addr; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct wpabuf*,int ) ;
 int * FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,int *) ;
 int FUNC_3 (struct p2p_group*,struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 struct wpabuf* FUNC_5 (int) ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct p2p_group *VAR_1)
{
 struct wpabuf *VAR_2;
 u8 *VAR_3;
 size_t VAR_4 = 0;






 if (VAR_1->p2p->vendor_elem &&
     VAR_1->p2p->vendor_elem[VAR_0])
  VAR_4 += FUNC_6(VAR_1->p2p->vendor_elem[VAR_0]);

 VAR_2 = FUNC_5(257 + VAR_4);
 if (VAR_2 == ((void*)0))
  return ((void*)0);






 if (VAR_1->p2p->vendor_elem &&
     VAR_1->p2p->vendor_elem[VAR_0])
  FUNC_7(VAR_2,
          VAR_1->p2p->vendor_elem[VAR_0]);

 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(VAR_1, VAR_2);
 FUNC_0(VAR_2, VAR_1->p2p->cfg->dev_addr);
 FUNC_4(VAR_2, VAR_1->noa);
 FUNC_2(VAR_2, VAR_3);

 return VAR_2;
}
