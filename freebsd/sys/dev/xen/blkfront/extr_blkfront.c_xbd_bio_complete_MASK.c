
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int dummy; } ;
struct xbd_command {scalar_t__ cm_status; struct bio* cm_bp; } ;
struct bio {int bio_flags; scalar_t__ bio_resid; int bio_error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,char*,int,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (struct xbd_command*) ;

__attribute__((used)) static void
FUNC_5(struct xbd_softc *VAR_3, struct xbd_command *VAR_4)
{
 struct bio *VAR_5;

 VAR_5 = VAR_4->cm_bp;

 if (FUNC_0(VAR_4->cm_status != VAR_1)) {
  FUNC_2(VAR_5, "disk error" , -1, 0);
  FUNC_3(" status: %x\n", VAR_4->cm_status);
  VAR_5->bio_flags |= VAR_0;
 }

 if (VAR_5->bio_flags & VAR_0)
  VAR_5->bio_error = VAR_2;
 else
  VAR_5->bio_resid = 0;

 FUNC_4(VAR_4);
 FUNC_1(VAR_5);
}
