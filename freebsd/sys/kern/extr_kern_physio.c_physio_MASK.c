
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
struct vm_page {int dummy; } ;
struct uio {scalar_t__ uio_resid; int uio_iovcnt; scalar_t__ uio_segflg; scalar_t__ uio_rw; int uio_offset; TYPE_3__* uio_iov; } ;
struct cdevsw {int (* d_strategy ) (struct bio*) ;} ;
struct cdev {scalar_t__ si_iosize_max; int si_flags; struct cdevsw* si_devsw; } ;
struct buf {scalar_t__ b_kvasize; struct vm_page** b_pages; int * b_data; } ;
struct bio {int bio_data; scalar_t__ bio_length; scalar_t__ bio_bcount; int bio_ma_n; int bio_flags; scalar_t__ bio_resid; int bio_error; scalar_t__ bio_ma_offset; struct vm_page** bio_ma; struct cdev* bio_dev; int bio_offset; int bio_cmd; } ;
typedef int * caddr_t ;
struct TYPE_12__ {int ru_oublock; int ru_inblock; } ;
struct TYPE_15__ {TYPE_2__ td_ru; } ;
struct TYPE_14__ {TYPE_1__* p_vmspace; } ;
struct TYPE_13__ {int iov_len; char* iov_base; } ;
struct TYPE_11__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (struct bio*,char*) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_4__* VAR_23 ;
 TYPE_5__* VAR_24 ;
 char* FUNC_7 (struct cdev*) ;
 int FUNC_8 (struct vm_page**,int ) ;
 struct bio* FUNC_9 () ;
 int FUNC_10 (struct bio*) ;
 int FUNC_11 (struct bio*) ;
 struct vm_page** FUNC_12 (int,int ,int ) ;
 int VAR_25 ;
 int FUNC_13 (scalar_t__,struct vm_page**,int) ;
 int FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (char*,char*,scalar_t__) ;
 int FUNC_16 (TYPE_4__*,int ,int) ;
 scalar_t__ VAR_26 ;
 int FUNC_17 (struct bio*) ;
 struct buf* FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,struct buf*) ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_20 (char*,char*,int,...) ;
 int FUNC_21 (int *,scalar_t__,scalar_t__,int ,struct vm_page**,int) ;
 int FUNC_22 (struct vm_page**,int) ;

