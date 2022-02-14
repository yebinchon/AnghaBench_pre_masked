
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qlnx_fastpath {int rss_id; int * tx_br; int tx_mtx; int tx_mtx_name; } ;
struct TYPE_4__ {int dev_unit; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,int,int) ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int ,int,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(qlnx_host_t *VAR_5, struct qlnx_fastpath *VAR_6)
{
 FUNC_3(VAR_6->tx_mtx_name, sizeof(VAR_6->tx_mtx_name),
  "qlnx%d_fp%d_tx_mq_lock", VAR_5->dev_unit, VAR_6->rss_id);

 FUNC_2(&VAR_6->tx_mtx, VAR_6->tx_mtx_name, ((void*)0), VAR_1);

        VAR_6->tx_br = FUNC_1(VAR_4, VAR_2,
                                   VAR_3, &VAR_6->tx_mtx);
        if (VAR_6->tx_br == ((void*)0)) {
  FUNC_0(VAR_5, "buf_ring_alloc failed for fp[%d, %d]\n",
   VAR_5->dev_unit, VAR_6->rss_id);
  return -VAR_0;
        }
 return 0;
}
