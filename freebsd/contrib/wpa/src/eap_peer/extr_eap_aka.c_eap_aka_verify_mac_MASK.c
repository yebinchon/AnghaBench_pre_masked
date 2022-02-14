
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_aka_data {scalar_t__ eap_method; int k_aut; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct wpabuf const*,int const*,int const*,size_t) ;
 int FUNC_1 (int ,struct wpabuf const*,int const*,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(struct eap_aka_data *VAR_1,
         const struct wpabuf *VAR_2,
         const u8 *VAR_3, const u8 *VAR_4,
         size_t VAR_5)
{
 if (VAR_1->eap_method == VAR_0)
  return FUNC_1(VAR_1->k_aut, VAR_2, VAR_3, VAR_4,
       VAR_5);
 return FUNC_0(VAR_1->k_aut, VAR_2, VAR_3, VAR_4, VAR_5);
}
