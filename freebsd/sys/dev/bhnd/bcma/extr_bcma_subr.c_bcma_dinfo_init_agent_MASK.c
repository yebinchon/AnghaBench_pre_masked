
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_devinfo {int * res_agent; int rid_agent; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
typedef scalar_t__ bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;


 int FUNC_0 (struct bcma_devinfo*) ;
 int FUNC_1 (struct bcma_devinfo*) ;
 int * FUNC_2 (int ,int ,int ,int *,scalar_t__,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, device_t VAR_6, struct bcma_devinfo *VAR_7)
{
 bhnd_addr_t VAR_8;
 bhnd_size_t VAR_9;
 rman_res_t VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_3(VAR_7->res_agent == ((void*)0), ("double allocation of agent"));



 if (FUNC_4(VAR_6, VAR_0, 0, 0) == -1)
  return (0);


 VAR_13 = FUNC_5(VAR_6, VAR_0, 0, 0,
     &VAR_8, &VAR_9);
 if (VAR_13) {
  FUNC_6(VAR_5, "failed fetching agent register block "
      "address for core %u\n", FUNC_1(VAR_7));
  return (VAR_13);
 }


 VAR_10 = VAR_8;
 VAR_11 = VAR_9;
 VAR_12 = VAR_10 + VAR_11 - 1;

 VAR_7->rid_agent = FUNC_0(VAR_7);
 VAR_7->res_agent = FUNC_2(VAR_5, VAR_5, VAR_4,
     &VAR_7->rid_agent, VAR_10, VAR_12, VAR_11, VAR_2|VAR_3);
 if (VAR_7->res_agent == ((void*)0)) {
  FUNC_6(VAR_5, "failed allocating agent register block for "
      "core %u\n", FUNC_1(VAR_7));
  return (VAR_1);
 }

 return (0);
}
