
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ func_code; TYPE_2__* path; } ;
union ccb {int csio; TYPE_1__ ccb_h; } ;
struct cam_ed {int inq_data; } ;
typedef int cdb_str ;
struct TYPE_4__ {struct cam_ed* device; } ;


 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(union ccb *VAR_3)
{
 char VAR_4[(VAR_1 * 3) + 1];
 struct cam_ed *VAR_5;

 if (VAR_3->ccb_h.func_code != VAR_2)
  return;

 VAR_5 = VAR_3->ccb_h.path->device;
 FUNC_0(VAR_3->ccb_h.path,
     VAR_0,("%s. CDB: %s\n",
  FUNC_2(FUNC_3(&VAR_3->csio)[0], &VAR_5->inq_data),
  FUNC_1(FUNC_3(&VAR_3->csio), VAR_4, sizeof(VAR_4))));
}
