
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int struct_stat ;
typedef scalar_t__ apr_status_t ;
typedef int apr_int32_t ;
struct TYPE_7__ {int valid; int fname; int pool; } ;
typedef TYPE_1__ apr_finfo_t ;
struct TYPE_8__ {int fname; int pool; int filedes; scalar_t__ buffered; } ;
typedef TYPE_2__ apr_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

apr_status_t FUNC_3(apr_finfo_t *VAR_3, apr_int32_t VAR_4,
                                      apr_file_t *VAR_5)
{
    struct_stat VAR_6;

    if (VAR_5->buffered) {
        apr_status_t VAR_7 = FUNC_0(VAR_5);
        if (VAR_7 != VAR_1)
            return VAR_7;
    }

    if (FUNC_2(VAR_5->filedes, &VAR_6) == 0) {
        VAR_3->pool = VAR_5->pool;
        VAR_3->fname = VAR_5->fname;
        FUNC_1(VAR_3, &VAR_6, VAR_4);
        return (VAR_4 & ~VAR_3->valid) ? VAR_0 : VAR_1;
    }
    else {
        return VAR_2;
    }
}
