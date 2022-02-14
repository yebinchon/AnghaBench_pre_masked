
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int contentType; } ;
typedef TYPE_1__ CMS_ContentInfo ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

CMS_ContentInfo *FUNC_3(void)
{
    CMS_ContentInfo *VAR_1;
    VAR_1 = FUNC_0();
    if (VAR_1 != ((void*)0)) {
        VAR_1->contentType = FUNC_2(VAR_0);

        FUNC_1(VAR_1, 0);
    }
    return VAR_1;
}
