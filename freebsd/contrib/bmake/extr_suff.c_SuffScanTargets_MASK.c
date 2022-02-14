
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int type; char* name; int children; } ;
struct TYPE_11__ {TYPE_4__** gn; scalar_t__ r; TYPE_1__* s; } ;
struct TYPE_10__ {char* name; int parents; int children; } ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ Suff ;
typedef TYPE_3__ GNodeSuff ;
typedef TYPE_4__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (char*,TYPE_2__**,TYPE_2__**) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,char*,char*) ;
 char* FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_6, void *VAR_7)
{
    GNode *VAR_8 = (GNode *)VAR_6;
    GNodeSuff *VAR_9 = (GNodeSuff *)VAR_7;
    Suff *VAR_10, *VAR_11;
    char *VAR_12;

    if (*VAR_9->gn == ((void*)0) && VAR_9->r && (VAR_8->type & VAR_1) == 0) {
 *VAR_9->gn = VAR_8;
 FUNC_5(VAR_8);
 return 1;
    }

    if ((unsigned int)VAR_8->type == VAR_2)
 return 0;

    if ((VAR_12 = FUNC_7(VAR_8->name, VAR_9->s->name)) == ((void*)0) ||
 VAR_12 == VAR_8->name)
 return 0;

    if (FUNC_4(VAR_8->name, &VAR_10, &VAR_11)) {
 if (*VAR_9->gn == VAR_8) {
     VAR_9->r = VAR_4;
     *VAR_9->gn = ((void*)0);
     FUNC_5(((void*)0));
 }
 FUNC_1(VAR_8->children, ((void*)0));
 VAR_8->children = FUNC_2(VAR_0);
 VAR_8->type = VAR_2;



 if (FUNC_0(VAR_3)) {
     FUNC_6(VAR_5, "defining transformation from `%s' to `%s'\n",
  VAR_10->name, VAR_11->name);
 }
 FUNC_3(VAR_11->children, VAR_10);
 FUNC_3(VAR_10->parents, VAR_11);
    }
    return 0;
}
