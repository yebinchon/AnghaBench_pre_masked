
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zprop_source_t ;
struct TYPE_4__ {scalar_t__ zc_nvlist_dst; int zc_name; int zc_iflags; int zc_nvlist_src_size; int zc_nvlist_src; scalar_t__ zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int ,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_8(zfs_cmd_t *VAR_2)
{
 nvlist_t *VAR_3;
 boolean_t VAR_4 = VAR_2->zc_cookie;
 zprop_source_t VAR_5 = (VAR_4 ? VAR_1 :
     VAR_0);
 nvlist_t *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_4(VAR_2->zc_nvlist_src, VAR_2->zc_nvlist_src_size,
     VAR_2->zc_iflags, &VAR_3)) != 0)
  return (VAR_7);

 if (VAR_4) {
  nvlist_t *VAR_8;

  if (FUNC_1(VAR_2->zc_name, &VAR_8) == 0) {
   (void) FUNC_0(VAR_2->zc_name,
       VAR_8, VAR_3);
   FUNC_5(VAR_8);
  }

  VAR_7 = FUNC_2(VAR_2->zc_name);
 }

 VAR_6 = FUNC_3();
 if (VAR_7 == 0)
  VAR_7 = FUNC_7(VAR_2->zc_name, VAR_5, VAR_3, VAR_6);

 if (VAR_2->zc_nvlist_dst != 0 && VAR_6 != ((void*)0)) {
  (void) FUNC_6(VAR_2, VAR_6);
 }

 FUNC_5(VAR_6);
 FUNC_5(VAR_3);
 return (VAR_7);
}
