
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {char* root_dir; int kmaps; } ;
typedef int modules_path ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct machine *VAR_1)
{
 char *VAR_2;
 char VAR_3[VAR_0];

 VAR_2 = FUNC_1(VAR_1->root_dir);
 if (!VAR_2)
  return -1;

 FUNC_3(VAR_3, sizeof(VAR_3), "%s/lib/modules/%s/kernel",
   VAR_1->root_dir, VAR_2);
 FUNC_0(VAR_2);

 return FUNC_2(&VAR_1->kmaps, VAR_3);
}
