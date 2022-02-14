
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; size_t used; int * line; } ;
typedef TYPE_1__ serf_linebuf_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char const*,int) ;
 scalar_t__ FUNC_3 (int *,char const**,int*) ;
 int FUNC_4 (int *,int,char const**,int*) ;
 scalar_t__ FUNC_5 (int *,int,int*,char const**,int*) ;

apr_status_t FUNC_6(
    serf_linebuf_t *VAR_9,
    serf_bucket_t *VAR_10,
    int VAR_11)
{



    if (VAR_9->state == VAR_5) {
        VAR_9->state = VAR_3;




        VAR_9->used = 0;
    }

    while (1) {
        apr_status_t VAR_12;
        const char *VAR_13;
        apr_size_t VAR_14;

        if (VAR_9->state == VAR_2) {






            VAR_12 = FUNC_3(VAR_10, &VAR_13, &VAR_14);
            if (FUNC_1(VAR_12))
                return VAR_12;

            if (VAR_14 > 0) {
                if (*VAR_13 == '\n') {





                    (void) FUNC_4(VAR_10, 1, &VAR_13, &VAR_14);
                }
                VAR_9->state = VAR_5;
            } else {

                return VAR_0;
            }
        }
        else {
            int VAR_15;

            VAR_12 = FUNC_5(VAR_10, VAR_11, &VAR_15,
                                          &VAR_13, &VAR_14);
            if (FUNC_1(VAR_12)) {
                return VAR_12;
            }



            if (FUNC_0(VAR_12) && VAR_14 == 0) {
         return VAR_12;
            }
            if (VAR_9->used + VAR_14 > sizeof(VAR_9->line)) {

                return VAR_1;
            }
            if (VAR_15 == VAR_8) {
                VAR_9->state = VAR_4;
            }
            else if (VAR_15 == VAR_7) {
                VAR_9->state = VAR_2;


                --VAR_14;
            }
            else {




                VAR_14 -= 1 + (VAR_15 == VAR_6);

                VAR_9->state = VAR_5;
            }




            FUNC_2(&VAR_9->line[VAR_9->used], VAR_13, VAR_14);
            VAR_9->used += VAR_14;
        }





        if (VAR_12 || VAR_9->state == VAR_5)
            return VAR_12;




    }

}
