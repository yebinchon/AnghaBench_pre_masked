
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mps_softc {int dummy; } ;
struct TYPE_13__ {int BytesToRead; int PtrDataBuffer; } ;
typedef TYPE_1__ mps_fw_diag_unregister_t ;
typedef TYPE_1__ mps_fw_diag_release_t ;
typedef TYPE_1__ mps_fw_diag_register_t ;
typedef TYPE_1__ mps_fw_diag_query_t ;
typedef TYPE_1__ mps_diag_read_buffer_t ;
typedef int diag_unregister ;
typedef int diag_release ;
typedef int diag_register ;
typedef int diag_read_buffer ;
typedef int diag_query ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (struct mps_softc*,TYPE_1__*,int*) ;
 int FUNC_4 (struct mps_softc*,TYPE_1__*,int ,int*) ;
 int FUNC_5 (struct mps_softc*,TYPE_1__*,int*) ;
 int FUNC_6 (struct mps_softc*,TYPE_1__*,int*) ;
 int FUNC_7 (struct mps_softc*,TYPE_1__*,int*) ;

__attribute__((used)) static int
FUNC_8(struct mps_softc *VAR_5, uint32_t VAR_6, uint8_t *VAR_7,
    uint32_t VAR_8, uint32_t *VAR_9)
{
 mps_fw_diag_register_t VAR_10;
 mps_fw_diag_unregister_t VAR_11;
 mps_fw_diag_query_t VAR_12;
 mps_diag_read_buffer_t VAR_13;
 mps_fw_diag_release_t VAR_14;
 int VAR_15 = VAR_1;
 uint32_t VAR_16;

 VAR_16 = *VAR_9;
 *VAR_9 = VAR_3;

 switch (VAR_6) {
  case 130:
   if (!VAR_8) {
    *VAR_9 =
        VAR_2;
    VAR_15 = VAR_0;
    break;
   }
   if (FUNC_1(VAR_7, &VAR_10,
       sizeof(VAR_10)) != 0)
    return (VAR_0);
   VAR_15 = FUNC_5(VAR_5, &VAR_10,
       VAR_9);
   break;

  case 128:
   if (VAR_8 < sizeof(VAR_11)) {
    *VAR_9 =
        VAR_2;
    VAR_15 = VAR_0;
    break;
   }
   if (FUNC_1(VAR_7, &VAR_11,
       sizeof(VAR_11)) != 0)
    return (VAR_0);
   VAR_15 = FUNC_7(VAR_5, &VAR_11,
       VAR_9);
   break;

  case 132:
   if (VAR_8 < sizeof (VAR_12)) {
    *VAR_9 =
        VAR_2;
    VAR_15 = VAR_0;
    break;
   }
   if (FUNC_1(VAR_7, &VAR_12, sizeof(VAR_12))
       != 0)
    return (VAR_0);
   VAR_15 = FUNC_3(VAR_5, &VAR_12, VAR_9);
   if (VAR_15 == VAR_1)
    if (FUNC_2(&VAR_12, VAR_7,
        sizeof (VAR_12)) != 0)
     return (VAR_0);
   break;

  case 131:
   if (FUNC_1(VAR_7, &VAR_13,
       sizeof(VAR_13)) != 0)
    return (VAR_0);
   if (VAR_8 < VAR_13.BytesToRead) {
    *VAR_9 =
        VAR_2;
    VAR_15 = VAR_0;
    break;
   }
   VAR_15 = FUNC_4(VAR_5, &VAR_13,
       FUNC_0(VAR_13.PtrDataBuffer),
       VAR_9);
   if (VAR_15 == VAR_1) {
    if (FUNC_2(&VAR_13, VAR_7,
        sizeof(VAR_13) -
        sizeof(VAR_13.PtrDataBuffer)) !=
        0)
     return (VAR_0);
   }
   break;

  case 129:
   if (VAR_8 < sizeof(VAR_14)) {
    *VAR_9 =
        VAR_2;
    VAR_15 = VAR_0;
    break;
   }
   if (FUNC_1(VAR_7, &VAR_14,
       sizeof(VAR_14)) != 0)
    return (VAR_0);
   VAR_15 = FUNC_6(VAR_5, &VAR_14,
       VAR_9);
   break;

  default:
   *VAR_9 = VAR_2;
   VAR_15 = VAR_0;
   break;
 }

 if ((VAR_15 == VAR_0) &&
     (VAR_16 == VAR_4) &&
     (*VAR_9 != VAR_3))
  VAR_15 = VAR_1;

 return (VAR_15);
}
