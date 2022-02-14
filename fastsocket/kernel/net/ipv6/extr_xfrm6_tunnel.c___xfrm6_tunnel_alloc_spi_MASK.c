
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef scalar_t__ u32 ;
struct xfrm6_tunnel_spi {int list_byaddr; int list_byspi; int refcnt; scalar_t__ spi; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 struct xfrm6_tunnel_spi* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_6(xfrm_address_t *VAR_7)
{
 u32 VAR_8;
 struct xfrm6_tunnel_spi *VAR_9;
 int VAR_10;

 if (VAR_3 < VAR_2 ||
     VAR_3 >= VAR_1)
  VAR_3 = VAR_2;
 else
  VAR_3++;

 for (VAR_8 = VAR_3; VAR_8 <= VAR_1; VAR_8++) {
  VAR_10 = FUNC_0(VAR_8);
  if (VAR_10 >= 0)
   goto alloc_spi;
 }
 for (VAR_8 = VAR_2; VAR_8 < VAR_3; VAR_8++) {
  VAR_10 = FUNC_0(VAR_8);
  if (VAR_10 >= 0)
   goto alloc_spi;
 }
 VAR_8 = 0;
 goto out;
alloc_spi:
 VAR_3 = VAR_8;
 VAR_9 = FUNC_3(VAR_6, VAR_0);
 if (!VAR_9)
  goto out;

 FUNC_4(&VAR_9->addr, VAR_7, sizeof(VAR_9->addr));
 VAR_9->spi = VAR_8;
 FUNC_1(&VAR_9->refcnt, 1);

 FUNC_2(&VAR_9->list_byspi, &VAR_5[VAR_10]);

 VAR_10 = FUNC_5(VAR_7);
 FUNC_2(&VAR_9->list_byaddr, &VAR_4[VAR_10]);
out:
 return VAR_8;
}
