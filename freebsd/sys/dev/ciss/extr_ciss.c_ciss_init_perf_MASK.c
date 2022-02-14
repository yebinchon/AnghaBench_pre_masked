
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ciss_softc {int ciss_max_requests; int ciss_cycle; int ciss_reply_phys; scalar_t__ ciss_rqidx; int ciss_reply; int ciss_reply_map; int ciss_reply_dmat; int ciss_parent_dmat; struct ciss_perf_config* ciss_perf; } ;
struct ciss_sg_entry {int dummy; } ;
struct ciss_perf_config {int* fetch_count; int rq_size; int rq_count; TYPE_1__* rq; scalar_t__ rq_bank_lo; scalar_t__ rq_bank_hi; } ;
struct ciss_command {int dummy; } ;
struct TYPE_2__ {int rq_addr_hi; int rq_addr_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,int) ;
 int VAR_14 ;
 int FUNC_4 (struct ciss_softc*,char*) ;

__attribute__((used)) static int
FUNC_5(struct ciss_softc *VAR_15)
{
    struct ciss_perf_config *VAR_16 = VAR_15->ciss_perf;
    int VAR_17;




    VAR_17 = sizeof(uint64_t) * VAR_15->ciss_max_requests;
    if (FUNC_0(VAR_15->ciss_parent_dmat,
      1, 0,
      VAR_2,
      VAR_1,
      ((void*)0), ((void*)0),
      VAR_17, 1,
      VAR_3,
      0,
      ((void*)0), ((void*)0),
      &VAR_15->ciss_reply_dmat)) {
 FUNC_4(VAR_15, "can't allocate reply DMA tag\n");
 return(VAR_13);
    }



    if (FUNC_2(VAR_15->ciss_reply_dmat, (void **)&VAR_15->ciss_reply,
    VAR_0, &VAR_15->ciss_reply_map)) {
 FUNC_4(VAR_15, "can't allocate reply memory\n");
 return(VAR_13);
    }
    FUNC_1(VAR_15->ciss_reply_dmat, VAR_15->ciss_reply_map, VAR_15->ciss_reply,
      VAR_17, VAR_14, &VAR_15->ciss_reply_phys, 0);
    FUNC_3(VAR_15->ciss_reply, VAR_17);

    VAR_15->ciss_cycle = 0x1;
    VAR_15->ciss_rqidx = 0;
    VAR_16->fetch_count[VAR_12] = (sizeof(struct ciss_command) + 15) / 16;
    VAR_16->fetch_count[VAR_5] =
 (sizeof(struct ciss_command) + sizeof(struct ciss_sg_entry) * 1 + 15) / 16;
    VAR_16->fetch_count[VAR_7] =
 (sizeof(struct ciss_command) + sizeof(struct ciss_sg_entry) * 2 + 15) / 16;
    VAR_16->fetch_count[VAR_9] =
 (sizeof(struct ciss_command) + sizeof(struct ciss_sg_entry) * 4 + 15) / 16;
    VAR_16->fetch_count[VAR_10] =
 (sizeof(struct ciss_command) + sizeof(struct ciss_sg_entry) * 8 + 15) / 16;
    VAR_16->fetch_count[VAR_6] =
 (sizeof(struct ciss_command) + sizeof(struct ciss_sg_entry) * 16 + 15) / 16;
    VAR_16->fetch_count[VAR_8] =
 (sizeof(struct ciss_command) + sizeof(struct ciss_sg_entry) * 32 + 15) / 16;
    VAR_16->fetch_count[VAR_11] = (VAR_4 + 15) / 16;

    VAR_16->rq_size = VAR_15->ciss_max_requests;
    VAR_16->rq_count = 1;
    VAR_16->rq_bank_hi = 0;
    VAR_16->rq_bank_lo = 0;
    VAR_16->rq[0].rq_addr_hi = 0x0;
    VAR_16->rq[0].rq_addr_lo = VAR_15->ciss_reply_phys;

    return(0);
}
