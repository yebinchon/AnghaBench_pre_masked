
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; int mii_media_active; } ;
struct fxp_softc {int flags; int cu_resume_bug; scalar_t__ revision; void* ifp; int miibus; } ;
typedef void* if_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct fxp_softc*,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_6)
{
 struct fxp_softc *VAR_7;
 struct mii_data *VAR_8;
 if_t VAR_9;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = FUNC_1(VAR_7->miibus);
 VAR_9 = VAR_7->ifp;
 if (VAR_8 == ((void*)0) || VAR_9 == (void *)((void*)0) ||
     (FUNC_3(VAR_9) & VAR_2) == 0 ||
     (VAR_8->mii_media_status & (VAR_5 | VAR_4)) !=
     (VAR_5 | VAR_4))
  return;

 if (FUNC_0(VAR_8->mii_media_active) == VAR_3 &&
     VAR_7->flags & VAR_0)
  VAR_7->cu_resume_bug = 1;
 else
  VAR_7->cu_resume_bug = 0;




 if (VAR_7->revision == VAR_1)
  return;
 FUNC_4(VAR_9, 0, VAR_2);
 FUNC_2(VAR_7, 0);
}
