
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
struct mps_softc {TYPE_1__* fw_diag_buffer_list; } ;
struct TYPE_4__ {size_t buffer_type; scalar_t__ unique_id; scalar_t__ owned_by_firmware; scalar_t__ valid_data; scalar_t__ immediate; int size; int * product_specific; int extended_type; } ;
typedef TYPE_1__ mps_fw_diagnostic_buffer_t ;
struct TYPE_5__ {scalar_t__ UniqueId; size_t BufferType; int ApplicationFlags; scalar_t__ DiagnosticFlags; scalar_t__ DriverAddedBufferSize; int TotalBufferSize; int * ProductSpecific; int ExtendedType; } ;
typedef TYPE_2__ mps_fw_diag_query_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t FUNC_0 (struct mps_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct mps_softc *VAR_10, mps_fw_diag_query_t *VAR_11,
    uint32_t *VAR_12)
{
 mps_fw_diagnostic_buffer_t *VAR_13;
 uint8_t VAR_14;
 uint32_t VAR_15;

 VAR_15 = VAR_11->UniqueId;





 if (VAR_15 == VAR_9) {
  VAR_14 = VAR_11->BufferType;
  if (VAR_14 >= VAR_0) {
   *VAR_12 = VAR_5;
   return (VAR_2);
  }
 } else {
  VAR_14 = FUNC_0(VAR_10, VAR_15);
  if (VAR_14 == VAR_4) {
   *VAR_12 = VAR_5;
   return (VAR_2);
  }
 }




 VAR_13 = &VAR_10->fw_diag_buffer_list[VAR_14];
 VAR_11->BufferType = VAR_13->buffer_type;
 VAR_11->ExtendedType = VAR_13->extended_type;
 if (VAR_11->BufferType == VAR_1) {
  for (VAR_14 = 0; VAR_14 < (sizeof(VAR_11->ProductSpecific) / 4);
      VAR_14++) {
   VAR_11->ProductSpecific[VAR_14] =
       VAR_13->product_specific[VAR_14];
  }
 }
 VAR_11->TotalBufferSize = VAR_13->size;
 VAR_11->DriverAddedBufferSize = 0;
 VAR_11->UniqueId = VAR_13->unique_id;
 VAR_11->ApplicationFlags = 0;
 VAR_11->DiagnosticFlags = 0;




 if (VAR_13->immediate) {
  VAR_11->ApplicationFlags &= ~VAR_6;
 } else {
  VAR_11->ApplicationFlags |= VAR_6;
 }
 if (VAR_13->valid_data || VAR_13->owned_by_firmware) {
  VAR_11->ApplicationFlags |= VAR_7;
 } else {
  VAR_11->ApplicationFlags &= ~VAR_7;
 }
 if (VAR_13->owned_by_firmware) {
  VAR_11->ApplicationFlags |=
      VAR_8;
 } else {
  VAR_11->ApplicationFlags &=
      ~VAR_8;
 }

 return (VAR_3);
}
