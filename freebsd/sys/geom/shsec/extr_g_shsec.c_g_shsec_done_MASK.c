
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct g_shsec_softc {int dummy; } ;
struct bio {scalar_t__ bio_error; scalar_t__ bio_cmd; int bio_pflags; scalar_t__ bio_inbed; scalar_t__ bio_children; scalar_t__ bio_length; scalar_t__ bio_completed; scalar_t__ bio_data; TYPE_2__* bio_to; struct bio* bio_parent; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_shsec_softc* softc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct bio*,char*,...) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,scalar_t__) ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct bio *VAR_3)
{
 struct g_shsec_softc *VAR_4;
 struct bio *VAR_5;

 VAR_5 = VAR_3->bio_parent;
 VAR_4 = VAR_5->bio_to->geom->softc;
 if (VAR_3->bio_error == 0)
  FUNC_0(2, VAR_3, "Request done.");
 else {
  FUNC_0(0, VAR_3, "Request failed (error=%d).",
      VAR_3->bio_error);
  if (VAR_5->bio_error == 0)
   VAR_5->bio_error = VAR_3->bio_error;
 }
 if (VAR_5->bio_cmd == VAR_0) {
  if ((VAR_5->bio_pflags & VAR_1) != 0) {
   FUNC_1(VAR_3->bio_data, VAR_5->bio_data, VAR_5->bio_length);
   VAR_5->bio_pflags = 0;
  } else {
   FUNC_5((uint32_t *)VAR_3->bio_data,
       (uint32_t *)VAR_5->bio_data,
       (ssize_t)VAR_5->bio_length);
  }
 }
 FUNC_2(VAR_3->bio_data, VAR_3->bio_length);
 FUNC_6(VAR_2, VAR_3->bio_data);
 FUNC_3(VAR_3);
 VAR_5->bio_inbed++;
 if (VAR_5->bio_children == VAR_5->bio_inbed) {
  VAR_5->bio_completed = VAR_5->bio_length;
  FUNC_4(VAR_5, VAR_5->bio_error);
 }
}
