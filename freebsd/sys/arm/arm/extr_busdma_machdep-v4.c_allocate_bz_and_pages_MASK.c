
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bounce_zone {scalar_t__ map_count; int total_bpages; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_8__ {int flags; int maxsize; struct bounce_zone* bounce_zone; } ;
struct TYPE_7__ {int bpages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(bus_dma_tag_t VAR_4, bus_dmamap_t VAR_5)
{
 int VAR_6;






 if (VAR_4->flags & VAR_0) {


  struct bounce_zone *VAR_7;
  int VAR_8;

  if (VAR_4->bounce_zone == ((void*)0)) {
   if ((VAR_6 = FUNC_4(VAR_4)) != 0) {
    return (VAR_6);
   }
  }
  VAR_7 = VAR_4->bounce_zone;


  FUNC_2(&(VAR_5->bpages));





  VAR_8 = VAR_3;
  if ((VAR_4->flags & VAR_1) == 0
   || (VAR_7->map_count > 0 && VAR_7->total_bpages < VAR_8)) {
   int VAR_9;

   VAR_9 = FUNC_0(FUNC_5(VAR_4->maxsize), 1);
   VAR_9 = FUNC_1(VAR_8 - VAR_7->total_bpages, VAR_9);
   VAR_9 = FUNC_0(VAR_9, 1);
   if (FUNC_3(VAR_4, VAR_9) < VAR_9)
    return (VAR_2);

   if ((VAR_4->flags & VAR_1) == 0)
    VAR_4->flags |= VAR_1;
  }
  VAR_7->map_count++;
 }
 return (0);
}
