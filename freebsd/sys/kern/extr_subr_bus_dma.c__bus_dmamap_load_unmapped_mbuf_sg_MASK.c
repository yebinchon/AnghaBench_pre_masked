
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf_ext_pgs {int hdr_len; int first_pg_off; int npgs; int trail_len; int * trail; scalar_t__* pa; int * hdr; } ;
struct TYPE_2__ {struct mbuf_ext_pgs* ext_pgs; } ;
struct mbuf {int m_len; TYPE_1__ m_ext; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int ,int ,int *,int,int ,int,int *,int*) ;
 int FUNC_3 (int ,int ,scalar_t__,int,int,int *,int*) ;
 int VAR_0 ;
 int FUNC_4 (struct mbuf_ext_pgs*,int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct mbuf*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7(bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3,
    struct mbuf *VAR_4, bus_dma_segment_t *VAR_5, int *VAR_6, int VAR_7)
{
 struct mbuf_ext_pgs *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 FUNC_1(VAR_4);
 VAR_8 = VAR_4->m_ext.ext_pgs;

 VAR_12 = VAR_4->m_len;
 VAR_9 = 0;


 VAR_11 = FUNC_6(VAR_4, VAR_1);

 if (VAR_8->hdr_len != 0) {
  if (VAR_11 >= VAR_8->hdr_len) {
   VAR_11 -= VAR_8->hdr_len;
  } else {
   VAR_15 = VAR_8->hdr_len - VAR_11;
   VAR_16 = VAR_11;
   VAR_15 = FUNC_5(VAR_15, VAR_12);
   VAR_11 = 0;
   VAR_12 -= VAR_15;
   VAR_9 = FUNC_2(VAR_2, VAR_3,
       &VAR_8->hdr[VAR_16], VAR_15, VAR_0,
       VAR_7, VAR_5, VAR_6);
  }
 }
 VAR_14 = VAR_8->first_pg_off;
 for (VAR_10 = 0; VAR_10 < VAR_8->npgs && VAR_9 == 0 && VAR_12 > 0; VAR_10++) {
  VAR_13 = FUNC_4(VAR_8, VAR_10, VAR_14);
  if (VAR_11 >= VAR_13) {
   VAR_11 -= VAR_13;
   VAR_14 = 0;
   continue;
  }
  VAR_15 = VAR_13 - VAR_11;
  VAR_16 = VAR_14 + VAR_11;
  VAR_11 = 0;
  VAR_15 = FUNC_5(VAR_15, VAR_12);
  VAR_12 -= VAR_15;
  VAR_9 = FUNC_3(VAR_2, VAR_3,
      VAR_8->pa[VAR_10] + VAR_16, VAR_15, VAR_7, VAR_5, VAR_6);
  VAR_14 = 0;
 };
 if (VAR_12 != 0 && VAR_9 == 0) {
  FUNC_0((VAR_11 + VAR_12) <= VAR_8->trail_len,
      ("off + len > trail (%d + %d > %d)", VAR_11, VAR_12,
      VAR_8->trail_len));
  VAR_9 = FUNC_2(VAR_2, VAR_3,
      &VAR_8->trail[VAR_11], VAR_12, VAR_0, VAR_7, VAR_5,
      VAR_6);
 }
 return (VAR_9);
}
