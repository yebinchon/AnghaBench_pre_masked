
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_parm {int i_flags; scalar_t__ i_key; } ;
typedef scalar_t__ __be32 ;
typedef int __be16 ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct ip_tunnel_parm *VAR_1,
    __be16 VAR_2, __be32 VAR_3)
{
 if (VAR_1->i_flags & VAR_0) {
  if (VAR_2 & VAR_0)
   return VAR_3 == VAR_1->i_key;
  else

   return 0;
 } else
  return !(VAR_2 & VAR_0);
}
