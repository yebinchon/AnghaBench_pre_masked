
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nid; } ;
struct TYPE_9__ {TYPE_1__* obj; int type; } ;
struct TYPE_8__ {scalar_t__ nid; scalar_t__ length; } ;
typedef TYPE_1__ ASN1_OBJECT ;
typedef TYPE_2__ ADDED_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* FUNC_0 (TYPE_1__ const**,int ,int ) ;
 int * VAR_3 ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;

int FUNC_2(const ASN1_OBJECT *VAR_6)
{
    const unsigned int *VAR_7;
    ADDED_OBJ VAR_8, *VAR_9;

    if (VAR_6 == ((void*)0))
        return VAR_1;
    if (VAR_6->nid != 0)
        return VAR_6->nid;

    if (VAR_6->length == 0)
        return VAR_1;

    if (VAR_3 != ((void*)0)) {
        VAR_8.type = VAR_0;
        VAR_8.obj = (ASN1_OBJECT *)VAR_6;
        VAR_9 = FUNC_1(VAR_3, &VAR_8);
        if (VAR_9 != ((void*)0))
            return VAR_9->obj->nid;
    }
    VAR_7 = FUNC_0(&VAR_6, VAR_5, VAR_2);
    if (VAR_7 == ((void*)0))
        return VAR_1;
    return VAR_4[*VAR_7].nid;
}
