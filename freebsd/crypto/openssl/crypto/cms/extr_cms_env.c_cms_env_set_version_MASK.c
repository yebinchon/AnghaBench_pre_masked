
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int version; scalar_t__ unprotectedAttrs; scalar_t__ originatorInfo; int recipientInfos; } ;
struct TYPE_9__ {TYPE_1__* ktri; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_8__ {scalar_t__ version; } ;
typedef TYPE_3__ CMS_RecipientInfo ;
typedef TYPE_4__ CMS_EnvelopedData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(CMS_EnvelopedData *VAR_3)
{
    int VAR_4;
    CMS_RecipientInfo *VAR_5;




    if (VAR_3->version >= 4)
        return;

    FUNC_0(VAR_3);

    if (VAR_3->version >= 3)
        return;

    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3->recipientInfos); VAR_4++) {
        VAR_5 = FUNC_2(VAR_3->recipientInfos, VAR_4);
        if (VAR_5->type == VAR_1 || VAR_5->type == VAR_0) {
            VAR_3->version = 3;
            return;
        } else if (VAR_5->type != VAR_2
                   || VAR_5->d.ktri->version != 0) {
            VAR_3->version = 2;
        }
    }
    if (VAR_3->originatorInfo || VAR_3->unprotectedAttrs)
        VAR_3->version = 2;
    if (VAR_3->version == 2)
        return;
    VAR_3->version = 0;
}
