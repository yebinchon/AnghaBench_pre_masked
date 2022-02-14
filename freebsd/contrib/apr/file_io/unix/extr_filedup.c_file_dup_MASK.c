
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int flags; int filedes; int * pollset; int * pool; int ungetchar; int blocking; int bufsize; scalar_t__ buffer; scalar_t__ buffered; scalar_t__ thlock; int fname; } ;
typedef TYPE_1__ apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__*,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int,int) ;
 int VAR_11 ;
 int FUNC_8 (int,int ,...) ;

__attribute__((used)) static apr_status_t FUNC_9(apr_file_t **VAR_12,
                             apr_file_t *VAR_13, apr_pool_t *VAR_14,
                             int VAR_15)
{
    int VAR_16;




    if (VAR_15 == 2) {
        if ((*VAR_12) == ((void*)0)) {

            return VAR_0;
        }





        VAR_16 = FUNC_6(VAR_13->filedes, (*VAR_12)->filedes);
        if (!((*VAR_12)->flags & (VAR_1|VAR_2))) {
            int VAR_17;

            if (VAR_16 == -1)
                return VAR_11;

            if ((VAR_17 = FUNC_8((*VAR_12)->filedes, VAR_6)) == -1)
                return VAR_11;

            VAR_17 |= VAR_5;
            if (FUNC_8((*VAR_12)->filedes, VAR_7, VAR_17) == -1)
                return VAR_11;

        }

    } else {
        VAR_16 = FUNC_5(VAR_13->filedes);
    }

    if (VAR_16 == -1)
        return VAR_11;

    if (VAR_15 == 1) {
        (*VAR_12) = (apr_file_t *)FUNC_1(VAR_14, sizeof(apr_file_t));
        (*VAR_12)->pool = VAR_14;
        (*VAR_12)->filedes = VAR_16;
    }

    (*VAR_12)->fname = FUNC_3(VAR_14, VAR_13->fname);
    (*VAR_12)->buffered = VAR_13->buffered;
    if ((*VAR_12)->buffered && !(*VAR_12)->buffer) {
        (*VAR_12)->buffer = FUNC_0(VAR_14, VAR_13->bufsize);
        (*VAR_12)->bufsize = VAR_13->bufsize;
    }


    (*VAR_12)->blocking = VAR_13->blocking;


    (*VAR_12)->ungetchar = VAR_13->ungetchar;







    if (VAR_15 == 2) {
        return VAR_3;
    }






    (*VAR_12)->flags = VAR_13->flags
                       & ~(VAR_2 | VAR_1);

    FUNC_2((*VAR_12)->pool, (void *)(*VAR_12),
                              VAR_10,
                              VAR_9);




    (*VAR_12)->pollset = ((void*)0);

    return VAR_3;
}
