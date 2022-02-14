
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nid; int flags; } ;
struct TYPE_7__ {int unsignedAttrs; int signedAttrs; } ;
typedef TYPE_1__ CMS_SignerInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int,int,int ,int ,int) ;

int FUNC_5(const CMS_SignerInfo *VAR_5)
{
    int VAR_6;
    int VAR_7 = (FUNC_0(VAR_5) > 0);
    int VAR_8 = (FUNC_1(VAR_5) > 0);

    for (VAR_6 = 0; VAR_6 < (int)FUNC_3(VAR_4); ++VAR_6) {
        int VAR_9 = VAR_4[VAR_6].nid;
        int VAR_10 = VAR_4[VAR_6].flags;

        if (!FUNC_4(VAR_9, VAR_10, VAR_0,
                                 VAR_5->signedAttrs, VAR_7)
            || !FUNC_4(VAR_9, VAR_10, VAR_1,
                                    VAR_5->unsignedAttrs, VAR_8)) {
            FUNC_2(VAR_2, VAR_3);
            return 0;
        }
    }
    return 1;
}
