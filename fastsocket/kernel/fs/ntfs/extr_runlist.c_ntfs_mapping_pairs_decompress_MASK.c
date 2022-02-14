
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
typedef int s8 ;
typedef int s64 ;
struct TYPE_22__ {int vcn; int lcn; int length; } ;
typedef TYPE_3__ runlist_element ;
struct TYPE_23__ {int major_ver; int cluster_size; int cluster_size_bits; int sb; } ;
typedef TYPE_4__ ntfs_volume ;
typedef int VCN ;
struct TYPE_21__ {int allocated_size; int lowest_vcn; int highest_vcn; int mapping_pairs_offset; } ;
struct TYPE_20__ {TYPE_2__ non_resident; } ;
struct TYPE_24__ {TYPE_1__ data; int length; int non_resident; } ;
typedef int LCN ;
typedef TYPE_5__ ATTR_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (int) ;
 TYPE_3__* FUNC_11 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;

runlist_element *FUNC_14(const ntfs_volume *VAR_7,
  const ATTR_RECORD *VAR_8, runlist_element *VAR_9)
{
 VCN VAR_10;
 LCN VAR_11;
 s64 VAR_12;
 runlist_element *VAR_13;
 u8 *VAR_14;
 u8 *VAR_15;
 int VAR_16;
 u16 VAR_17;

 u8 VAR_18;
 VAR_10 = FUNC_12(VAR_8->data.non_resident.lowest_vcn);
 VAR_11 = 0;

 VAR_14 = (u8*)VAR_8 + FUNC_2(
   VAR_8->data.non_resident.mapping_pairs_offset);
 VAR_15 = (u8*)VAR_8 + FUNC_3(VAR_8->length);
 if (FUNC_13(VAR_14 < (u8*)VAR_8 || VAR_14 > VAR_15)) {
  FUNC_8(VAR_7->sb, "Corrupt attribute.");
  return FUNC_0(-VAR_1);
 }

 if (!VAR_10 && !*VAR_14)
  return VAR_9;

 VAR_17 = 0;

 VAR_13 = FUNC_10(VAR_16 = VAR_6);
 if (FUNC_13(!VAR_13))
  return FUNC_0(-VAR_2);

 if (VAR_10) {
  VAR_13->vcn = 0;
  VAR_13->lcn = VAR_5;
  VAR_13->length = VAR_10;
  VAR_17++;
 }
 while (VAR_14 < VAR_15 && *VAR_14) {





  if (((VAR_17 + 3) * sizeof(*VAR_9)) > VAR_16) {
   runlist_element *VAR_19;

   VAR_19 = FUNC_10(VAR_16 + (int)VAR_6);
   if (FUNC_13(!VAR_19)) {
    FUNC_9(VAR_13);
    return FUNC_0(-VAR_2);
   }
   FUNC_5(VAR_19, VAR_13, VAR_16);
   FUNC_9(VAR_13);
   VAR_13 = VAR_19;
   VAR_16 += VAR_6;
  }

  VAR_13[VAR_17].vcn = VAR_10;







  VAR_18 = *VAR_14 & 0xf;
  if (VAR_18) {
   if (FUNC_13(VAR_14 + VAR_18 > VAR_15))
    goto io_error;
   for (VAR_12 = (s8)VAR_14[VAR_18--]; VAR_18; VAR_18--)
    VAR_12 = (VAR_12 << 8) + VAR_14[VAR_18];
  } else {
   FUNC_8(VAR_7->sb, "Missing length entry in mapping "
     "pairs array.");
   VAR_12 = (s64)-1;
  }




  if (FUNC_13(VAR_12 < 0)) {
   FUNC_8(VAR_7->sb, "Invalid length in mapping pairs "
     "array.");
   goto err_out;
  }




  VAR_13[VAR_17].length = VAR_12;

  VAR_10 += VAR_12;





  if (!(*VAR_14 & 0xf0))
   VAR_13[VAR_17].lcn = VAR_4;
  else {

   u8 VAR_20 = *VAR_14 & 0xf;
   VAR_18 = VAR_20 + ((*VAR_14 >> 4) & 0xf);
   if (VAR_14 + VAR_18 > VAR_15)
    goto io_error;
   for (VAR_12 = (s8)VAR_14[VAR_18--]; VAR_18 > VAR_20; VAR_18--)
    VAR_12 = (VAR_12 << 8) + VAR_14[VAR_18];

   VAR_11 += VAR_12;
   if (FUNC_13(VAR_11 < (LCN)-1)) {
    FUNC_8(VAR_7->sb, "Invalid LCN < -1 in "
      "mapping pairs array.");
    goto err_out;
   }

   VAR_13[VAR_17].lcn = VAR_11;
  }

  VAR_17++;

  VAR_14 += (*VAR_14 & 0xf) + ((*VAR_14 >> 4) & 0xf) + 1;
 }
 if (FUNC_13(VAR_14 >= VAR_15))
  goto io_error;




 VAR_12 = FUNC_12(VAR_8->data.non_resident.highest_vcn);
 if (FUNC_13(VAR_12 && VAR_10 - 1 != VAR_12)) {
mpa_err:
  FUNC_8(VAR_7->sb, "Corrupt mapping pairs array in "
    "non-resident attribute.");
  goto err_out;
 }

 if (!VAR_8->data.non_resident.lowest_vcn) {
  VCN VAR_21;

  VAR_21 = ((FUNC_12(
    VAR_8->data.non_resident.allocated_size) +
    VAR_7->cluster_size - 1) >>
    VAR_7->cluster_size_bits) - 1;




  if (VAR_12) {






   if (VAR_12 < VAR_21) {
    FUNC_6("More extents to follow; deltaxcn "
      "= 0x%llx, max_cluster = "
      "0x%llx",
      (unsigned long long)VAR_12,
      (unsigned long long)
      VAR_21);
    VAR_13[VAR_17].vcn = VAR_10;
    VAR_10 += VAR_13[VAR_17].length = VAR_21 -
      VAR_12;
    VAR_13[VAR_17].lcn = VAR_5;
    VAR_17++;
   } else if (FUNC_13(VAR_12 > VAR_21)) {
    FUNC_8(VAR_7->sb, "Corrupt attribute.  "
      "deltaxcn = 0x%llx, "
      "max_cluster = 0x%llx",
      (unsigned long long)VAR_12,
      (unsigned long long)
      VAR_21);
    goto mpa_err;
   }
  }
  VAR_13[VAR_17].lcn = VAR_3;
 } else
  VAR_13[VAR_17].lcn = VAR_5;


 VAR_13[VAR_17].vcn = VAR_10;
 VAR_13[VAR_17].length = (s64)0;

 if (!VAR_9) {
  FUNC_6("Mapping pairs array successfully decompressed:");
  FUNC_7(VAR_13);
  return VAR_13;
 }

 VAR_9 = FUNC_11(VAR_9, VAR_13);
 if (FUNC_4(!FUNC_1(VAR_9)))
  return VAR_9;
 FUNC_9(VAR_13);
 FUNC_8(VAR_7->sb, "Failed to merge runlists.");
 return VAR_9;
io_error:
 FUNC_8(VAR_7->sb, "Corrupt attribute.");
err_out:
 FUNC_9(VAR_13);
 return FUNC_0(-VAR_1);
}
