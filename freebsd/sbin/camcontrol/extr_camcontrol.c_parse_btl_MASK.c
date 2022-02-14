
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* target_id_t ;
typedef void* path_id_t ;
typedef int lun_id_t ;
typedef int cam_argmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,void**,void**,int *,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int ) ;
 char* FUNC_5 (char**,char*) ;
 void* FUNC_6 (char*,char**,int ) ;
 int FUNC_7 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_8(char *VAR_7, path_id_t *VAR_8, target_id_t *VAR_9, lun_id_t *VAR_10,
    cam_argmask *VAR_11)
{
 char *VAR_12, *VAR_13;
 int VAR_14 = 0;

 *VAR_8 = VAR_3;
 *VAR_9 = VAR_5;
 *VAR_10 = VAR_4;

 while (FUNC_1(*VAR_7) && (*VAR_7 != '\0'))
  VAR_7++;

 if (FUNC_4(VAR_7, "all", FUNC_3("all")) == 0) {
  VAR_6 |= VAR_0;
  return (1);
 }

 if (!FUNC_0(*VAR_7))
  return (FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11));

 VAR_12 = FUNC_5(&VAR_7, ":");
 if ((VAR_12 != ((void*)0)) && (*VAR_12 != '\0')) {
  *VAR_8 = FUNC_6(VAR_12, &VAR_13, 0);
  if (*VAR_13 != '\0')
   return (0);
  *VAR_11 |= VAR_0;
  VAR_14++;
  VAR_12 = FUNC_5(&VAR_7, ":");
  if ((VAR_12 != ((void*)0)) && (*VAR_12 != '\0')) {
   *VAR_9 = FUNC_6(VAR_12, &VAR_13, 0);
   if (*VAR_13 != '\0')
    return (0);
   *VAR_11 |= VAR_2;
   VAR_14++;
   VAR_12 = FUNC_5(&VAR_7, ":");
   if ((VAR_12 != ((void*)0)) && (*VAR_12 != '\0')) {
    *VAR_10 = FUNC_7(VAR_12, &VAR_13, 0);
    if (*VAR_13 != '\0')
     return (0);
    *VAR_11 |= VAR_1;
    VAR_14++;
   }
  }
 }

 return VAR_14;
}
