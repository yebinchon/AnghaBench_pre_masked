
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct ikev2_hdr {int length; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wpabuf*) ;
 struct ikev2_hdr* FUNC_2 (struct wpabuf*) ;

void FUNC_3(struct wpabuf *VAR_0)
{
 struct ikev2_hdr *VAR_1;


 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1->length, FUNC_1(VAR_0));
}
