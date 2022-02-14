
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nid; char const* ln; } ;
struct TYPE_7__ {TYPE_1__* obj; int type; } ;
struct TYPE_6__ {int nid; char const* ln; } ;
typedef TYPE_1__ ASN1_OBJECT ;
typedef TYPE_2__ ADDED_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_5 ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 TYPE_3__* VAR_6 ;

const char *FUNC_2(int VAR_7)
{
    ADDED_OBJ VAR_8, *VAR_9;
    ASN1_OBJECT VAR_10;

    if ((VAR_7 >= 0) && (VAR_7 < VAR_2)) {
        if ((VAR_7 != VAR_1) && (VAR_6[VAR_7].nid == VAR_1)) {
            FUNC_0(VAR_3, VAR_4);
            return ((void*)0);
        }
        return VAR_6[VAR_7].ln;
    } else if (VAR_5 == ((void*)0))
        return ((void*)0);
    else {
        VAR_8.type = VAR_0;
        VAR_8.obj = &VAR_10;
        VAR_10.nid = VAR_7;
        VAR_9 = FUNC_1(VAR_5, &VAR_8);
        if (VAR_9 != ((void*)0))
            return VAR_9->obj->ln;
        else {
            FUNC_0(VAR_3, VAR_4);
            return ((void*)0);
        }
    }
}
