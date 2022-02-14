
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_rx_buffer {int * mbuf; int map; } ;
struct ena_ring {int dummy; } ;
struct ena_adapter {int rx_buf_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ena_adapter *VAR_2, struct ena_ring *VAR_3,
    struct ena_rx_buffer *VAR_4)
{

 if (VAR_4->mbuf == ((void*)0)) {
  FUNC_2(VAR_1, "Trying to free unallocated buffer\n");
  return;
 }

 FUNC_0(VAR_2->rx_buf_tag, VAR_4->map,
     VAR_0);
 FUNC_1(VAR_2->rx_buf_tag, VAR_4->map);
 FUNC_3(VAR_4->mbuf);
 VAR_4->mbuf = ((void*)0);
}
