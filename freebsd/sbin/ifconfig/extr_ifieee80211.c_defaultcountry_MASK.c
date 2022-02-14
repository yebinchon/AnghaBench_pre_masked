
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regdomain {int name; TYPE_1__* cc; } ;
struct regdata {int dummy; } ;
struct country {int * isoname; int code; } ;
struct TYPE_4__ {int * isocc; int country; } ;
struct TYPE_3__ {int code; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 struct regdata* FUNC_1 () ;
 struct country* FUNC_2 (struct regdata*,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(const struct regdomain *VAR_1)
{
 struct regdata *VAR_2 = FUNC_1();
 const struct country *VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1->cc->code);
 if (VAR_3 == ((void*)0))
  FUNC_0(1, "internal error, ISO country code %d not "
      "defined for regdomain %s", VAR_1->cc->code, VAR_1->name);
 VAR_0.country = VAR_3->code;
 VAR_0.isocc[0] = VAR_3->isoname[0];
 VAR_0.isocc[1] = VAR_3->isoname[1];
}
