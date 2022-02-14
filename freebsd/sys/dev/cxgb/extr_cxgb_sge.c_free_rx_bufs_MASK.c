
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sge_fl {size_t cidx; scalar_t__ zone; size_t size; int entry_tag; struct rx_sw_desc* sdesc; int credits; } ;
struct rx_sw_desc {int flags; int * m; int * rxsd_cl; int map; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4(adapter_t *VAR_6, struct sge_fl *VAR_7)
{
 u_int VAR_8 = VAR_7->cidx;

 while (VAR_7->credits--) {
  struct rx_sw_desc *VAR_9 = &VAR_7->sdesc[VAR_8];

  if (VAR_9->flags & VAR_3) {
   FUNC_1(VAR_7->entry_tag, VAR_9->map);
   FUNC_0(VAR_7->entry_tag, VAR_9->map);
   if (VAR_7->zone == VAR_5) {
    FUNC_2(VAR_9->m, VAR_2, VAR_0, VAR_1);
    FUNC_3(VAR_5, VAR_9->m);
   } else {
    FUNC_2(VAR_9->m, VAR_2, VAR_0, 0);
    FUNC_3(VAR_4, VAR_9->m);
    FUNC_3(VAR_7->zone, VAR_9->rxsd_cl);
   }
  }

  VAR_9->rxsd_cl = ((void*)0);
  VAR_9->m = ((void*)0);
  if (++VAR_8 == VAR_7->size)
   VAR_8 = 0;
 }
}
