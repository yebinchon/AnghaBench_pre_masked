
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct imapper {int dummy; } ;
struct TYPE_4__ {int msr; } ;
struct daio {TYPE_1__ rscl; } ;
struct dao {struct imapper** imappers; TYPE_2__* mgr; struct daio daio; } ;
struct TYPE_5__ {int (* imap_delete ) (TYPE_2__*,struct imapper*) ;} ;


 int FUNC_0 (struct imapper*) ;
 int FUNC_1 (TYPE_2__*,struct imapper*) ;
 int FUNC_2 (TYPE_2__*,struct imapper*) ;

__attribute__((used)) static int FUNC_3(struct dao *VAR_0)
{
 struct imapper *VAR_1;
 struct daio *VAR_2 = &VAR_0->daio;
 int VAR_3;

 if (!VAR_0->imappers[0])
  return 0;

 VAR_1 = VAR_0->imappers[0];
 VAR_0->mgr->imap_delete(VAR_0->mgr, VAR_1);

 for (VAR_3 = 1; VAR_3 < VAR_2->rscl.msr; VAR_3++) {
  VAR_1 = VAR_0->imappers[VAR_3];
  VAR_0->mgr->imap_delete(VAR_0->mgr, VAR_1);
  VAR_0->imappers[VAR_3] = ((void*)0);
 }

 FUNC_0(VAR_0->imappers[0]);
 VAR_0->imappers[0] = ((void*)0);

 return 0;
}
