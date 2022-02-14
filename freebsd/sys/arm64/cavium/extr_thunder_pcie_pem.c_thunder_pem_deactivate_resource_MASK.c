
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct resource*) ;
 scalar_t__ FUNC_2 (struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*,int ) ;
 int FUNC_5 (struct resource*,int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 bus_size_t VAR_6;
 bus_space_handle_t VAR_7;

 VAR_6 = (bus_size_t)FUNC_3(VAR_5);
 VAR_7 = FUNC_2(VAR_5);

 if (VAR_7 != 0) {
  FUNC_0(&VAR_0, VAR_7, VAR_6);
  FUNC_5(VAR_5, ((void*)0));
  FUNC_4(VAR_5, 0);
 }

 return (FUNC_1(VAR_5));
}
