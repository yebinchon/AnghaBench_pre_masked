
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct uio {int uio_iovcnt; int uio_offset; int uio_resid; void* uio_td; void* uio_rw; void* uio_segflg; struct iovec* uio_iov; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct g_spa {int spa_g_proc_exiting; int spa_g_devstat; TYPE_1__* dev; int spa_g_mtx; int spa_g_queue; int spa_g_proc_run; } ;
struct bio {scalar_t__ bio_cmd; int bio_flags; int bio_offset; char* bio_data; int bio_length; int bio_completed; int bio_bcount; int bio_resid; int bio_ma_offset; int bio_ma; } ;
struct TYPE_3__ {int * spa_kva; int spa_memattr; scalar_t__ spa_len; scalar_t__ spa_phys_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 struct bio* FUNC_0 (int *) ;
 void* VAR_9 ;
 int FUNC_1 (int ,struct bio*) ;
 int FUNC_2 (struct bio*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,struct bio*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,struct uio*) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int ,int ,int ,struct uio*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(void *VAR_10)
{
 struct g_spa *VAR_11;
 struct bio *VAR_12;
 struct uio VAR_13;
 struct iovec VAR_14;
 int VAR_15;

 VAR_11 = VAR_10;
 for (;;) {
  FUNC_5(&VAR_11->spa_g_mtx);
  for (;;) {
   VAR_12 = FUNC_0(&VAR_11->spa_g_queue);
   if (VAR_12 != ((void*)0))
    break;
   FUNC_4(&VAR_11->spa_g_queue, &VAR_11->spa_g_mtx, VAR_5,
       "spa_g", 0);
   if (!VAR_11->spa_g_proc_run) {
    VAR_11->spa_g_proc_exiting = 1;
    FUNC_12(&VAR_11->spa_g_queue);
    FUNC_6(&VAR_11->spa_g_mtx);
    FUNC_3(0);
   }
   continue;
  }
  FUNC_6(&VAR_11->spa_g_mtx);
  if (VAR_12->bio_cmd != VAR_1 && VAR_12->bio_cmd != VAR_3 &&
      VAR_12->bio_cmd != VAR_0) {
   VAR_15 = VAR_4;
   goto completed;
  }

  VAR_15 = 0;
  if (VAR_12->bio_cmd == VAR_0) {
   if (VAR_11->dev->spa_kva != ((void*)0)) {
    FUNC_10(VAR_11->dev->spa_kva,
        VAR_11->dev->spa_len);
   } else {
    FUNC_9(
        (vm_paddr_t)VAR_11->dev->spa_phys_base,
        (vm_paddr_t)VAR_11->dev->spa_phys_base +
        VAR_11->dev->spa_len, VAR_11->dev->spa_memattr);
   }



   goto completed;
  }

  if ((VAR_12->bio_flags & VAR_2) != 0) {
   if (VAR_11->dev->spa_kva != ((void*)0)) {
    VAR_14.iov_base = (char *)VAR_11->dev->spa_kva +
        VAR_12->bio_offset;
    VAR_14.iov_len = VAR_12->bio_length;
    VAR_13.uio_iov = &VAR_14;
    VAR_13.uio_iovcnt = 1;
    VAR_13.uio_resid = VAR_12->bio_length;
    VAR_13.uio_offset = VAR_12->bio_offset;
    VAR_13.uio_segflg = VAR_7;
    VAR_13.uio_rw = VAR_12->bio_cmd == VAR_1 ?
        VAR_8 : VAR_6;
    VAR_13.uio_td = VAR_9;
    VAR_15 = FUNC_11(VAR_12->bio_ma,
        VAR_12->bio_ma_offset, VAR_12->bio_length, &VAR_13);
    VAR_12->bio_resid = VAR_13.uio_resid;
   } else {
    FUNC_7(VAR_11->dev, VAR_12,
        VAR_12->bio_cmd);
    VAR_12->bio_resid = VAR_12->bio_length;
    VAR_15 = 0;
   }
  } else {
   VAR_14.iov_base = VAR_12->bio_data;
   VAR_14.iov_len = VAR_12->bio_length;
   VAR_13.uio_iov = &VAR_14;
   VAR_13.uio_iovcnt = 1;
   VAR_13.uio_resid = VAR_12->bio_length;
   VAR_13.uio_offset = VAR_12->bio_offset;
   VAR_13.uio_segflg = VAR_7;
   VAR_13.uio_rw = VAR_12->bio_cmd == VAR_1 ? VAR_6 :
       VAR_8;
   VAR_13.uio_td = VAR_9;
   VAR_15 = FUNC_8(VAR_11->dev, &VAR_13);
   VAR_12->bio_resid = VAR_13.uio_resid;
  }
  VAR_12->bio_bcount = VAR_12->bio_length;
  FUNC_1(VAR_11->spa_g_devstat, VAR_12);
completed:
  VAR_12->bio_completed = VAR_12->bio_length;
  FUNC_2(VAR_12, VAR_15);
 }
}
