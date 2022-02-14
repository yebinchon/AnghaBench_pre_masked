
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_bump_id; } ;
struct g_mirror_disk {int d_flags; } ;
struct bio {scalar_t__ bio_cmd; scalar_t__ bio_error; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,struct bio*,char*,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct g_mirror_disk*,int ,int ) ;
 int FUNC_2 (struct g_mirror_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct g_mirror_softc *VAR_12,
    struct g_mirror_disk *VAR_13, struct bio *VAR_14)
{

 if (VAR_14->bio_cmd == VAR_0 && VAR_14->bio_error == VAR_3)
  return;

 if ((VAR_13->d_flags & VAR_7) == 0) {
  VAR_13->d_flags |= VAR_7;
  FUNC_0(0, VAR_14, "Request failed (error=%d).",
      VAR_14->bio_error);
 } else {
  FUNC_0(1, VAR_14, "Request failed (error=%d).",
      VAR_14->bio_error);
 }
 if (VAR_11 &&
     FUNC_2(VAR_12, VAR_8) > 1) {
  if (VAR_14->bio_error == VAR_2 &&
      VAR_14->bio_cmd == VAR_1)
   VAR_12->sc_bump_id |= VAR_5;
  else if (VAR_14->bio_error == VAR_2)
   VAR_12->sc_bump_id |= VAR_6;
  else
   VAR_12->sc_bump_id |= VAR_4;
  FUNC_1(VAR_13, VAR_9,
      VAR_10);
 }
}
