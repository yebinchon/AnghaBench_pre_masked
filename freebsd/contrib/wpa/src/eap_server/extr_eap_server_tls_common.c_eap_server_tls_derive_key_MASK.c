
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_ssl_data {int conn; } ;
struct eap_sm {int ssl_ctx; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int ,int ,char const*,int const*,size_t,int *,size_t) ;

u8 * FUNC_3(struct eap_sm *VAR_0, struct eap_ssl_data *VAR_1,
          const char *VAR_2, const u8 *VAR_3,
          size_t VAR_4, size_t VAR_5)
{
 u8 *VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (FUNC_2(VAR_0->ssl_ctx, VAR_1->conn, VAR_2,
          VAR_3, VAR_4, VAR_6, VAR_5)) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
