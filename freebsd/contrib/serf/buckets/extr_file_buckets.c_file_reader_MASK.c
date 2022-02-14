
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; } ;
typedef TYPE_1__ file_context_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ,char*,int *) ;

__attribute__((used)) static apr_status_t FUNC_1(void *VAR_0, apr_size_t VAR_1,
                                char *VAR_2, apr_size_t *VAR_3)
{
    file_context_t *VAR_4 = VAR_0;

    *VAR_3 = VAR_1;
    return FUNC_0(VAR_4->file, VAR_2, VAR_3);
}
