
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {char* disk_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,int ,char*,char*,...) ;
 int FUNC_2 (char*) ;

char *FUNC_3(struct gendisk *VAR_1, int VAR_2, char *VAR_3)
{
 if (!VAR_2)
  FUNC_1(VAR_3, VAR_0, "%s", VAR_1->disk_name);
 else if (FUNC_0(VAR_1->disk_name[FUNC_2(VAR_1->disk_name)-1]))
  FUNC_1(VAR_3, VAR_0, "%sp%d", VAR_1->disk_name, VAR_2);
 else
  FUNC_1(VAR_3, VAR_0, "%s%d", VAR_1->disk_name, VAR_2);

 return VAR_3;
}
