
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
typedef int gss_qop_t ;
typedef int gss_ctx_id_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const,scalar_t__*,int,int ,struct mbuf**,int*) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_1, const gss_ctx_id_t VAR_2,
    int VAR_3, gss_qop_t VAR_4, struct mbuf **VAR_5, int *VAR_6)
{

 if (!VAR_2) {
  *VAR_1 = 0;
  return (VAR_0);
 }

 return (FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4,
  VAR_5, VAR_6));
}
