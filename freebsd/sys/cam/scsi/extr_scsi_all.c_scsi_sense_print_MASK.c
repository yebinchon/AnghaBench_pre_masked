
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ccb_scsiio {int dummy; } ;
struct cam_device {int dummy; } ;
typedef int str ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 char* FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*,char*,int,int ) ;
 int FUNC_4 (struct cam_device*,struct ccb_scsiio*,struct sbuf*,int ) ;

void
FUNC_5(struct cam_device *VAR_1, struct ccb_scsiio *VAR_2,
   FILE *VAR_3)
{
 struct sbuf VAR_4;
 char VAR_5[512];

 if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
  return;

 FUNC_3(&VAR_4, VAR_5, sizeof(VAR_5), 0);

 FUNC_4(VAR_1, VAR_2, &VAR_4, VAR_0);

 FUNC_2(&VAR_4);

 FUNC_0(VAR_3, "%s", FUNC_1(&VAR_4));
}
