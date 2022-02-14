
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef int Hash_Entry ;
typedef TYPE_1__ GNode ;
typedef int Boolean ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*,int *) ;
 int * FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (char const*) ;
 int VAR_3 ;
 int FUNC_6 (char*,char const*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

GNode *
FUNC_7(const char *VAR_7, int VAR_8)
{
    GNode *VAR_9;
    Hash_Entry *VAR_10 = ((void*)0);
    Boolean VAR_11;


    if (!(VAR_8 & (VAR_1 | VAR_2))) {
 VAR_10 = FUNC_1(&VAR_6, VAR_7);
 if (VAR_10 == ((void*)0))
     return ((void*)0);
 return (GNode *)FUNC_2(VAR_10);
    }

    if (!(VAR_8 & VAR_2)) {
 VAR_10 = FUNC_0(&VAR_6, VAR_7, &VAR_11);
 if (!VAR_11)
     return (GNode *)FUNC_2(VAR_10);
    }

    VAR_9 = FUNC_5(VAR_7);
    if (!(VAR_8 & VAR_2))
 FUNC_3(VAR_10, VAR_9);
    FUNC_6(".ALLTARGETS", VAR_7, VAR_3);
    (void)FUNC_4(VAR_4, VAR_9);
    if (VAR_5)
 VAR_9->flags |= VAR_0;
    return VAR_9;
}
