
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_cookie; int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_3, nvlist_t *VAR_4, cred_t *VAR_5)
{
 char *VAR_6 = ((void*)0);
 char *VAR_7;
 int VAR_8;

 if ((VAR_7 = FUNC_0(VAR_3->zc_name, '#')) != ((void*)0)) {
  *VAR_7 = '\0';
  VAR_8 = FUNC_2(VAR_3->zc_name,
      VAR_2, VAR_5);
  if (VAR_8 == 0) {
   VAR_8 = FUNC_2(VAR_3->zc_name,
       VAR_1, VAR_5);
  }
  *VAR_7 = '#';
  return (VAR_8);
 }

 if ((VAR_3->zc_cookie & 1) != 0) {




  VAR_6 = FUNC_0(VAR_3->zc_name, '@');
  if (VAR_6 == ((void*)0))
   return (VAR_0);
  *VAR_6 = '\0';
 }

 VAR_8 = FUNC_1(VAR_3->zc_name, VAR_3->zc_value, VAR_5);

 if (VAR_6 != ((void*)0))
  *VAR_6 = '@';

 return (VAR_8);
}
