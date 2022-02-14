
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zc_cookie; int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ offset_t ;
struct TYPE_8__ {scalar_t__ f_offset; struct TYPE_8__* f_vnode; } ;
typedef TYPE_2__ file_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_2__*,scalar_t__*) ;
 int FUNC_2 (int ,int ,int *,TYPE_2__**) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_4)
{
 file_t *VAR_5;
 offset_t VAR_6;
 int VAR_7;




 FUNC_2(VAR_3, VAR_4->zc_cookie, &VAR_2, &VAR_5);

 if (VAR_5 == ((void*)0))
  return (FUNC_0(VAR_0));

 VAR_6 = VAR_5->f_offset;




 VAR_7 = FUNC_1(VAR_4->zc_name, VAR_4->zc_value, VAR_5, &VAR_6);


 if (VAR_6 >= 0 && VAR_6 <= VAR_1)
  VAR_5->f_offset = VAR_6;
 FUNC_4(VAR_4->zc_cookie);

 return (VAR_7);
}
