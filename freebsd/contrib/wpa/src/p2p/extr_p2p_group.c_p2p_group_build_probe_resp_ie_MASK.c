
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct p2p_group {scalar_t__ wfd_ie; TYPE_1__* p2p; scalar_t__ members; int noa; } ;
struct TYPE_2__ {scalar_t__* vendor_elem; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct wpabuf*,TYPE_1__*,int *) ;
 int FUNC_1 (struct p2p_group*,struct wpabuf*,int) ;
 int FUNC_2 (struct p2p_group*,struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 struct wpabuf* FUNC_4 (struct wpabuf*) ;
 struct wpabuf* FUNC_5 (int) ;
 struct wpabuf* FUNC_6 (struct wpabuf*,struct wpabuf*) ;
 struct wpabuf* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct p2p_group *VAR_1)
{
 struct wpabuf *VAR_2, *VAR_3;

 VAR_2 = FUNC_5(500);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_2, VAR_1->noa);


 FUNC_0(VAR_2, VAR_1->p2p, ((void*)0));


 if (VAR_1->members)
  FUNC_1(VAR_1, VAR_2, -1);

 VAR_3 = FUNC_4(VAR_2);
 FUNC_8(VAR_2);

 if (VAR_1->p2p->vendor_elem &&
     VAR_1->p2p->vendor_elem[VAR_0]) {
  struct wpabuf *VAR_4;
  VAR_4 = FUNC_7(VAR_1->p2p->vendor_elem[VAR_0]);
  VAR_3 = FUNC_6(VAR_4, VAR_3);
 }
 return VAR_3;
}
