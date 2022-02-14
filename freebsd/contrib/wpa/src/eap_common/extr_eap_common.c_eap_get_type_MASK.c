
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_hdr {int dummy; } ;
typedef int const EapType ;


 int const VAR_0 ;
 scalar_t__ FUNC_0 (struct wpabuf const*) ;
 int FUNC_1 (struct wpabuf const*) ;

EapType FUNC_2(const struct wpabuf *VAR_1)
{
 if (FUNC_1(VAR_1) < sizeof(struct eap_hdr) + 1)
  return VAR_0;

 return ((const u8 *) FUNC_0(VAR_1))[sizeof(struct eap_hdr)];
}
