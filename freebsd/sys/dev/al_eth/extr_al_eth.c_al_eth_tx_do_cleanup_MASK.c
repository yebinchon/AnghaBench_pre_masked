
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct mbuf {int dummy; } ;
struct al_eth_tx_buffer {unsigned int tx_descs; int dma_map; int * m; } ;
struct al_eth_ring {int ring_id; size_t next_to_clean; int dev; int dma_buf_tag; struct al_eth_tx_buffer* tx_buffer_info; int dma_q; } ;


 size_t FUNC_0 (struct al_eth_ring*,size_t) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int,size_t) ;
 int FUNC_5 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(struct al_eth_ring *VAR_0)
{
 unsigned int VAR_1;
 uint16_t VAR_2;
 int VAR_3 = VAR_0->ring_id;

 VAR_1 = FUNC_1(VAR_0->dma_q);
 FUNC_4(VAR_0->dev,
     "tx_poll: q %d total completed descs %x\n", VAR_3, VAR_1);
 VAR_2 = VAR_0->next_to_clean;

 while (VAR_1 != 0) {
  struct al_eth_tx_buffer *VAR_4;
  struct mbuf *VAR_5;

  VAR_4 = &VAR_0->tx_buffer_info[VAR_2];

  if (VAR_4->tx_descs > VAR_1)
   break;

  VAR_5 = VAR_4->m;

  VAR_4->m = ((void*)0);

  FUNC_4(VAR_0->dev,
      "tx_poll: q %d mbuf %p completed\n", VAR_3, VAR_5);


  FUNC_3(VAR_0->dma_buf_tag, VAR_4->dma_map);

  FUNC_5(VAR_5);
  VAR_1 -= VAR_4->tx_descs;
  VAR_2 = FUNC_0(VAR_0, VAR_2);
 }

 VAR_0->next_to_clean = VAR_2;

 FUNC_4(VAR_0->dev, "tx_poll: q %d done next to clean %x\n",
     VAR_3, VAR_2);





 FUNC_2();
}
