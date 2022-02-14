
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned int uint32_t ;
typedef scalar_t__ u_int ;
struct generic_pcie_core_softc {scalar_t__ bus_start; scalar_t__ bus_end; int bsh; int bst; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct generic_pcie_core_softc* FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static uint32_t
FUNC_7(device_t VAR_3, u_int VAR_4, u_int VAR_5,
    u_int VAR_6, u_int VAR_7, int VAR_8)
{
 struct generic_pcie_core_softc *VAR_9;
 bus_space_handle_t VAR_10;
 bus_space_tag_t VAR_11;
 uint64_t VAR_12;
 uint32_t VAR_13;

 VAR_9 = FUNC_4(VAR_3);
 if ((VAR_4 < VAR_9->bus_start) || (VAR_4 > VAR_9->bus_end))
  return (~0U);
 if ((VAR_5 > VAR_2) || (VAR_6 > VAR_1) ||
     (VAR_7 > VAR_0))
  return (~0U);

 VAR_12 = FUNC_0(VAR_4 - VAR_9->bus_start, VAR_5, VAR_6, VAR_7);
 VAR_11 = VAR_9->bst;
 VAR_10 = VAR_9->bsh;

 switch (VAR_8) {
 case 1:
  VAR_13 = FUNC_1(VAR_11, VAR_10, VAR_12);
  break;
 case 2:
  VAR_13 = FUNC_5(FUNC_2(VAR_11, VAR_10, VAR_12));
  break;
 case 4:
  VAR_13 = FUNC_6(FUNC_3(VAR_11, VAR_10, VAR_12));
  break;
 default:
  return (~0U);
 }

 return (VAR_13);
}
