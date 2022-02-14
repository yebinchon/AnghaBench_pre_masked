
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm6_tunnel_spi {int spi; int refcnt; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 struct xfrm6_tunnel_spi* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__be32 FUNC_6(xfrm_address_t *VAR_1)
{
 struct xfrm6_tunnel_spi *VAR_2;
 u32 VAR_3;

 FUNC_4(&VAR_0);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_2(&VAR_2->refcnt);
  VAR_3 = VAR_2->spi;
 } else
  VAR_3 = FUNC_0(VAR_1);
 FUNC_5(&VAR_0);

 return FUNC_3(VAR_3);
}
