
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int type; TYPE_1__* obj; } ;
struct TYPE_11__ {scalar_t__ length; int flags; int nid; int * ln; int * sn; int * data; } ;
typedef TYPE_1__ ASN1_OBJECT ;
typedef TYPE_2__ ADDED_OBJ ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;
 int * VAR_10 ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int *,TYPE_2__*) ;

int FUNC_7(const ASN1_OBJECT *VAR_11)
{
    ASN1_OBJECT *VAR_12;
    ADDED_OBJ *VAR_13[4] = { ((void*)0), ((void*)0), ((void*)0), ((void*)0) }, *VAR_14;
    int VAR_15;

    if (VAR_10 == ((void*)0))
        if (!FUNC_5())
            return 0;
    if ((VAR_12 = FUNC_1(VAR_11)) == ((void*)0))
        goto err;
    if ((VAR_13[VAR_2] = FUNC_4(sizeof(*VAR_13[0]))) == ((void*)0))
        goto err2;
    if ((VAR_12->length != 0) && (VAR_11->data != ((void*)0)))
        if ((VAR_13[VAR_0] = FUNC_4(sizeof(*VAR_13[0]))) == ((void*)0))
            goto err2;
    if (VAR_12->sn != ((void*)0))
        if ((VAR_13[VAR_3] = FUNC_4(sizeof(*VAR_13[0]))) == ((void*)0))
            goto err2;
    if (VAR_12->ln != ((void*)0))
        if ((VAR_13[VAR_1] = FUNC_4(sizeof(*VAR_13[0]))) == ((void*)0))
            goto err2;

    for (VAR_15 = VAR_0; VAR_15 <= VAR_2; VAR_15++) {
        if (VAR_13[VAR_15] != ((void*)0)) {
            VAR_13[VAR_15]->type = VAR_15;
            VAR_13[VAR_15]->obj = VAR_12;
            VAR_14 = FUNC_6(VAR_10, VAR_13[VAR_15]);

            FUNC_3(VAR_14);
        }
    }
    VAR_12->flags &=
        ~(VAR_4 | VAR_6 |
          VAR_5);

    return VAR_12->nid;
 err2:
    FUNC_2(VAR_9, VAR_7);
 err:
    for (VAR_15 = VAR_0; VAR_15 <= VAR_2; VAR_15++)
        FUNC_3(VAR_13[VAR_15]);
    FUNC_0(VAR_12);
    return VAR_8;
}
