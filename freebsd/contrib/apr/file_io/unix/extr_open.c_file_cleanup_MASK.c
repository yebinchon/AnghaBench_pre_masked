
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ apr_status_t ;
struct TYPE_3__ {int filedes; int flags; int * pollset; scalar_t__ thlock; int fname; } ;
typedef TYPE_1__ apr_file_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static apr_status_t FUNC_4(apr_file_t *VAR_3, int VAR_4)
{
    apr_status_t VAR_5 = VAR_1;
    int VAR_6 = VAR_3->filedes;




    VAR_3->filedes = -1;

    if (FUNC_2(VAR_6) == 0) {

        if (!VAR_4 && (VAR_3->flags & VAR_0)) {
            FUNC_3(VAR_3->fname);
        }





    }
    else {

        VAR_3->filedes = VAR_6;


        VAR_5 = VAR_2;
    }

    if (VAR_3->pollset != ((void*)0)) {
        apr_status_t VAR_7 = FUNC_0(VAR_3->pollset);



        if (VAR_5 == VAR_1) {
            VAR_5 = VAR_7;
        }
    }

    return VAR_5;
}
