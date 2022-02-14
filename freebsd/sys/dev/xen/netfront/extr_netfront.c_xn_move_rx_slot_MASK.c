
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int req_prod_pvt; } ;
struct netfront_rxq {TYPE_2__ ring; void** grant_ref; struct mbuf** mbufs; } ;
struct mbuf {int dummy; } ;
typedef void* grant_ref_t ;
struct TYPE_3__ {int id; void* gref; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct netfront_rxq *VAR_0, struct mbuf *VAR_1,
    grant_ref_t VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0->ring.req_prod_pvt);

 FUNC_0(VAR_0->mbufs[VAR_3] == ((void*)0), ("mbufs != NULL"));
 VAR_0->mbufs[VAR_3] = VAR_1;
 VAR_0->grant_ref[VAR_3] = VAR_2;
 FUNC_1(&VAR_0->ring, VAR_0->ring.req_prod_pvt)->id = VAR_3;
 FUNC_1(&VAR_0->ring, VAR_0->ring.req_prod_pvt)->gref = VAR_2;
 VAR_0->ring.req_prod_pvt++;
}
