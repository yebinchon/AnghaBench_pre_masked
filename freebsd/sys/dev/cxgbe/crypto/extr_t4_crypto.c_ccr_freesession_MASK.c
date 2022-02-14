
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccr_softc {int lock; } ;
struct ccr_session {scalar_t__ pending; int active; } ;
typedef int device_t ;
typedef int crypto_session_t ;


 struct ccr_session* FUNC_0 (int ) ;
 struct ccr_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,struct ccr_session*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0, crypto_session_t VAR_1)
{
 struct ccr_softc *VAR_2;
 struct ccr_session *VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_3(&VAR_2->lock);
 if (VAR_3->pending != 0)
  FUNC_2(VAR_0,
      "session %p freed with %d pending requests\n", VAR_3,
      VAR_3->pending);
 VAR_3->active = 0;
 FUNC_4(&VAR_2->lock);
}
