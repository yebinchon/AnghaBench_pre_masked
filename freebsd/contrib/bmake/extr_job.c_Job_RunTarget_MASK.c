
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ made; } ;
typedef TYPE_1__ GNode ;
typedef int Boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ,char const*,TYPE_1__*,int ) ;
 int FUNC_4 (int) ;

Boolean
FUNC_5(const char *VAR_5, const char *VAR_6) {
    GNode *VAR_7 = FUNC_2(VAR_5, VAR_3);

    if (VAR_7 == ((void*)0))
 return VAR_2;

    if (VAR_6)
 FUNC_3(VAR_0, VAR_6, VAR_7, 0);

    FUNC_0(VAR_7);
    if (VAR_7->made == VAR_1) {
 FUNC_1(VAR_7, "\n\nStop.");
 FUNC_4(1);
    }
    return VAR_4;
}
