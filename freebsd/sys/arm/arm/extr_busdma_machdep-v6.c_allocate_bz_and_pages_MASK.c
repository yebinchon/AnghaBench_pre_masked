
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bounce_zone {int map_count; int total_bpages; } ;
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
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(bus_dma_tag_t VAR_5, bus_dmamap_t VAR_6)
{
 struct bounce_zone *VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_5->bounce_zone == ((void*)0))
  if ((VAR_9 = FUNC_4(VAR_5)) != 0)
   return (VAR_9);
 VAR_7 = VAR_5->bounce_zone;

 FUNC_2(&(VAR_6->bpages));







 if (VAR_5->flags & VAR_0)
  VAR_8 = VAR_3;
 else
  VAR_8 = 2 * VAR_7->map_count;
 if ((VAR_5->flags & VAR_1) == 0 ||
     (VAR_7->map_count > 0 && VAR_7->total_bpages < VAR_8)) {
  int VAR_10;

  VAR_10 = FUNC_5(FUNC_6(VAR_5->maxsize, VAR_4)) + 1;
  VAR_10 = FUNC_1(VAR_8 - VAR_7->total_bpages, VAR_10);
  VAR_10 = FUNC_0(VAR_10, 2);
  if (FUNC_3(VAR_5, VAR_10) < VAR_10)
   return (VAR_2);

  if ((VAR_5->flags & VAR_1) == 0)
   VAR_5->flags |= VAR_1;
 }
 VAR_7->map_count++;
 return (0);
}
