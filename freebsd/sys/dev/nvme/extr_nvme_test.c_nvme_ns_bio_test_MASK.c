
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct nvme_io_test_internal {scalar_t__ size; scalar_t__ opc; int flags; scalar_t__ time; int td_active; void** io_completed; TYPE_1__* ns; int start; int td_idx; } ;
struct mtx {int dummy; } ;
struct cdevsw {int (* d_strategy ) (struct bio*) ;} ;
struct cdev {struct cdevsw* si_devsw; } ;
struct bio {scalar_t__ bio_bcount; int bio_flags; scalar_t__ bio_resid; void* bio_data; void* bio_offset; struct cdev* bio_dev; int bio_done; int bio_cmd; } ;
struct TYPE_3__ {struct cdev* cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 struct cdevsw* FUNC_2 (struct cdev*,int*) ;
 int FUNC_3 (struct cdev*,int) ;
 int FUNC_4 (void*,int ) ;
 struct bio* FUNC_5 () ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct timeval*) ;
 int FUNC_8 () ;
 void* FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct bio*,int ,int) ;
 int FUNC_12 (struct bio*,struct mtx*,int ,char*,int ) ;
 int FUNC_13 (struct mtx*) ;
 struct mtx* FUNC_14 (int ,struct bio*) ;
 int FUNC_15 (struct mtx*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (struct bio*) ;
 int FUNC_19 (struct timeval*,int *) ;
 int FUNC_20 (struct nvme_io_test_internal*) ;

__attribute__((used)) static void
FUNC_21(void *VAR_10)
{
 struct nvme_io_test_internal *VAR_11 = VAR_10;
 struct cdevsw *VAR_12;
 struct mtx *VAR_13;
 struct bio *VAR_14;
 struct cdev *VAR_15;
 void *VAR_16;
 struct timeval VAR_17;
 uint64_t VAR_18 = 0, VAR_19;
 uint32_t VAR_20;
 int VAR_21;

 VAR_16 = FUNC_9(VAR_11->size, VAR_3, VAR_4);
 VAR_20 = FUNC_0(&VAR_11->td_idx, 1);
 VAR_15 = VAR_11->ns->cdev;

 VAR_19 = VAR_20 * 2048 * FUNC_16(VAR_11->ns);

 while (1) {

  VAR_14 = FUNC_5();

  FUNC_11(VAR_14, 0, sizeof(*VAR_14));
  VAR_14->bio_cmd = (VAR_11->opc == VAR_5) ?
      VAR_1 : VAR_2;
  VAR_14->bio_done = VAR_9;
  VAR_14->bio_dev = VAR_15;
  VAR_14->bio_offset = VAR_19;
  VAR_14->bio_data = VAR_16;
  VAR_14->bio_bcount = VAR_11->size;

  if (VAR_11->flags & VAR_6) {
   VAR_12 = FUNC_2(VAR_15, &VAR_21);
  } else
   VAR_12 = VAR_15->si_devsw;

  VAR_13 = FUNC_14(VAR_8, VAR_14);
  FUNC_13(VAR_13);
  (*VAR_12->d_strategy)(VAR_14);
  FUNC_12(VAR_14, VAR_13, VAR_7, "biotestwait", 0);
  FUNC_15(VAR_13);

  if (VAR_11->flags & VAR_6) {
   FUNC_3(VAR_15, VAR_21);
  }

  if ((VAR_14->bio_flags & VAR_0) || (VAR_14->bio_resid > 0))
   break;

  FUNC_6(VAR_14);

  VAR_18++;

  FUNC_7(&VAR_17);
  FUNC_19(&VAR_17, &VAR_11->start);

  if (VAR_17.tv_sec >= VAR_11->time)
   break;

  VAR_19 += VAR_11->size;
  if ((VAR_19 + VAR_11->size) > FUNC_17(VAR_11->ns))
   VAR_19 = 0;
 }

 VAR_11->io_completed[VAR_20] = VAR_18;
 FUNC_20(VAR_11);

 FUNC_4(VAR_16, VAR_3);

 FUNC_1(&VAR_11->td_active, 1);
 FUNC_10();

 FUNC_8();
}
