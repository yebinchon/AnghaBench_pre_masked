
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_pem_softc {int ranges; } ;
struct resource {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 struct thunder_pem_softc* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 scalar_t__ FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,scalar_t__) ;
 int FUNC_8 (struct resource*,int *) ;
 int FUNC_9 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{
 int VAR_8;
 bus_addr_t VAR_9;
 bus_size_t VAR_10;
 bus_space_handle_t VAR_11;
 struct thunder_pem_softc *VAR_12;

 if ((VAR_8 = FUNC_3(VAR_7)) != 0)
  return (VAR_8);

 VAR_12 = FUNC_1(VAR_3);




 if (VAR_5 == VAR_1 || VAR_5 == VAR_0) {
  VAR_9 = (bus_addr_t)FUNC_6(VAR_7);
  VAR_10 = (bus_size_t)FUNC_5(VAR_7);

  VAR_9 = FUNC_2(VAR_12->ranges, VAR_9);

  VAR_8 = FUNC_0(&VAR_2, VAR_9, VAR_10, 0, &VAR_11);
  if (VAR_8 != 0) {
   FUNC_4(VAR_7);
   return (VAR_8);
  }
  FUNC_8(VAR_7, &VAR_2);
  FUNC_9(VAR_7, (void *)VAR_11);
  FUNC_7(VAR_7, VAR_11);
 }
 return (0);
}
