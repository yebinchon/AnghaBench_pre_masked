
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_9__ {int flags; int * pagf; int * dirf; int * pool; } ;
typedef TYPE_1__ apr_sdbm_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_fileperms_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*,int,int ,int *) ;
 int VAR_9 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static apr_status_t FUNC_8(apr_sdbm_t **VAR_11, const char *VAR_12, const char *VAR_13,
                         apr_int32_t VAR_14, apr_fileperms_t VAR_15, apr_pool_t *VAR_16)
{
    apr_sdbm_t *VAR_17;
    apr_status_t VAR_18;

    *VAR_11 = ((void*)0);

    VAR_17 = FUNC_6(sizeof(*VAR_17));
    FUNC_7(VAR_17, 0, sizeof(*VAR_17));

    VAR_17->pool = VAR_16;






    if (!(VAR_14 & VAR_5)) {
        VAR_17->flags |= VAR_7;
    }







    if (VAR_14 & VAR_4) {
        VAR_17->flags |= VAR_8;
        VAR_14 &= ~VAR_4;
    }

    VAR_14 |= VAR_2 | VAR_3;






    if ((VAR_18 = FUNC_1(&VAR_17->dirf, VAR_12, VAR_14, VAR_15, VAR_16))
                != VAR_6)
        goto error;

    if ((VAR_18 = FUNC_1(&VAR_17->pagf, VAR_13, VAR_14, VAR_15, VAR_16))
                != VAR_6)
        goto error;

    if ((VAR_18 = FUNC_3(VAR_17, (VAR_17->flags & VAR_7)
                                        ? VAR_1
                                        : VAR_0))
                != VAR_6)
        goto error;
    if (VAR_17->flags & VAR_8)
        if ((VAR_18 = FUNC_4(VAR_17)) != VAR_6)
            goto error;


    FUNC_2(VAR_16, VAR_17, VAR_10, VAR_9);


    *VAR_11 = VAR_17;
    return VAR_6;

error:
    if (VAR_17->dirf && VAR_17->pagf)
        (void) FUNC_4(VAR_17);
    if (VAR_17->dirf != ((void*)0))
        (void) FUNC_0(VAR_17->dirf);
    if (VAR_17->pagf != ((void*)0)) {
        (void) FUNC_0(VAR_17->pagf);
    }
    FUNC_5(VAR_17);
    return VAR_18;
}
