
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct receive_writer_arg {scalar_t__ max_object; int os; } ;
struct drr_spill {scalar_t__ drr_object; int drr_length; } ;
typedef int dmu_tx_t ;
struct TYPE_8__ {int db_data; int db_size; int db_object; } ;
typedef TYPE_1__ dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (int ,scalar_t__,int ,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ,TYPE_1__**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(struct receive_writer_arg *VAR_4, struct drr_spill *VAR_5,
    void *VAR_6)
{
 dmu_tx_t *VAR_7;
 dmu_buf_t *VAR_8, *VAR_9;
 int VAR_10;

 if (VAR_5->drr_length < VAR_2 ||
     VAR_5->drr_length > FUNC_16(FUNC_9(VAR_4->os)))
  return (FUNC_0(VAR_0));

 if (FUNC_8(VAR_4->os, VAR_5->drr_object, ((void*)0)) != 0)
  return (FUNC_0(VAR_0));

 if (VAR_5->drr_object > VAR_4->max_object)
  VAR_4->max_object = VAR_5->drr_object;

 FUNC_2(FUNC_5(VAR_4->os, VAR_5->drr_object, VAR_1, &VAR_8));
 if ((VAR_10 = FUNC_10(VAR_8, VAR_1, &VAR_9)) != 0) {
  FUNC_6(VAR_8, VAR_1);
  return (VAR_10);
 }

 VAR_7 = FUNC_14(VAR_4->os);

 FUNC_15(VAR_7, VAR_8->db_object);

 VAR_10 = FUNC_12(VAR_7, VAR_3);
 if (VAR_10 != 0) {
  FUNC_6(VAR_8, VAR_1);
  FUNC_6(VAR_9, VAR_1);
  FUNC_11(VAR_7);
  return (VAR_10);
 }
 FUNC_7(VAR_9, VAR_7);

 if (VAR_9->db_size < VAR_5->drr_length)
  FUNC_1(0 == FUNC_4(VAR_9,
      VAR_5->drr_length, VAR_7));
 FUNC_3(VAR_6, VAR_9->db_data, VAR_5->drr_length);

 FUNC_6(VAR_8, VAR_1);
 FUNC_6(VAR_9, VAR_1);

 FUNC_13(VAR_7);
 return (0);
}
