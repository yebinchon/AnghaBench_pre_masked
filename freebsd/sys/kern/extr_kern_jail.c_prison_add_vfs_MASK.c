
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsconf {int vfc_name; void* vfc_prison_flag; } ;


 int VAR_0 ;
 int FUNC_0 (char**,int ,char*,int ) ;
 int FUNC_1 (char*,int ) ;
 void* FUNC_2 (char*,int ,int *,char*) ;

void
FUNC_3(struct vfsconf *VAR_1)
{





 char *VAR_2;

 (void)FUNC_0(&VAR_2, VAR_0, "Jail may mount the %s file system",
     VAR_1->vfc_name);
 VAR_1->vfc_prison_flag = FUNC_2("mount", VAR_1->vfc_name,
     ((void*)0), VAR_2);
 FUNC_1(VAR_2, VAR_0);

}
