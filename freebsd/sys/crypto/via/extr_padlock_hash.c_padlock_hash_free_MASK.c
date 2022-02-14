
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct padlock_session {int * ses_octx; TYPE_1__* ses_axf; int * ses_ictx; } ;
struct TYPE_2__ {int ctxsize; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void
FUNC_3(struct padlock_session *VAR_1)
{

 if (VAR_1->ses_ictx != ((void*)0)) {
  FUNC_2(VAR_1->ses_axf, VAR_1->ses_ictx);
  FUNC_0(VAR_1->ses_ictx, VAR_1->ses_axf->ctxsize);
  FUNC_1(VAR_1->ses_ictx, VAR_0);
  VAR_1->ses_ictx = ((void*)0);
 }
 if (VAR_1->ses_octx != ((void*)0)) {
  FUNC_2(VAR_1->ses_axf, VAR_1->ses_octx);
  FUNC_0(VAR_1->ses_octx, VAR_1->ses_axf->ctxsize);
  FUNC_1(VAR_1->ses_octx, VAR_0);
  VAR_1->ses_octx = ((void*)0);
 }
}
