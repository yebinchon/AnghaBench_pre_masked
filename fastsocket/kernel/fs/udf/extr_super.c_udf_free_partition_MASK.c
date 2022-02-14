
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udf_meta_data {int * s_bitmap_fe; int * s_mirror_fe; int * s_metadata_fe; } ;
struct TYPE_7__ {int * s_spar_map; } ;
struct TYPE_8__ {struct udf_meta_data s_metadata; TYPE_3__ s_sparing; } ;
struct TYPE_6__ {int s_bitmap; int * s_table; } ;
struct TYPE_5__ {int s_bitmap; int * s_table; } ;
struct udf_part_map {int s_partition_flags; scalar_t__ s_partition_type; TYPE_4__ s_type_specific; TYPE_2__ s_fspace; TYPE_1__ s_uspace; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct udf_part_map *VAR_6)
{
 int VAR_7;
 struct udf_meta_data *VAR_8;

 if (VAR_6->s_partition_flags & VAR_4)
  FUNC_1(VAR_6->s_uspace.s_table);
 if (VAR_6->s_partition_flags & VAR_2)
  FUNC_1(VAR_6->s_fspace.s_table);
 if (VAR_6->s_partition_flags & VAR_3)
  FUNC_2(VAR_6->s_uspace.s_bitmap);
 if (VAR_6->s_partition_flags & VAR_1)
  FUNC_2(VAR_6->s_fspace.s_bitmap);
 if (VAR_6->s_partition_type == VAR_5)
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   FUNC_0(VAR_6->s_type_specific.s_sparing.s_spar_map[VAR_7]);
 else if (VAR_6->s_partition_type == VAR_0) {
  VAR_8 = &VAR_6->s_type_specific.s_metadata;
  FUNC_1(VAR_8->s_metadata_fe);
  VAR_8->s_metadata_fe = ((void*)0);

  FUNC_1(VAR_8->s_mirror_fe);
  VAR_8->s_mirror_fe = ((void*)0);

  FUNC_1(VAR_8->s_bitmap_fe);
  VAR_8->s_bitmap_fe = ((void*)0);
 }
}
