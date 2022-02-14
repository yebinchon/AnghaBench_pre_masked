
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int num_vectors; int start_vector; int * vector_list; } ;
struct oce_dev_info {int db_page_size; scalar_t__ intr_mode; int flags; int dev_id; int vendor_id; int mac_addr; TYPE_1__ msix; int dev_family; int db_btag; int db_bhandle; int ifp; TYPE_4__* softc; int dev; } ;
typedef int di ;
struct TYPE_16__ {scalar_t__ size; int (* announce ) (struct oce_dev_info*) ;} ;
struct TYPE_15__ {scalar_t__ size; int get_mac_addr; int common_req_hdr_init; int mbox_post; int close; } ;
struct TYPE_13__ {int mac_addr; } ;
struct TYPE_14__ {int flags; int intr_count; int roce_intr_count; int rdma_flags; struct TYPE_14__* next; int dev; TYPE_3__ macaddr; TYPE_2__* intrs; int db_btag; int db_bhandle; int ifp; } ;
struct TYPE_12__ {int vector; } ;
typedef TYPE_4__* POCE_SOFTC ;
typedef TYPE_5__* POCE_RDMA_INFO ;
typedef TYPE_6__* POCE_RDMA_IF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct oce_dev_info*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_6__* VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_4__* VAR_17 ;
 int FUNC_4 (struct oce_dev_info*) ;

int
FUNC_5(POCE_RDMA_INFO VAR_18, POCE_RDMA_IF VAR_19)
{
  POCE_SOFTC VAR_20;
  struct oce_dev_info VAR_21;
  int VAR_22;

  if ((VAR_18 == ((void*)0)) || (VAR_19 == ((void*)0))) {
    return -VAR_0;
  }

  if ((VAR_18->size != VAR_11) ||
      (VAR_19->size != VAR_9)) {
    return -VAR_1;
  }

  VAR_18->close = VAR_15;
  VAR_18->mbox_post = VAR_14;
  VAR_18->common_req_hdr_init = VAR_12;
  VAR_18->get_mac_addr = VAR_13;

  VAR_16 = VAR_19;

  VAR_20 = VAR_17;
  while (VAR_20 != ((void*)0)) {
    if (VAR_16->announce != ((void*)0)) {
      FUNC_1(&VAR_21, 0, sizeof(VAR_21));
      VAR_21.dev = VAR_20->dev;
      VAR_21.softc = VAR_20;
      VAR_21.ifp = VAR_20->ifp;
      VAR_21.db_bhandle = VAR_20->db_bhandle;
      VAR_21.db_btag = VAR_20->db_btag;
      VAR_21.db_page_size = 4096;
      if (VAR_20->flags & VAR_3) {
        VAR_21.intr_mode = VAR_7;
      } else if (VAR_20->flags & VAR_2) {
        VAR_21.intr_mode = VAR_6;
      } else {
        VAR_21.intr_mode = VAR_5;
      }
      VAR_21.dev_family = VAR_4;
      if (VAR_21.intr_mode != VAR_5) {
        VAR_21.msix.num_vectors = VAR_20->intr_count + VAR_20->roce_intr_count;
        VAR_21.msix.start_vector = VAR_20->intr_count;
        for (VAR_22=0; VAR_22<VAR_21.msix.num_vectors; VAR_22++) {
          VAR_21.msix.vector_list[VAR_22] = VAR_20->intrs[VAR_22].vector;
        }
      } else {
      }
      FUNC_0(VAR_21.mac_addr, VAR_20->macaddr.mac_addr, 6);
      VAR_21.vendor_id = FUNC_3(VAR_20->dev);
      VAR_21.dev_id = FUNC_2(VAR_20->dev);

      if (VAR_20->rdma_flags & VAR_8) {
          VAR_21.flags |= VAR_10;
      }

      VAR_19->announce(&VAR_21);
      VAR_20 = VAR_20->next;
    }
  }

  return 0;
}
