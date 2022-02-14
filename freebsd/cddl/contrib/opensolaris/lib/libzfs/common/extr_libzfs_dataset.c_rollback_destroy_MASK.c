
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {scalar_t__ cb_create; int cb_error; } ;
typedef TYPE_1__ rollback_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_3, void *VAR_4)
{
 rollback_data_t *VAR_5 = VAR_4;

 if (FUNC_3(VAR_3, VAR_1) > VAR_5->cb_create) {
  VAR_5->cb_error |= FUNC_2(VAR_3, VAR_0,
      VAR_2, VAR_5);

  VAR_5->cb_error |= FUNC_1(VAR_3, VAR_0);
 }

 FUNC_0(VAR_3);
 return (0);
}
