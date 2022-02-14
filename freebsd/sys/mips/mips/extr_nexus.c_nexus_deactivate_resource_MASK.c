
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,struct resource*) ;
 int FUNC_2 (struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*,int ) ;
 int FUNC_7 (struct resource*,int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
     struct resource *VAR_6)
{
 bus_space_handle_t VAR_7;
 bus_size_t VAR_8;

 VAR_7 = FUNC_3(VAR_6);

 if (VAR_4 == VAR_1 && VAR_7 != 0) {
  VAR_8 = (bus_size_t)FUNC_5(VAR_6);
  FUNC_0(FUNC_4(VAR_6), VAR_7, VAR_8);
  FUNC_7(VAR_6, ((void*)0));
  FUNC_6(VAR_6, 0);
 } else if (VAR_4 == VAR_0) {



 }

 return (FUNC_2(VAR_6));
}
