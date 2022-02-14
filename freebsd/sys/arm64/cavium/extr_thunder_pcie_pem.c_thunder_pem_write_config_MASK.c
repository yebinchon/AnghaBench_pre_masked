
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct thunder_pem_softc {int reg_bst; scalar_t__ sli_window_base; int pem_sli_base; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 struct thunder_pem_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_7, u_int VAR_8, u_int VAR_9,
    u_int VAR_10, u_int VAR_11, uint32_t VAR_12, int VAR_13)
{
 uint64_t VAR_14;
 struct thunder_pem_softc *VAR_15;
 bus_space_tag_t VAR_16;
 bus_space_handle_t VAR_17;

 if ((VAR_8 > VAR_1) || (VAR_9 > VAR_3) ||
     (VAR_10 > VAR_2) || (VAR_11 > VAR_0))
  return;

 VAR_15 = FUNC_5(VAR_7);


 VAR_14 = (VAR_8 << VAR_4) | (VAR_9 << VAR_6) |
     (VAR_10 << VAR_5);
 VAR_16 = VAR_15->reg_bst;
 VAR_17 = VAR_15->pem_sli_base;

 FUNC_0(VAR_15->reg_bst, VAR_15->sli_window_base + VAR_14,
     VAR_0, 0, &VAR_17);

 switch (VAR_13) {
 case 1:
  FUNC_2(VAR_16, VAR_17, VAR_11, VAR_12);
  break;
 case 2:
  FUNC_3(VAR_16, VAR_17, VAR_11, FUNC_6(VAR_12));
  break;
 case 4:
  FUNC_4(VAR_16, VAR_17, VAR_11, FUNC_7(VAR_12));
  break;
 default:
  break;
 }

 FUNC_1(VAR_15->reg_bst, VAR_17, VAR_0);
}
