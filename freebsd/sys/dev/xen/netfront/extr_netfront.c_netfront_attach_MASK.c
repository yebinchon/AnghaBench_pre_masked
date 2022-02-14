
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 != 0) {
  FUNC_6(VAR_5, VAR_6, "creating netdev");
  return (VAR_6);
 }

 FUNC_0(FUNC_4(VAR_5),
     FUNC_2(FUNC_5(VAR_5)),
     VAR_2, "enable_lro", VAR_1,
     &VAR_3, 0, "Large Receive Offload");

 FUNC_1(FUNC_4(VAR_5),
     FUNC_2(FUNC_5(VAR_5)),
     VAR_2, "num_queues", VAR_0,
     &VAR_4, "Number of pairs of queues");

 return (0);
}
