
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vnode_t ;
struct TYPE_3__ {char* scd_path; } ;
typedef TYPE_1__ spa_config_dirent_t ;
typedef int nvlist_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int,int,int ,int ,int *) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 char* FUNC_2 (int *,size_t*) ;
 int FUNC_3 (char*,size_t) ;
 int VAR_12 ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,char*,char*) ;
 int FUNC_7 (char*,int ,int,int,int **,int ,int ) ;
 int FUNC_8 (int ,int *,char*,size_t,int ,int ,int ,int ,int ,int *) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_11(spa_config_dirent_t *VAR_13, nvlist_t *VAR_14)
{
 size_t VAR_15;
 char *VAR_16;
 vnode_t *VAR_17;
 int VAR_18 = VAR_5 | VAR_4 | VAR_1 | VAR_2;
 char *VAR_19;
 int VAR_20;




 if (VAR_14 == ((void*)0)) {
  VAR_20 = FUNC_9(VAR_13->scd_path, VAR_10, VAR_9);
  return (VAR_20);
 }




 VAR_16 = FUNC_2(VAR_14, &VAR_15);
 VAR_19 = FUNC_5(VAR_7, VAR_6);






 (void) FUNC_6(VAR_19, VAR_7, "%s.tmp", VAR_13->scd_path);

 VAR_20 = FUNC_7(VAR_19, VAR_10, VAR_18, 0644, &VAR_17, VAR_0, 0);
 if (VAR_20 == 0) {
  VAR_20 = FUNC_8(VAR_11, VAR_17, VAR_16, VAR_15, 0, VAR_10,
      0, VAR_8, VAR_12, ((void*)0));
  if (VAR_20 == 0)
   VAR_20 = FUNC_1(VAR_17, VAR_3, VAR_12, ((void*)0));
  if (VAR_20 == 0)
   VAR_20 = FUNC_10(VAR_19, VAR_13->scd_path, VAR_10);
  (void) FUNC_0(VAR_17, VAR_18, 1, 0, VAR_12, ((void*)0));
 }

 (void) FUNC_9(VAR_19, VAR_10, VAR_9);

 FUNC_3(VAR_16, VAR_15);
 FUNC_4(VAR_19, VAR_7);
 return (VAR_20);
}
