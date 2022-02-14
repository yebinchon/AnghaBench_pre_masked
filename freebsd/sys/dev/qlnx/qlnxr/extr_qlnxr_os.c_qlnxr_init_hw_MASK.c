
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct qlnxr_dev {int num_cnq; int dpi; int db_size; scalar_t__ db_phys_addr; void* db_addr; int rdma_ctx; TYPE_5__* ha; TYPE_1__* cnq_array; } ;
struct TYPE_9__ {int rcv_wnd_size; int ooo_num_rx_bufs; int mpa_rtr; int mpa_rev; int mpa_peer2peer; int crc_needed; int flags; } ;
struct TYPE_8__ {int cq_mode; } ;
struct ecore_rdma_start_in_params {int desired_cnq; int max_mtu; int * mac_addr; TYPE_3__ iwarp; TYPE_2__ roce; struct ecore_rdma_events* events; struct ecore_rdma_cnq_params* cnq_pbl_list; } ;
struct ecore_rdma_events {int dpi; int dpi_size; scalar_t__ dpi_phys_addr; scalar_t__ dpi_addr; struct qlnxr_dev* context; int unaffiliated_event; int affiliated_event; } ;
struct ecore_rdma_cnq_params {scalar_t__ pbl_ptr; int num_pbl_pages; } ;
struct ecore_rdma_add_user_out_params {int dpi; int dpi_size; scalar_t__ dpi_phys_addr; scalar_t__ dpi_addr; struct qlnxr_dev* context; int unaffiliated_event; int affiliated_event; } ;
struct TYPE_10__ {int db_size; scalar_t__ db_phys_addr; scalar_t__ doorbells; } ;
struct TYPE_11__ {int max_frame_size; TYPE_4__ cdev; int primary_mac; } ;
typedef TYPE_5__ qlnx_host_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_7__ {int pbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 int FUNC_2 (struct ecore_rdma_events*,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,struct ecore_rdma_events*) ;
 int FUNC_6 (int ,struct ecore_rdma_start_in_params*) ;
 int FUNC_7 (struct ecore_rdma_start_in_params*) ;
 struct ecore_rdma_start_in_params* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct qlnxr_dev*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int
FUNC_11(struct qlnxr_dev *VAR_18)
{
        struct ecore_rdma_events VAR_19;
        struct ecore_rdma_add_user_out_params VAR_20;
        struct ecore_rdma_cnq_params *VAR_21;
        struct ecore_rdma_start_in_params *VAR_22;
        dma_addr_t VAR_23;
        u32 VAR_24;
        int VAR_25 = 0;
        int VAR_26;
 qlnx_host_t *VAR_27;

 VAR_27 = VAR_18->ha;

 FUNC_1(VAR_27, "enter\n");

        VAR_22 = FUNC_8(sizeof(*VAR_22), VAR_7);
        if (!VAR_22) {
                VAR_25 = -VAR_5;
                goto out;
        }

 FUNC_2(&VAR_20, sizeof(struct ecore_rdma_add_user_out_params));
 FUNC_2(&VAR_19, sizeof(struct ecore_rdma_events));

        VAR_22->desired_cnq = VAR_18->num_cnq;

        for (VAR_26 = 0; VAR_26 < VAR_18->num_cnq; VAR_26++) {
                VAR_21 = &VAR_22->cnq_pbl_list[VAR_26];

                VAR_24 = FUNC_3(&VAR_18->cnq_array[VAR_26].pbl);
                VAR_21->num_pbl_pages = VAR_24;

                VAR_23 = FUNC_4(&VAR_18->cnq_array[VAR_26].pbl);
                VAR_21->pbl_ptr = (u64)VAR_23;
        }

        VAR_19.affiliated_event = VAR_13;
        VAR_19.unaffiliated_event = VAR_14;
        VAR_19.context = VAR_18;

        VAR_22->events = &VAR_19;
        VAR_22->roce.cq_mode = VAR_4;
        VAR_22->max_mtu = VAR_18->ha->max_frame_size;


 if (FUNC_0(VAR_18)) {
         if (VAR_10)
                 VAR_22->iwarp.flags |= VAR_0;

         if (VAR_17)
                 VAR_22->iwarp.flags |= VAR_1;

         VAR_22->iwarp.rcv_wnd_size = VAR_15*1024;
         VAR_22->iwarp.crc_needed = VAR_9;
         VAR_22->iwarp.ooo_num_rx_bufs =
                 (VAR_8 * VAR_22->iwarp.rcv_wnd_size) /
                 VAR_22->max_mtu;

         VAR_22->iwarp.mpa_peer2peer = VAR_12;
         VAR_22->iwarp.mpa_rev =
   VAR_11 ? VAR_3 : VAR_2;
         VAR_22->iwarp.mpa_rtr = VAR_16;
 }

        FUNC_9(&VAR_22->mac_addr[0], VAR_18->ha->primary_mac, VAR_6);

        VAR_25 = FUNC_6(VAR_18->rdma_ctx, VAR_22);
        if (VAR_25)
                goto out;

        VAR_25 = FUNC_5(VAR_18->rdma_ctx, &VAR_20);
        if (VAR_25)
                goto out;

        VAR_18->db_addr = (void *)(uintptr_t)VAR_20.dpi_addr;
        VAR_18->db_phys_addr = VAR_20.dpi_phys_addr;
        VAR_18->db_size = VAR_20.dpi_size;
        VAR_18->dpi = VAR_20.dpi;

 FUNC_10(VAR_18);

 FUNC_1(VAR_27,
  "cdev->doorbells = %p, db_phys_addr = %p db_size = 0x%x\n",
  (void *)VAR_27->cdev.doorbells,
  (void *)VAR_27->cdev.db_phys_addr, VAR_27->cdev.db_size);

 FUNC_1(VAR_27,
  "db_addr = %p db_phys_addr = %p db_size = 0x%x dpi = 0x%x\n",
  (void *)VAR_18->db_addr, (void *)VAR_18->db_phys_addr,
  VAR_18->db_size, VAR_18->dpi);
out:
        FUNC_7(VAR_22);

 FUNC_1(VAR_27, "exit\n");
        return VAR_25;
}
