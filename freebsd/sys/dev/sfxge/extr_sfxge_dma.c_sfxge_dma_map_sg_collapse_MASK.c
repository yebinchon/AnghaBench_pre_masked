
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct mbuf*,int *,int*,int ) ;
 struct mbuf* FUNC_2 (struct mbuf*,int ) ;
 int FUNC_3 (int ,int ,struct mbuf*,int *) ;

int
FUNC_4(bus_dma_tag_t VAR_3, bus_dmamap_t VAR_4,
     struct mbuf **VAR_5, bus_dma_segment_t *VAR_6,
     int *VAR_7, int VAR_8)
{
 bus_dma_segment_t *VAR_9;
 struct mbuf *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_10 = *VAR_5;
 VAR_12 = VAR_13 = VAR_11 = 0;

 FUNC_0(VAR_10->m_pkthdr.len, ("packet has zero header length"));

retry:
 VAR_9 = VAR_6;
 VAR_11 = 0;
 if (VAR_10->m_next == ((void*)0)) {
  FUNC_3(VAR_3, VAR_4, VAR_10, VAR_6);
  *VAR_7 = 1;
  return (0);
 }

 while (VAR_10 != ((void*)0) && VAR_11 < VAR_8) {



  if (VAR_10->m_len != 0) {
   VAR_11++;
   FUNC_3(VAR_3, VAR_4, VAR_10, VAR_9);
   VAR_9++;
  }
  VAR_10 = VAR_10->m_next;
 }



 if (VAR_11 == 0) {
  VAR_13 = VAR_0;
  goto err_out;
 } else if (VAR_13 == VAR_0 || VAR_11 >= VAR_8) {
  if (!VAR_12) {
   VAR_10 = FUNC_2(*VAR_5, VAR_2);
   if (VAR_10 == ((void*)0)) {
    VAR_13 = VAR_1;
    goto err_out;
   }
   *VAR_5 = VAR_10;
   VAR_12 = 1;
   goto retry;
  }
  VAR_13 = VAR_0;
  goto err_out;
 }
 *VAR_7 = VAR_11;

err_out:
 return (VAR_13);
}
