
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {scalar_t__ saved_src_mode; scalar_t__ saved_dst_mode; int flags; int unpause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ahd_softc*,int ,int ) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline void
FUNC_5(struct ahd_softc *VAR_5)
{




 if (VAR_5->saved_src_mode != VAR_0
  && VAR_5->saved_dst_mode != VAR_0) {
  if ((VAR_5->flags & VAR_1) != 0)
   FUNC_3(VAR_5);
  FUNC_4(VAR_5, VAR_5->saved_src_mode, VAR_5->saved_dst_mode);
 }

 if ((FUNC_0(VAR_5, VAR_4) & ~VAR_2) == 0)
  FUNC_2(VAR_5, VAR_3, VAR_5->unpause);

 FUNC_1(VAR_5, VAR_0, VAR_0);
}
