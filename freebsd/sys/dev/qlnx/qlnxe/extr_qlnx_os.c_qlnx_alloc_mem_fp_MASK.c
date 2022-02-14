
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct qlnx_fastpath {int * txq; int rxq; int rss_id; int sb_info; } ;
struct TYPE_7__ {scalar_t__ max_frame_size; int num_tc; scalar_t__ rx_buf_size; scalar_t__ rx_jumbo_buf_eq_mtu; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,struct qlnx_fastpath*,int ) ;
 int FUNC_3 (TYPE_1__*,struct qlnx_fastpath*) ;

__attribute__((used)) static int
FUNC_4(qlnx_host_t *VAR_5, struct qlnx_fastpath *VAR_6)
{
        int VAR_7, VAR_8;

        VAR_7 = FUNC_1(VAR_5, VAR_6->sb_info, VAR_6->rss_id);
        if (VAR_7)
                goto err;

 if (VAR_5->rx_jumbo_buf_eq_mtu) {
  if (VAR_5->max_frame_size <= VAR_1)
   VAR_5->rx_buf_size = VAR_1;
  else if (VAR_5->max_frame_size <= VAR_4)
   VAR_5->rx_buf_size = VAR_4;
  else if (VAR_5->max_frame_size <= VAR_3)
   VAR_5->rx_buf_size = VAR_3;
  else if (VAR_5->max_frame_size <= VAR_2)
   VAR_5->rx_buf_size = VAR_2;
 } else {
  if (VAR_5->max_frame_size <= VAR_1)
   VAR_5->rx_buf_size = VAR_1;
  else
   VAR_5->rx_buf_size = VAR_4;
 }

        VAR_7 = FUNC_0(VAR_5, VAR_6->rxq);
        if (VAR_7)
                goto err;

        for (VAR_8 = 0; VAR_8 < VAR_5->num_tc; VAR_8++) {
                VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_6->txq[VAR_8]);
                if (VAR_7)
                        goto err;
        }

        return 0;

err:
        FUNC_3(VAR_5, VAR_6);
        return -VAR_0;
}
