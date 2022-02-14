
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct fst_iface {struct wpabuf* mb_ie; } ;


 int FUNC_0 (struct wpabuf*) ;

void FUNC_1(struct fst_iface *VAR_0, struct wpabuf *VAR_1)
{
 FUNC_0(VAR_0->mb_ie);
 VAR_0->mb_ie = VAR_1;
}
