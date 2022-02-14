
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct receive_writer_arg {int * os; int max_object; int guid_to_ds_map; } ;
struct drr_write_byref {scalar_t__ drr_toguid; scalar_t__ drr_refguid; scalar_t__ drr_offset; int drr_object; scalar_t__ drr_length; int drr_refoffset; int drr_refobject; } ;
typedef int objset_t ;
struct TYPE_7__ {scalar_t__ guid; int gme_ds; } ;
typedef TYPE_1__ guid_map_entry_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {int db_data; } ;
typedef TYPE_2__ dmu_buf_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (int *,int ,int ,int ,TYPE_2__**,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,int ,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_11 (struct receive_writer_arg*,int ,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_12(struct receive_writer_arg *VAR_4,
    struct drr_write_byref *VAR_5)
{
 dmu_tx_t *VAR_6;
 int VAR_7;
 guid_map_entry_t VAR_8;
 guid_map_entry_t *VAR_9;
 avl_index_t VAR_10;
 objset_t *VAR_11 = ((void*)0);
 dmu_buf_t *VAR_12;

 if (VAR_5->drr_offset + VAR_5->drr_length < VAR_5->drr_offset)
  return (FUNC_0(VAR_1));





 if (VAR_5->drr_toguid != VAR_5->drr_refguid) {
  VAR_8.guid = VAR_5->drr_refguid;
  if ((VAR_9 = FUNC_1(VAR_4->guid_to_ds_map, &VAR_8,
      &VAR_10)) == ((void*)0)) {
   return (FUNC_0(VAR_1));
  }
  if (FUNC_4(VAR_9->gme_ds, &VAR_11))
   return (FUNC_0(VAR_1));
 } else {
  VAR_11 = VAR_4->os;
 }

 if (VAR_5->drr_object > VAR_4->max_object)
  VAR_4->max_object = VAR_5->drr_object;

 VAR_7 = FUNC_2(VAR_11, VAR_5->drr_refobject,
     VAR_5->drr_refoffset, VAR_2, &VAR_12, VAR_0);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_6 = FUNC_8(VAR_4->os);

 FUNC_9(VAR_6, VAR_5->drr_object,
     VAR_5->drr_offset, VAR_5->drr_length);
 VAR_7 = FUNC_6(VAR_6, VAR_3);
 if (VAR_7 != 0) {
  FUNC_5(VAR_6);
  return (VAR_7);
 }
 FUNC_10(VAR_4->os, VAR_5->drr_object,
     VAR_5->drr_offset, VAR_5->drr_length, VAR_12->db_data, VAR_6);
 FUNC_3(VAR_12, VAR_2);


 FUNC_11(VAR_4, VAR_5->drr_object, VAR_5->drr_offset, VAR_6);
 FUNC_7(VAR_6);
 return (0);
}
