
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pcie_ofw_devinfo {int di_dinfo; int di_rl; } ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,struct generic_pcie_ofw_devinfo*) ;
 int FUNC_4 (struct generic_pcie_ofw_devinfo*,int ) ;
 int FUNC_5 (scalar_t__,int *,int *) ;
 struct generic_pcie_ofw_devinfo* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,int *,int *) ;
 int FUNC_11 (int *,scalar_t__,int ,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_3)
{
 struct generic_pcie_ofw_devinfo *VAR_4;
 device_t VAR_5;
 phandle_t VAR_6, VAR_7;
 pcell_t VAR_8, VAR_9;

 VAR_6 = FUNC_9(VAR_3);
 if (VAR_6 > 0) {
  FUNC_5(VAR_6, &VAR_8, &VAR_9);

  for (VAR_7 = FUNC_0(VAR_6); VAR_7 > 0; VAR_7 = FUNC_1(VAR_7)) {


   VAR_4 = FUNC_6(sizeof(*VAR_4), VAR_0, VAR_1 | VAR_2);
   if (FUNC_8(&VAR_4->di_dinfo, VAR_7) != 0) {
    FUNC_4(VAR_4, VAR_0);
    continue;
   }


   FUNC_13(&VAR_4->di_rl);
   FUNC_11(VAR_3, VAR_7, VAR_8, VAR_9,
       &VAR_4->di_rl);
   FUNC_10(VAR_3, VAR_7, &VAR_4->di_rl, ((void*)0));


   VAR_5 = FUNC_2(VAR_3, ((void*)0), -1);
   if (VAR_5 == ((void*)0)) {
    FUNC_12(&VAR_4->di_rl);
    FUNC_7(&VAR_4->di_dinfo);
    FUNC_4(VAR_4, VAR_0);
    continue;
   }

   FUNC_3(VAR_5, VAR_4);
  }
 }

 return (0);
}
