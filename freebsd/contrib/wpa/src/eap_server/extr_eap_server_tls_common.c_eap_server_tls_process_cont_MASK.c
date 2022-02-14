
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_ssl_data {int tls_in; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int const*,size_t) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct eap_ssl_data *VAR_1,
           const u8 *VAR_2, size_t VAR_3)
{

 if (VAR_3 > FUNC_2(VAR_1->tls_in)) {
  FUNC_0(VAR_0, "SSL: Fragment overflow");
  return -1;
 }

 FUNC_1(VAR_1->tls_in, VAR_2, VAR_3);
 FUNC_0(VAR_0, "SSL: Received %lu bytes, waiting for %lu "
     "bytes more", (unsigned long) VAR_3,
     (unsigned long) FUNC_2(VAR_1->tls_in));

 return 0;
}
