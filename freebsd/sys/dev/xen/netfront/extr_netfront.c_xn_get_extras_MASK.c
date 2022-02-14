
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif_extra_info {int flags; int type; } ;
struct netfront_rxq {int ring; } ;
struct mbuf {int dummy; } ;
typedef int grant_ref_t ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct netif_extra_info*,struct netif_extra_info*,int) ;
 struct mbuf* FUNC_3 (struct netfront_rxq*,scalar_t__) ;
 int FUNC_4 (struct netfront_rxq*,scalar_t__) ;
 int FUNC_5 (struct netfront_rxq*,struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_6(struct netfront_rxq *VAR_3,
    struct netif_extra_info *VAR_4, RING_IDX VAR_5, RING_IDX *VAR_6)
{
 struct netif_extra_info *VAR_7;

 int VAR_8 = 0;

 do {
  struct mbuf *VAR_9;
  grant_ref_t VAR_10;

  if (FUNC_1(*VAR_6 + 1 == VAR_5)) {
   VAR_8 = VAR_0;
   break;
  }

  VAR_7 = (struct netif_extra_info *)
  FUNC_0(&VAR_3->ring, ++(*VAR_6));

  if (FUNC_1(!VAR_7->type ||
   VAR_7->type >= VAR_2)) {
   VAR_8 = VAR_0;
  } else {
   FUNC_2(&VAR_4[VAR_7->type - 1], VAR_7, sizeof(*VAR_7));
  }

  VAR_9 = FUNC_3(VAR_3, *VAR_6);
  VAR_10 = FUNC_4(VAR_3, *VAR_6);
  FUNC_5(VAR_3, VAR_9, VAR_10);
 } while (VAR_7->flags & VAR_1);

 return VAR_8;
}
