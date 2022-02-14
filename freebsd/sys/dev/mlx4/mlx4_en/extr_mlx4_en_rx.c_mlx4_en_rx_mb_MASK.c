
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_rx_ring {int dma_tag; } ;
struct mlx4_en_rx_mbuf {struct mbuf* mbuf; int dma_map; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct mlx4_en_priv {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; int m_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct mlx4_en_rx_ring*,struct mlx4_en_rx_desc*,struct mlx4_en_rx_mbuf*) ;
 int FUNC_6 (struct mbuf*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct mbuf *
FUNC_8(struct mlx4_en_priv *VAR_6, struct mlx4_en_rx_ring *VAR_7,
    struct mlx4_en_rx_desc *VAR_8, struct mlx4_en_rx_mbuf *VAR_9,
    int VAR_10)
{

 struct mbuf *VAR_11;

 struct mbuf *VAR_12;


 if (VAR_10 <= (VAR_1 - VAR_2) &&
     (VAR_12 = FUNC_4(VAR_4, VAR_3)) != ((void*)0)) {


  VAR_12->m_pkthdr.len = VAR_12->m_len = VAR_10;


  VAR_12->m_data += VAR_2;

  FUNC_1(VAR_7->dma_tag, VAR_9->dma_map,
      VAR_0);

  FUNC_0(FUNC_6(VAR_9->mbuf, VAR_5), FUNC_6(VAR_12, VAR_5), VAR_10);

  return (VAR_12);
 }


 VAR_12 = VAR_9->mbuf;


 if (FUNC_5(VAR_7, VAR_8, VAR_9))
  return (((void*)0));


 if (FUNC_7(VAR_10 > VAR_12->m_pkthdr.len))
  VAR_10 = VAR_12->m_pkthdr.len;





 VAR_12->m_pkthdr.len = VAR_10;
 for (VAR_11 = VAR_12; VAR_12 != ((void*)0); VAR_12 = VAR_12->m_next) {
  if (VAR_12->m_len > VAR_10)
   VAR_12->m_len = VAR_10;
  VAR_10 -= VAR_12->m_len;
  if (FUNC_2(VAR_10 == 0)) {
   if (FUNC_2(VAR_12->m_next != ((void*)0))) {

    FUNC_3(VAR_12->m_next);
    VAR_12->m_next = ((void*)0);
   }
   break;
  }
 }

 VAR_12 = VAR_11;

 return (VAR_12);
}
