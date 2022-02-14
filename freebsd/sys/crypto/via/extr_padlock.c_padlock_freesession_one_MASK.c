
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padlock_softc {int dummy; } ;
struct padlock_session {int ses_fpu_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct padlock_session*) ;

__attribute__((used)) static void
FUNC_2(struct padlock_softc *VAR_0, struct padlock_session *VAR_1)
{

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->ses_fpu_ctx);
}
