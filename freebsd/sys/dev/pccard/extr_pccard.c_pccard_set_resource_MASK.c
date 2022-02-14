
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct pccard_ivar {struct resource_list resources; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pccard_ivar* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct resource_list*,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 int * FUNC_3 (struct resource_list*,int ,int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_10, device_t VAR_11, int VAR_12, int VAR_13,
    rman_res_t VAR_14, rman_res_t VAR_15)
{
 struct pccard_ivar *VAR_16 = FUNC_0(VAR_11);
 struct resource_list *VAR_17 = &VAR_16->resources;

 if (VAR_12 != VAR_7 && VAR_12 != VAR_9
     && VAR_12 != VAR_8 && VAR_12 != VAR_6)
  return (VAR_0);
 if (VAR_13 < 0)
  return (VAR_0);
 if (VAR_12 == VAR_7 && VAR_13 >= VAR_5)
  return (VAR_0);
 if (VAR_12 == VAR_9 && VAR_13 >= VAR_4)
  return (VAR_0);
 if (VAR_12 == VAR_8 && VAR_13 >= VAR_3)
  return (VAR_0);
 if (VAR_12 == VAR_6 && VAR_13 >= VAR_2)
  return (VAR_0);

 FUNC_2(VAR_17, VAR_12, VAR_13, VAR_14, VAR_14 + VAR_15 - 1, VAR_15);
 if (((void*)0) != FUNC_3(VAR_17, FUNC_1(VAR_10), VAR_10,
     VAR_12, &VAR_13, VAR_14, VAR_14 + VAR_15 - 1, VAR_15, 0))
  return 0;
 else
  return VAR_1;
}
