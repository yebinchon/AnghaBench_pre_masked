
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct omfs_sb_info {int s_uid; int s_gid; int s_fmask; int s_dmask; } ;


 int VAR_0 ;





 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (char*,int ,int *) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(char *VAR_2, struct omfs_sb_info *VAR_3)
{
 char *VAR_4;
 substring_t VAR_5[VAR_0];
 int VAR_6;

 if (!VAR_2)
  return 1;

 while ((VAR_4 = FUNC_3(&VAR_2, ",")) != ((void*)0)) {
  int VAR_7;
  if (!*VAR_4)
   continue;

  VAR_7 = FUNC_2(VAR_4, VAR_1, VAR_5);
  switch (VAR_7) {
  case 129:
   if (FUNC_0(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_uid = VAR_6;
   break;
  case 130:
   if (FUNC_0(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_gid = VAR_6;
   break;
  case 128:
   if (FUNC_1(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_fmask = VAR_3->s_dmask = VAR_6;
   break;
  case 132:
   if (FUNC_1(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_dmask = VAR_6;
   break;
  case 131:
   if (FUNC_1(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->s_fmask = VAR_6;
   break;
  default:
   return 0;
  }
 }
 return 1;
}
