
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmap {int dummy; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_3__ {size_t ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,char*,size_t,struct pmap*,int,int *,int*) ;

__attribute__((used)) static int
FUNC_2(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1,
    bus_dma_segment_t *VAR_2, int VAR_3, struct pmap *VAR_4, int *VAR_5,
    int VAR_6, size_t VAR_7, size_t VAR_8)
{
 int VAR_9;

 VAR_9 = 0;
 for (; VAR_3 > 0 && VAR_8 != 0; VAR_3--, VAR_2++) {
  char *VAR_10;
  size_t VAR_11;

  FUNC_0((VAR_7 < VAR_2->ds_len),
      ("Invalid mid-segment offset"));
  VAR_10 = (char *)(uintptr_t)VAR_2->ds_addr + VAR_7;
  VAR_11 = VAR_2->ds_len - VAR_7;
  VAR_7 = 0;
  if (VAR_11 > VAR_8)
   VAR_11 = VAR_8;
  VAR_8 -= VAR_11;
  FUNC_0((VAR_11 != 0), ("Segment length is zero"));
  VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_10, VAR_11, VAR_4,
      VAR_6, ((void*)0), VAR_5);
  if (VAR_9)
   break;
 }
 return (VAR_9);
}
