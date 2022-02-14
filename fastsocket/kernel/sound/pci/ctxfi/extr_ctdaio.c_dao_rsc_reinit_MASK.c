
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dao_desc {int passthru; int msr; } ;
struct TYPE_2__ {int type; } ;
struct dao {TYPE_1__ daio; struct daio_mgr* mgr; } ;
struct daio_mgr {int dummy; } ;
struct daio_desc {int passthru; int msr; int type; int member_0; } ;


 int FUNC_0 (struct dao*,struct daio_desc*,struct daio_mgr*) ;
 int FUNC_1 (struct dao*) ;

__attribute__((used)) static int FUNC_2(struct dao *VAR_0, const struct dao_desc *VAR_1)
{
 struct daio_mgr *VAR_2 = VAR_0->mgr;
 struct daio_desc VAR_3 = {0};

 VAR_3.type = VAR_0->daio.type;
 VAR_3.msr = VAR_1->msr;
 VAR_3.passthru = VAR_1->passthru;
 FUNC_1(VAR_0);
 return FUNC_0(VAR_0, &VAR_3, VAR_2);
}
