
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_type_t ;
struct TYPE_4__ {int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char const*,int,int ) ;

boolean_t
FUNC_3(libzfs_handle_t *VAR_2, const char *VAR_3, zfs_type_t VAR_4)
{
 zfs_handle_t *VAR_5;

 if (!FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0))
  return (VAR_0);




 if ((VAR_5 = FUNC_0(VAR_2, VAR_3)) != ((void*)0)) {
  int VAR_6 = VAR_5->zfs_type;

  FUNC_1(VAR_5);
  if (VAR_4 & VAR_6)
   return (VAR_1);
 }
 return (VAR_0);
}
