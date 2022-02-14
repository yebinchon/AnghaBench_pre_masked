
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char const*,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ,char const*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__*) ;

zpool_handle_t *
FUNC_8(libzfs_handle_t *VAR_4, const char *VAR_5)
{
 zpool_handle_t *VAR_6;
 boolean_t VAR_7;




 if (!FUNC_6(VAR_4, VAR_0, VAR_5)) {
  (void) FUNC_4(VAR_4, VAR_1,
      FUNC_0(VAR_3, "cannot open '%s'"),
      VAR_5);
  return (((void*)0));
 }

 if ((VAR_6 = FUNC_2(VAR_4, sizeof (zpool_handle_t))) == ((void*)0))
  return (((void*)0));

 VAR_6->zpool_hdl = VAR_4;
 (void) FUNC_1(VAR_6->zpool_name, VAR_5, sizeof (VAR_6->zpool_name));

 if (FUNC_7(VAR_6, &VAR_7) != 0) {
  FUNC_5(VAR_6);
  return (((void*)0));
 }

 if (VAR_7) {
  FUNC_3(VAR_4, FUNC_0(VAR_3, "no such pool"));
  (void) FUNC_4(VAR_4, VAR_2,
      FUNC_0(VAR_3, "cannot open '%s'"), VAR_5);
  FUNC_5(VAR_6);
  return (((void*)0));
 }

 return (VAR_6);
}
