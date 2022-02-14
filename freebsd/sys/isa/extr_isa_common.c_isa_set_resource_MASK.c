
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct isa_device {struct resource_list id_resources; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct resource_list*,int,int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_9, device_t VAR_10, int VAR_11, int VAR_12,
    rman_res_t VAR_13, rman_res_t VAR_14)
{
 struct isa_device* VAR_15 = FUNC_0(VAR_10);
 struct resource_list *VAR_16 = &VAR_15->id_resources;

 if (VAR_11 != VAR_6 && VAR_11 != VAR_8
     && VAR_11 != VAR_7 && VAR_11 != VAR_5)
  return (VAR_0);
 if (VAR_12 < 0)
  return (VAR_0);
 if (VAR_11 == VAR_6 && VAR_12 >= VAR_4)
  return (VAR_0);
 if (VAR_11 == VAR_8 && VAR_12 >= VAR_3)
  return (VAR_0);
 if (VAR_11 == VAR_7 && VAR_12 >= VAR_2)
  return (VAR_0);
 if (VAR_11 == VAR_5 && VAR_12 >= VAR_1)
  return (VAR_0);

 FUNC_1(VAR_16, VAR_11, VAR_12, VAR_13, VAR_13 + VAR_14 - 1, VAR_14);

 return (0);
}
