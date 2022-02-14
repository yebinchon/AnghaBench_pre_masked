
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asmc_model {int smc_desc; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct asmc_model* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct asmc_model *VAR_3;
 int VAR_4;

 if (FUNC_5("asmc", 0))
  return (VAR_0);
 VAR_4 = FUNC_0(FUNC_2(VAR_2), VAR_2, VAR_1, ((void*)0));
 if (VAR_4 > 0)
  return (VAR_4);

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3) {
  FUNC_3(VAR_2, "model not recognized\n");
  return (VAR_0);
 }
 FUNC_4(VAR_2, VAR_3->smc_desc);

 return (VAR_4);
}
