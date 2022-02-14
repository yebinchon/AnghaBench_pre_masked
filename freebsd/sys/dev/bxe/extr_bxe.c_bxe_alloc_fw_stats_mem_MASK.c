
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
struct stats_query_header {int dummy; } ;
struct stats_query_cmd_group {int dummy; } ;
struct stats_counter {int dummy; } ;
struct per_queue_stats {int dummy; } ;
struct per_port_stats {int dummy; } ;
struct per_pf_stats {int dummy; } ;
struct TYPE_2__ {scalar_t__ paddr; scalar_t__ vaddr; } ;
struct bxe_softc {int fw_stats_num; int fw_stats_req_size; int fw_stats_data_size; scalar_t__ fw_stats_data_mapping; scalar_t__ fw_stats_req_mapping; TYPE_1__ fw_stats_dma; struct bxe_fw_stats_data* fw_stats_data; struct bxe_fw_stats_req* fw_stats_req; } ;
struct bxe_fw_stats_req {int dummy; } ;
struct bxe_fw_stats_data {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,...) ;
 int FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct bxe_softc*,int,TYPE_1__*,char*) ;
 int FUNC_3 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_4(struct bxe_softc *VAR_2)
{
    uint8_t VAR_3;
    int VAR_4;


    VAR_3 = FUNC_1(VAR_2);





    VAR_2->fw_stats_num = (2 + VAR_3);







    VAR_4 =
        ((VAR_2->fw_stats_num / VAR_1) +
         ((VAR_2->fw_stats_num % VAR_1) ? 1 : 0));

    FUNC_0(VAR_2, VAR_0, "stats fw_stats_num %d num_groups %d\n",
          VAR_2->fw_stats_num, VAR_4);

    VAR_2->fw_stats_req_size =
        (sizeof(struct stats_query_header) +
         (VAR_4 * sizeof(struct stats_query_cmd_group)));
    VAR_2->fw_stats_data_size =
        (sizeof(struct stats_counter) +
         sizeof(struct per_port_stats) +
         sizeof(struct per_pf_stats) +

         (sizeof(struct per_queue_stats) * VAR_3));

    if (FUNC_2(VAR_2, (VAR_2->fw_stats_req_size + VAR_2->fw_stats_data_size),
                      &VAR_2->fw_stats_dma, "fw stats") != 0) {
        FUNC_3(VAR_2);
        return (-1);
    }



    VAR_2->fw_stats_req =
        (struct bxe_fw_stats_req *)VAR_2->fw_stats_dma.vaddr;
    VAR_2->fw_stats_req_mapping = VAR_2->fw_stats_dma.paddr;

    VAR_2->fw_stats_data =
        (struct bxe_fw_stats_data *)((uint8_t *)VAR_2->fw_stats_dma.vaddr +
                                     VAR_2->fw_stats_req_size);
    VAR_2->fw_stats_data_mapping = (VAR_2->fw_stats_dma.paddr +
                                 VAR_2->fw_stats_req_size);

    FUNC_0(VAR_2, VAR_0, "statistics request base address set to %#jx\n",
          (uintmax_t)VAR_2->fw_stats_req_mapping);

    FUNC_0(VAR_2, VAR_0, "statistics data base address set to %#jx\n",
          (uintmax_t)VAR_2->fw_stats_data_mapping);

    return (0);
}
