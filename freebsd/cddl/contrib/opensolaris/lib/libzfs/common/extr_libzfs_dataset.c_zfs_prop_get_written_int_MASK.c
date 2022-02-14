
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* zfs_name; TYPE_1__* zfs_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_8__ {char const* zc_name; char const* zc_value; int zc_cookie; int member_0; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef int uint64_t ;
struct TYPE_6__ {int libzfs_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 void* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (char const*,char const*,int) ;

int
FUNC_4(zfs_handle_t *VAR_1, const char *VAR_2,
    uint64_t *VAR_3)
{
 int VAR_4;
 zfs_cmd_t VAR_5 = { 0 };
 const char *VAR_6;

 (void) FUNC_3(VAR_5.zc_name, VAR_1->zfs_name, sizeof (VAR_5.zc_name));

 VAR_6 = FUNC_1(VAR_2, '@') + 1;
 if (FUNC_1(VAR_6, '@')) {
  (void) FUNC_3(VAR_5.zc_value, VAR_6, sizeof (VAR_5.zc_value));
 } else {

  char *VAR_7;

  (void) FUNC_3(VAR_5.zc_value, VAR_1->zfs_name,
      sizeof (VAR_5.zc_value));
  VAR_7 = FUNC_1(VAR_5.zc_value, '@');
  if (VAR_7 != ((void*)0))
   *VAR_7 = '\0';
  (void) FUNC_2(VAR_5.zc_value, "@", sizeof (VAR_5.zc_value));
  (void) FUNC_2(VAR_5.zc_value, VAR_6, sizeof (VAR_5.zc_value));
 }

 VAR_4 = FUNC_0(VAR_1->zfs_hdl->libzfs_fd, VAR_0, &VAR_5);
 if (VAR_4)
  return (VAR_4);

 *VAR_3 = VAR_5.zc_cookie;
 return (0);
}
