
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_2__ {int dirstruct; } ;
typedef TYPE_1__ apr_dir_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static apr_status_t FUNC_1(void *VAR_2)
{
    apr_dir_t *VAR_3 = VAR_2;
    if (FUNC_0(VAR_3->dirstruct) == 0) {
        return VAR_0;
    }
    else {
        return VAR_1;
    }
}
