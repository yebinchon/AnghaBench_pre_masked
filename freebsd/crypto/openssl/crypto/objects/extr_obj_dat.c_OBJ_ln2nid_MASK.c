
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nid; } ;
struct TYPE_8__ {TYPE_1__* obj; int type; } ;
struct TYPE_7__ {char const* ln; int nid; } ;
typedef TYPE_1__ ASN1_OBJECT ;
typedef TYPE_2__ ADDED_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* FUNC_0 (TYPE_1__ const**,int ,int ) ;
 int * VAR_3 ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;

int FUNC_2(const char *VAR_6)
{
    ASN1_OBJECT VAR_7;
    const ASN1_OBJECT *VAR_8 = &VAR_7;
    ADDED_OBJ VAR_9, *VAR_10;
    const unsigned int *VAR_11;

    VAR_7.ln = VAR_6;
    if (VAR_3 != ((void*)0)) {
        VAR_9.type = VAR_0;
        VAR_9.obj = &VAR_7;
        VAR_10 = FUNC_1(VAR_3, &VAR_9);
        if (VAR_10 != ((void*)0))
            return VAR_10->obj->nid;
    }
    VAR_11 = FUNC_0(&VAR_8, VAR_4, VAR_2);
    if (VAR_11 == ((void*)0))
        return VAR_1;
    return VAR_5[*VAR_11].nid;
}
