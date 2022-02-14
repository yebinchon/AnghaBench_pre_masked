
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int req; int mask; TYPE_2__* lanai; } ;
typedef TYPE_1__ mxge_tx_ring_t ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ mcp_kreq_ether_send_t ;


 int FUNC_0 (TYPE_2__ volatile*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void
FUNC_3(mxge_tx_ring_t *VAR_0, mcp_kreq_ether_send_t *VAR_1,
    int VAR_2)
{
 int VAR_3, VAR_4;
 uint32_t *VAR_5;
 volatile uint32_t *VAR_6;
 mcp_kreq_ether_send_t *VAR_7;
 volatile mcp_kreq_ether_send_t *VAR_8, *VAR_9;
 uint8_t VAR_10;

 VAR_3 = VAR_0->req & VAR_0->mask;

 VAR_10 = VAR_1->flags;
 VAR_1->flags = 0;
 FUNC_2();
 VAR_9 = VAR_8 = &VAR_0->lanai[VAR_3];
 VAR_7 = VAR_1;

 if ((VAR_3 + VAR_2) < VAR_0->mask) {
  for (VAR_4 = 0; VAR_4 < (VAR_2 - 1); VAR_4 += 2) {
   FUNC_0(VAR_8, VAR_7, 2 * sizeof(*VAR_1));
   FUNC_2();
   VAR_7 += 2;
   VAR_8 += 2;
  }
 } else {


  FUNC_1(VAR_0, VAR_1, VAR_2);
  VAR_4 = 0;
 }
 if (VAR_4 < VAR_2) {

  FUNC_0(VAR_8, VAR_7, sizeof(*VAR_1));
  FUNC_2();
 }


 VAR_1->flags = VAR_10;
 VAR_5 = (uint32_t *)VAR_1;
 VAR_5+=3;
 VAR_6 = (volatile uint32_t *)VAR_9;
 VAR_6+=3;
 *VAR_6 = *VAR_5;
 VAR_0->req += VAR_2;
 FUNC_2();
}
