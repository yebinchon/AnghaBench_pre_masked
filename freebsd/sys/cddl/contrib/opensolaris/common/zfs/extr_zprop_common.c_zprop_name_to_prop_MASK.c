
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_type_t ;
struct TYPE_3__ {char const* propname; int prop_tbl; } ;
typedef TYPE_1__ name_to_prop_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int ,int ) ;
 int VAR_4 ;

int
FUNC_2(const char *VAR_5, zfs_type_t VAR_6)
{
 int VAR_7;
 name_to_prop_cb_t VAR_8;

 VAR_8.propname = VAR_5;
 VAR_8.prop_tbl = FUNC_0(VAR_6);

 VAR_7 = FUNC_1(VAR_4, &VAR_8,
     VAR_1, VAR_0, VAR_6);

 return (VAR_7 == VAR_2 ? VAR_3 : VAR_7);
}
