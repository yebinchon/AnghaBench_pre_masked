
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*,int ) ;

struct wpabuf * FUNC_3(u8 VAR_5, u8 VAR_6)
{
 struct wpabuf *VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_0, 2, VAR_6, VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_3, "EAP-WSC: Failed to allocate memory for "
      "FRAG_ACK");
  return ((void*)0);
 }

 FUNC_1(VAR_2, "EAP-WSC: Send WSC/FRAG_ACK");
 FUNC_2(VAR_7, VAR_4);
 FUNC_2(VAR_7, 0);

 return VAR_7;
}
