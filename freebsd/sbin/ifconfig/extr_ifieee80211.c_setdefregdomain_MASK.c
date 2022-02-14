
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regdomain {scalar_t__ sku; int * cc; } ;
struct regdata {int dummy; } ;
struct TYPE_3__ {scalar_t__ regdomain; scalar_t__ country; scalar_t__* isocc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regdomain const*) ;
 int FUNC_1 (int,char*) ;
 struct regdata* FUNC_2 () ;
 int FUNC_3 (int) ;
 struct regdomain* FUNC_4 (struct regdata*,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(int VAR_3)
{
 struct regdata *VAR_4 = FUNC_2();
 const struct regdomain *VAR_5;



 if (VAR_2.regdomain != 0 ||
     VAR_2.country != VAR_0)
  return;

 FUNC_3(VAR_3);


 if (VAR_2.regdomain != 0 ||
     VAR_2.country != VAR_0)
  return;


 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (VAR_5 == ((void*)0))
  FUNC_1(1, "FCC regdomain was not found");

 VAR_2.regdomain = VAR_5->sku;
 if (VAR_5->cc != ((void*)0))
  FUNC_0(VAR_5);


 FUNC_5(VAR_3, &VAR_2);


 VAR_2.regdomain = 0;
 VAR_2.country = VAR_0;
 VAR_2.isocc[0] = 0;
 VAR_2.isocc[1] = 0;
}
