
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spicds_info {int num; int format; int dvc; scalar_t__ cif; int type; void* devinfo; int ctrl; int dev; int name; int lock; } ;
typedef int spicds_ctrl ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,char*,char*,int) ;

struct spicds_info *
FUNC_5(device_t VAR_10, void *VAR_11, int VAR_12, spicds_ctrl VAR_13)
{
 struct spicds_info *VAR_14;




 VAR_14 = (struct spicds_info *)FUNC_2(sizeof *VAR_14, VAR_7, VAR_6);
 if (VAR_14 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_14->name, VAR_8, "%s:spicds%d", FUNC_0(VAR_10), VAR_12);
 VAR_14->lock = FUNC_3(VAR_14->name, VAR_14->name);
 VAR_14->dev = VAR_10;
 VAR_14->ctrl = VAR_13;
 VAR_14->devinfo = VAR_11;
 VAR_14->num = VAR_12;
 VAR_14->type = VAR_9;
 VAR_14->cif = 0;
 VAR_14->format = VAR_5 | VAR_4 | VAR_3;
 VAR_14->dvc = VAR_0 | VAR_2 | VAR_1;

 return VAR_14;
}
