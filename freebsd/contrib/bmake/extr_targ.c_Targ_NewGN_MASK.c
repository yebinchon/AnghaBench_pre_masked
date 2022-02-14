
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * fname; scalar_t__ lineno; int * suffix; void* commands; int context; void* order_succ; void* order_pred; void* children; void* parents; void* cohorts; void* iParents; int * cmgn; scalar_t__ mtime; scalar_t__ checked; scalar_t__ flags; int made; int * centurion; scalar_t__* cohort_num; scalar_t__ unmade_cohorts; scalar_t__ unmade; scalar_t__ type; int * path; int * uname; int name; } ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 void* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

GNode *
FUNC_5(const char *VAR_4)
{
    GNode *VAR_5;

    VAR_5 = FUNC_3(sizeof(GNode));
    VAR_5->name = FUNC_4(VAR_4);
    VAR_5->uname = ((void*)0);
    VAR_5->path = ((void*)0);
    if (VAR_4[0] == '-' && VAR_4[1] == 'l') {
 VAR_5->type = VAR_1;
    } else {
 VAR_5->type = 0;
    }
    VAR_5->unmade = 0;
    VAR_5->unmade_cohorts = 0;
    VAR_5->cohort_num[0] = 0;
    VAR_5->centurion = ((void*)0);
    VAR_5->made = VAR_2;
    VAR_5->flags = 0;
    VAR_5->checked = 0;
    VAR_5->mtime = 0;
    VAR_5->cmgn = ((void*)0);
    VAR_5->iParents = FUNC_2(VAR_0);
    VAR_5->cohorts = FUNC_2(VAR_0);
    VAR_5->parents = FUNC_2(VAR_0);
    VAR_5->children = FUNC_2(VAR_0);
    VAR_5->order_pred = FUNC_2(VAR_0);
    VAR_5->order_succ = FUNC_2(VAR_0);
    FUNC_0(&VAR_5->context, 0);
    VAR_5->commands = FUNC_2(VAR_0);
    VAR_5->suffix = ((void*)0);
    VAR_5->lineno = 0;
    VAR_5->fname = ((void*)0);







    return (VAR_5);
}