int
FUNC_23(struct cdev *VAR_29, struct uio *VAR_30, int VAR_31)
{
 struct cdevsw *VAR_32;
 struct buf *VAR_33;
 struct bio *VAR_34;
 struct vm_page **VAR_35;
 caddr_t VAR_36;
 u_int VAR_37, VAR_38;
 int VAR_39, VAR_40, VAR_41, VAR_42;
 vm_prot_t VAR_43;

 VAR_32 = VAR_29->si_devsw;
 VAR_41 = 0;
 VAR_36 = ((void*)0);

 if (VAR_32 == ((void*)0))
  return (VAR_7);


 if(VAR_29->si_iosize_max < VAR_12) {
  FUNC_15("WARNING: %s si_iosize_max=%d, using DFLTPHYS.\n",
      FUNC_7(VAR_29), VAR_29->si_iosize_max);
  VAR_29->si_iosize_max = VAR_4;
 }





 if (VAR_29->si_flags & VAR_17 &&
     (VAR_30->uio_resid > VAR_29->si_iosize_max || VAR_30->uio_resid > VAR_8 ||
     VAR_30->uio_iovcnt > 1)) {



  if (VAR_30->uio_resid > VAR_29->si_iosize_max)
   FUNC_20("%s: request size=%zd > si_iosize_max=%d; "
       "cannot split request\n", FUNC_7(VAR_29),
       VAR_30->uio_resid, VAR_29->si_iosize_max);
  if (VAR_30->uio_resid > VAR_8)
   FUNC_20("%s: request size=%zd > MAXPHYS=%d; "
       "cannot split request\n", FUNC_7(VAR_29),
       VAR_30->uio_resid, VAR_8);
  if (VAR_30->uio_iovcnt > 1)
   FUNC_20("%s: request vectors=%d > 1; "
       "cannot split request\n", FUNC_7(VAR_29),
       VAR_30->uio_iovcnt);
  return (VAR_6);
 }





 FUNC_1(VAR_23);

 VAR_34 = FUNC_9();
 if (VAR_30->uio_segflg != VAR_20) {
  VAR_33 = ((void*)0);
  VAR_35 = ((void*)0);
 } else if ((VAR_29->si_flags & VAR_18) && VAR_28) {
  VAR_33 = ((void*)0);
  VAR_42 = FUNC_6(FUNC_0(VAR_30->uio_resid, VAR_8)) + 1;
  VAR_35 = FUNC_12(sizeof(*VAR_35) * VAR_42, VAR_9, VAR_10);
 } else {
  VAR_33 = FUNC_18(VAR_25, VAR_10);
  VAR_36 = VAR_33->b_data;
  VAR_42 = FUNC_6(VAR_8);
  VAR_35 = VAR_33->b_pages;
 }
 VAR_43 = VAR_21;
 if (VAR_30->uio_rw == VAR_19)
  VAR_43 |= VAR_22;
 VAR_39 = 0;
 for (VAR_40 = 0; VAR_40 < VAR_30->uio_iovcnt; VAR_40++) {
  while (VAR_30->uio_iov[VAR_40].iov_len) {
   FUNC_11(VAR_34);
   if (VAR_30->uio_rw == VAR_19) {
    VAR_34->bio_cmd = VAR_1;
    VAR_24->td_ru.ru_inblock++;
   } else {
    VAR_34->bio_cmd = VAR_3;
    VAR_24->td_ru.ru_oublock++;
   }
   VAR_34->bio_offset = VAR_30->uio_offset;
   VAR_34->bio_data = VAR_30->uio_iov[VAR_40].iov_base;
   VAR_34->bio_length = VAR_30->uio_iov[VAR_40].iov_len;
   if (VAR_34->bio_length > VAR_29->si_iosize_max)
    VAR_34->bio_length = VAR_29->si_iosize_max;
   if (VAR_34->bio_length > VAR_8)
    VAR_34->bio_length = VAR_8;







   VAR_38 = (vm_offset_t)VAR_34->bio_data & VAR_11;
   if (VAR_33 && VAR_34->bio_length + VAR_38 > VAR_33->b_kvasize) {
    if (VAR_29->si_flags & VAR_17) {
     FUNC_20("%s: request ptr %p is not "
         "on a page boundary; cannot split "
         "request\n", FUNC_7(VAR_29),
         VAR_34->bio_data);
     VAR_39 = VAR_6;
     goto doerror;
    }
    VAR_34->bio_length = VAR_33->b_kvasize;
    if (VAR_38 != 0)
     VAR_34->bio_length -= VAR_12;
   }

   VAR_34->bio_bcount = VAR_34->bio_length;
   VAR_34->bio_dev = VAR_29;

   if (VAR_35) {
    if ((VAR_41 = FUNC_21(
        &VAR_23->p_vmspace->vm_map,
        (vm_offset_t)VAR_34->bio_data, VAR_34->bio_length,
        VAR_43, VAR_35, VAR_42)) < 0) {
     VAR_39 = VAR_5;
     goto doerror;
    }
    if (VAR_33 && VAR_36) {
     FUNC_13((vm_offset_t)VAR_36,
         VAR_35, VAR_41);
     VAR_34->bio_data = *(VAR_36 + VAR_38);
    } else {
     VAR_34->bio_ma = VAR_35;
     VAR_34->bio_ma_n = VAR_41;
     VAR_34->bio_ma_offset = VAR_38;
     VAR_34->bio_data = VAR_27;
     VAR_34->bio_flags |= VAR_2;
    }
   }

   VAR_32->d_strategy(VAR_34);
   if (VAR_30->uio_rw == VAR_19)
    FUNC_5(VAR_34, "physrd");
   else
    FUNC_5(VAR_34, "physwr");

   if (VAR_35) {
    if (VAR_33)
     FUNC_14((vm_offset_t)VAR_36, VAR_41);
    FUNC_22(VAR_35, VAR_41);
   }

   VAR_37 = VAR_34->bio_length - VAR_34->bio_resid;
   if (VAR_37 == 0 && !(VAR_34->bio_flags & VAR_0))
    goto doerror;
   VAR_30->uio_iov[VAR_40].iov_len -= VAR_37;
   VAR_30->uio_iov[VAR_40].iov_base =
       (char *)VAR_30->uio_iov[VAR_40].iov_base + VAR_37;
   VAR_30->uio_resid -= VAR_37;
   VAR_30->uio_offset += VAR_37;
   if (VAR_34->bio_flags & VAR_0) {
    VAR_39 = VAR_34->bio_error;
    goto doerror;
   }
  }
 }
doerror:
 if (VAR_33)
  FUNC_19(VAR_25, VAR_33);
 else if (VAR_35)
  FUNC_8(VAR_35, VAR_9);
 FUNC_10(VAR_34);
 FUNC_2(VAR_23);
 return (VAR_39);
}
