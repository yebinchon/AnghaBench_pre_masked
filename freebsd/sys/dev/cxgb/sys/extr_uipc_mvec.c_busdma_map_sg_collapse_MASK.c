
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct mbuf*,int *,int*,int ) ;
 int FUNC_3 (int ,int ,struct mbuf*,int *) ;
 scalar_t__ VAR_5 ;
 struct mbuf* FUNC_4 (struct mbuf*,int ) ;
 int FUNC_5 (char*,...) ;

int
FUNC_6(bus_dma_tag_t VAR_6, bus_dmamap_t VAR_7,
 struct mbuf **VAR_8, bus_dma_segment_t *VAR_9, int *VAR_10)
{
 struct mbuf *VAR_11 = *VAR_8;
 int VAR_12, VAR_13 = 0, VAR_14 = 0;
 bus_dma_segment_t *VAR_15;

 FUNC_0(VAR_11->m_pkthdr.len, ("packet has zero header len"));
 if (VAR_11->m_pkthdr.len <= VAR_3)
  return (0);
retry:
 VAR_15 = VAR_9;
 VAR_12 = 0;
 if (VAR_11->m_next == ((void*)0)) {
  FUNC_3(VAR_6, VAR_7, VAR_11, VAR_9);
  *VAR_10 = 1;
  return (0);
 }

 while (VAR_11 && VAR_12 < VAR_4) {



  if (FUNC_1(VAR_11->m_len != 0)) {
   VAR_12++;
   FUNC_3(VAR_6, VAR_7, VAR_11, VAR_15);
   VAR_15++;
  }
  VAR_11 = VAR_11->m_next;
 }



 if (VAR_12 == 0) {
  if (VAR_5)
   FUNC_5("empty segment chain\n");
  VAR_14 = VAR_0;
  goto err_out;
 } else if (VAR_14 == VAR_0 || VAR_12 >= VAR_4) {
  if (VAR_5)
   FUNC_5("mbuf chain too long: %d max allowed %d\n",
       VAR_12, VAR_4);
  if (!VAR_13) {
   VAR_11 = FUNC_4(*VAR_8, VAR_2);
   if (VAR_11 == ((void*)0)) {
    VAR_14 = VAR_1;
    goto err_out;
   }
   *VAR_8 = VAR_11;
   VAR_13 = 1;
   goto retry;
  }
  VAR_14 = VAR_0;
  goto err_out;
 }

 *VAR_10 = VAR_12;
err_out:
 return (VAR_14);
}
