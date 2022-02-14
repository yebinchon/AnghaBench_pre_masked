
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_group {TYPE_1__* p2p; scalar_t__ wfd_ie; } ;
struct TYPE_2__ {scalar_t__* vendor_elem; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (struct wpabuf*) ;
 int FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int *) ;
 struct wpabuf* FUNC_3 (int) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct wpabuf*,scalar_t__) ;

struct wpabuf * FUNC_6(struct p2p_group *VAR_2, u8 VAR_3)
{
 struct wpabuf *VAR_4;
 u8 *VAR_5;
 size_t VAR_6 = 0;






 if (VAR_2->p2p->vendor_elem &&
     VAR_2->p2p->vendor_elem[VAR_1])
  VAR_6 += FUNC_4(VAR_2->p2p->vendor_elem[VAR_1]);







 VAR_4 = FUNC_3(20 + VAR_6);
 if (VAR_4 == ((void*)0))
  return ((void*)0);






 if (VAR_2->p2p->vendor_elem &&
     VAR_2->p2p->vendor_elem[VAR_1])
  FUNC_5(VAR_4,
          VAR_2->p2p->vendor_elem[VAR_1]);

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_3 != VAR_0)
  FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_4, VAR_5);

 return VAR_4;
}
