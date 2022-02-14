
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_3__* edge ;
struct TYPE_7__ {TYPE_2__* dest; TYPE_1__* src; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int index; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char const*,int ,char const*,int ,char*) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, edge VAR_1, const char *VAR_2, tree VAR_3,
    const char *VAR_4, tree VAR_5)
{
  FUNC_1 (VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, " across an abnormal edge");
  FUNC_0 (VAR_0, " from BB%d->BB%d\n", VAR_1->src->index,
        VAR_1->dest->index);
}
