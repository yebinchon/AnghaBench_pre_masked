
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int mac; struct wpabuf* buf; } ;
struct eap_hdr {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,int ,int *,int const*,size_t) ;
 int FUNC_1 (int const*,int *,int ,int *,int const*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct eap_sim_msg*) ;
 scalar_t__ FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 struct eap_hdr* FUNC_6 (struct wpabuf*) ;

struct wpabuf * FUNC_7(struct eap_sim_msg *VAR_1, int VAR_2,
       const u8 *VAR_3,
       const u8 *VAR_4, size_t VAR_5)
{
 struct eap_hdr *VAR_6;
 struct wpabuf *VAR_7;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_6 = FUNC_6(VAR_1->buf);
 VAR_6->length = FUNC_2(FUNC_5(VAR_1->buf));
 if (VAR_3 && VAR_1->mac) {
  FUNC_0(VAR_3, (u8 *) FUNC_4(VAR_1->buf),
    FUNC_5(VAR_1->buf),
    (u8 *) FUNC_6(VAR_1->buf) + VAR_1->mac,
    VAR_4, VAR_5);
 }

 VAR_7 = VAR_1->buf;
 FUNC_3(VAR_1);
 return VAR_7;
}
