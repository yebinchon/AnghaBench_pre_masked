
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_10__ {TYPE_2__* bdb; } ;
typedef TYPE_4__ base_fs_data_t ;
struct TYPE_8__ {TYPE_1__* error_info; } ;
struct TYPE_7__ {void (* user_callback ) (char const*,char*) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_t *VAR_2,
                     void (*VAR_3)(const char *VAR_4, char *VAR_5))
{
  base_fs_data_t *VAR_6 = VAR_2->fsap_data;

  FUNC_0(FUNC_1(VAR_2, VAR_1));
  VAR_6->bdb->error_info->user_callback = VAR_3;

  return VAR_0;
}
