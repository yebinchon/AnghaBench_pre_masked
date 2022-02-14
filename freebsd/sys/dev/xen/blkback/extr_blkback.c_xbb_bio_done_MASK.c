
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint8_t ;
struct xbb_xen_reqlist {int residual_512b_sectors; int pendcnt; scalar_t__ kva; scalar_t__ bounce; int status; struct xbb_softc* xbb; } ;
struct xbb_softc {int dev; int dev_name; } ;
struct bio {int bio_resid; scalar_t__ bio_error; scalar_t__ bio_cmd; int bio_bcount; scalar_t__ bio_data; struct xbb_xen_reqlist* bio_caller1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (struct xbb_softc*,struct xbb_xen_reqlist*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct bio *VAR_5)
{
 struct xbb_softc *VAR_6;
 struct xbb_xen_reqlist *VAR_7;

 VAR_7 = VAR_5->bio_caller1;
 VAR_6 = VAR_7->xbb;

 VAR_7->residual_512b_sectors += VAR_5->bio_resid >> 9;
 if (VAR_5->bio_error) {
  FUNC_0("BIO returned error %d for operation on device %s\n",
   VAR_5->bio_error, VAR_6->dev_name);
  VAR_7->status = VAR_1;

  if (VAR_5->bio_error == VAR_2
   && FUNC_5(VAR_6->dev) == VAR_4) {






   FUNC_6(VAR_6->dev, VAR_3);
  }
 }
 if (FUNC_1(&VAR_7->pendcnt, -1) == 1)
  FUNC_4(VAR_6, VAR_7);

 FUNC_2(VAR_5);
}
