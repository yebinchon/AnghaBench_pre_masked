
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_3__ {char const* ddra_fsname; char const* ddra_tosnap; int * ddra_result; void* ddra_owner; } ;
typedef TYPE_1__ dsl_dataset_rollback_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*,int,int ) ;

int
FUNC_1(const char *VAR_3, const char *VAR_4, void *VAR_5,
    nvlist_t *VAR_6)
{
 dsl_dataset_rollback_arg_t VAR_7;

 VAR_7.ddra_fsname = VAR_3;
 VAR_7.ddra_tosnap = VAR_4;
 VAR_7.ddra_owner = VAR_5;
 VAR_7.ddra_result = VAR_6;

 return (FUNC_0(VAR_3, VAR_1,
     VAR_2, &VAR_7,
     1, VAR_0));
}
