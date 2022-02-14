
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef size_t u_int ;
struct scsi_report_luns_data {TYPE_2__* luns; int length; } ;
struct cam_path {TYPE_1__* target; } ;
typedef int probe_flags ;
typedef scalar_t__ lun_id_t ;
struct TYPE_4__ {int * lundata; } ;
struct TYPE_3__ {int luns_mtx; struct scsi_report_luns_data* luns; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_report_luns_data*,size_t) ;
 int FUNC_1 (struct scsi_report_luns_data*,size_t,scalar_t__) ;
 int FUNC_2 (struct scsi_report_luns_data*,size_t,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct scsi_report_luns_data*,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_9 (struct cam_path**,int *,int ,int ,scalar_t__) ;
 int FUNC_10 (struct cam_path*) ;
 int FUNC_11 (struct cam_path*) ;
 int FUNC_12 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_13(struct cam_path *VAR_4, struct scsi_report_luns_data *VAR_5,
    probe_flags VAR_6)
{
 struct cam_path *VAR_7;
 struct scsi_report_luns_data *VAR_8;
 u_int VAR_9, VAR_10, VAR_11, VAR_12;
 lun_id_t VAR_13;
 u_int8_t *VAR_14, *VAR_15;

 if (VAR_4->target == ((void*)0)) {
  return;
 }
 FUNC_5(&VAR_4->target->luns_mtx);
 VAR_8 = VAR_4->target->luns;
 VAR_4->target->luns = VAR_5;
 FUNC_6(&VAR_4->target->luns_mtx);
 if (VAR_8 == ((void*)0))
  return;
 VAR_11 = FUNC_7(VAR_8->length) / 8;
 VAR_12 = FUNC_7(VAR_5->length) / 8;




 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_14 = VAR_8->luns[VAR_9].lundata;
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
   VAR_15 = VAR_5->luns[VAR_10].lundata;
   if (FUNC_4(VAR_15, VAR_14, 8) == 0) {
    break;
   }
  }
  if (VAR_10 < VAR_12) {
   continue;
  }







  FUNC_1(VAR_8, VAR_9, VAR_13);
  if (VAR_13 == 0) {
   continue;
  }







  if (!(VAR_6 & VAR_3)) {
   if (!FUNC_0(VAR_8, VAR_9))
    continue;
   FUNC_2(VAR_8, VAR_9, VAR_13);
  }

  if (FUNC_9(&VAR_7, ((void*)0), FUNC_11(VAR_4),
      FUNC_12(VAR_4), VAR_13) == VAR_1) {
   FUNC_8(VAR_0, VAR_7, ((void*)0));
   FUNC_10(VAR_7);
  }
 }
 FUNC_3(VAR_8, VAR_2);
}
