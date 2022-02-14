
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm6_tunnel_spi {int spi; } ;
typedef int __be32 ;


 struct xfrm6_tunnel_spi* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__be32 FUNC_4(xfrm_address_t *VAR_1)
{
 struct xfrm6_tunnel_spi *VAR_2;
 u32 VAR_3;

 FUNC_2(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_2 ? VAR_2->spi : 0;
 FUNC_3(&VAR_0);
 return FUNC_1(VAR_3);
}
