
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct generic_pcie_core_softc {scalar_t__ bus_start; scalar_t__ bus_end; int bsh; int bst; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct generic_pcie_core_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_3, u_int VAR_4, u_int VAR_5,
    u_int VAR_6, u_int VAR_7, uint32_t VAR_8, int VAR_9)
{
 struct generic_pcie_core_softc *VAR_10;
 bus_space_handle_t VAR_11;
 bus_space_tag_t VAR_12;
 uint64_t VAR_13;

 VAR_10 = FUNC_4(VAR_3);
 if ((VAR_4 < VAR_10->bus_start) || (VAR_4 > VAR_10->bus_end))
  return;
 if ((VAR_5 > VAR_2) || (VAR_6 > VAR_1) ||
     (VAR_7 > VAR_0))
  return;

 VAR_13 = FUNC_0(VAR_4 - VAR_10->bus_start, VAR_5, VAR_6, VAR_7);

 VAR_12 = VAR_10->bst;
 VAR_11 = VAR_10->bsh;

 switch (VAR_9) {
 case 1:
  FUNC_1(VAR_12, VAR_11, VAR_13, VAR_8);
  break;
 case 2:
  FUNC_2(VAR_12, VAR_11, VAR_13, FUNC_5(VAR_8));
  break;
 case 4:
  FUNC_3(VAR_12, VAR_11, VAR_13, FUNC_6(VAR_8));
  break;
 default:
  return;
 }
}
