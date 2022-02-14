
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int type; int children; } ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*,TYPE_1__*,int ) ;
 char* FUNC_3 (int ,TYPE_1__*,char**) ;
 int FUNC_4 (char*) ;

void
FUNC_5(GNode *VAR_7)
{
    if (VAR_7->flags & VAR_1)
 return;

    FUNC_0(VAR_7->children, VAR_3, VAR_7);
    FUNC_0(VAR_7->children, VAR_2, VAR_7);

    if (!FUNC_1 (VAR_4, VAR_7)) {
 FUNC_2(VAR_4, "", VAR_7, 0);
    }
    if (!FUNC_1 (VAR_0, VAR_7)) {
 FUNC_2(VAR_0, "", VAR_7, 0);
    }

    if (VAR_7->type & VAR_5) {
 char *VAR_8;
 FUNC_2(VAR_6, FUNC_3(VAR_0, VAR_7, &VAR_8), VAR_7, 0);
 FUNC_4(VAR_8);
    }
    VAR_7->flags |= VAR_1;
}
