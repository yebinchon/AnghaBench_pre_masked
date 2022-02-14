
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_ssl_data {size_t tls_in_left; struct wpabuf const* tls_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_ssl_data*) ;
 int FUNC_1 (int ,char*,...) ;
 size_t FUNC_2 (struct wpabuf const*) ;
 int FUNC_3 (struct wpabuf const*,struct wpabuf const*) ;
 scalar_t__ FUNC_4 (struct wpabuf const**,size_t) ;

__attribute__((used)) static int FUNC_5(struct eap_ssl_data *VAR_3,
         const struct wpabuf *VAR_4)
{
 size_t VAR_5, VAR_6;

 VAR_5 = VAR_3->tls_in ? FUNC_2(VAR_3->tls_in) : 0;
 VAR_6 = VAR_4 ? FUNC_2(VAR_4) : 0;

 if (VAR_5 + VAR_6 == 0) {

  FUNC_1(VAR_2, "SSL: Invalid reassembly state: "
      "tls_in_left=%lu tls_in_len=%lu in_len=%lu",
      (unsigned long) VAR_3->tls_in_left,
      (unsigned long) VAR_5,
      (unsigned long) VAR_6);
  FUNC_0(VAR_3);
  return -1;
 }

 if (VAR_5 + VAR_6 > 65536) {




  FUNC_1(VAR_1, "SSL: Too long TLS fragment (size over "
      "64 kB)");
  FUNC_0(VAR_3);
  return -1;
 }

 if (VAR_6 > VAR_3->tls_in_left) {

  FUNC_1(VAR_1, "SSL: more data than TLS message length "
      "indicated");
  FUNC_0(VAR_3);
  return -1;
 }

 if (FUNC_4(&VAR_3->tls_in, VAR_6) < 0) {
  FUNC_1(VAR_1, "SSL: Could not allocate memory for TLS "
      "data");
  FUNC_0(VAR_3);
  return -1;
 }
 if (VAR_4)
  FUNC_3(VAR_3->tls_in, VAR_4);
 VAR_3->tls_in_left -= VAR_6;

 if (VAR_3->tls_in_left > 0) {
  FUNC_1(VAR_0, "SSL: Need %lu bytes more input "
      "data", (unsigned long) VAR_3->tls_in_left);
  return 1;
 }

 return 0;
}
