
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct ddf_vdc_record {int Block_Count; int * Physical_Disk_Sequence; int Primary_Element_Count; int Signature; } ;
struct ddf_meta {int dummy; } ;
typedef scalar_t__ off_t ;
struct TYPE_8__ {int Max_Primary_Element_Entries; } ;
struct TYPE_7__ {int PD_Reference; } ;
struct TYPE_6__ {TYPE_1__* entry; } ;
struct TYPE_5__ {int Configured_Size; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct ddf_meta*,int ) ;
 int FUNC_1 (struct ddf_meta*,int ) ;
 scalar_t__ FUNC_2 (struct ddf_meta*,int ) ;
 scalar_t__ FUNC_3 (struct ddf_meta*,int ) ;
 scalar_t__ FUNC_4 (struct ddf_meta*,int ) ;
 scalar_t__ FUNC_5 (struct ddf_meta*,int ) ;
 scalar_t__ FUNC_6 (struct ddf_meta*,int *) ;
 int FUNC_7 (struct ddf_meta*) ;
 struct ddf_vdc_record* FUNC_8 (struct ddf_meta*,int) ;
 int FUNC_9 (struct ddf_meta*,int *,scalar_t__) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int
FUNC_10(struct ddf_meta *VAR_4, off_t *VAR_5, off_t *VAR_6)
{
 struct ddf_vdc_record *VAR_7;
 off_t VAR_8[32], VAR_9[32], VAR_10, VAR_11;
 uint64_t *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18;

 *VAR_5 = 0;
 *VAR_6 = 0;
 VAR_18 = FUNC_2(VAR_4, VAR_2->PD_Reference);
 VAR_17 = FUNC_9(VAR_4, ((void*)0), VAR_18);
 VAR_8[0] = 0;
 VAR_9[0] = FUNC_4(VAR_4, VAR_3->entry[VAR_17].Configured_Size);
 VAR_15 = 1;
 VAR_16 = FUNC_7(VAR_4);
 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
  VAR_7 = FUNC_8(VAR_4, VAR_13);
  if (FUNC_3(VAR_4, VAR_7->Signature) != VAR_0)
   continue;
  for (VAR_17 = 0; VAR_17 < FUNC_1(VAR_4, VAR_7->Primary_Element_Count); VAR_17++)
   if (FUNC_3(VAR_4, VAR_7->Physical_Disk_Sequence[VAR_17]) == VAR_18)
    break;
  if (VAR_17 == FUNC_1(VAR_4, VAR_7->Primary_Element_Count))
   continue;
  VAR_12 = (uint64_t *)&(VAR_7->Physical_Disk_Sequence[
      FUNC_0(VAR_4, VAR_1->Max_Primary_Element_Entries)]);
  VAR_10 = FUNC_6(VAR_4, VAR_12 + VAR_17);
  VAR_11 = VAR_10 + FUNC_5(VAR_4, VAR_7->Block_Count);
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   if (VAR_8[VAR_14] >= VAR_11 || VAR_9[VAR_14] <= VAR_10 )
    continue;
   if (VAR_8[VAR_14] < VAR_10 && VAR_9[VAR_14] > VAR_11) {
    VAR_8[VAR_15] = VAR_11;
    VAR_9[VAR_15] = VAR_9[VAR_14];
    VAR_9[VAR_14] = VAR_10;
    VAR_15++;
   } else if (VAR_8[VAR_14] < VAR_10)
    VAR_9[VAR_14] = VAR_10;
   else
    VAR_8[VAR_14] = VAR_11;
  }
 }
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  if (VAR_9[VAR_14] - VAR_8[VAR_14] > *VAR_6) {
   *VAR_5 = VAR_8[VAR_14];
   *VAR_6 = VAR_9[VAR_14] - VAR_8[VAR_14];
  }
 }
 return ((*VAR_6 > 0) ? 1 : 0);
}
