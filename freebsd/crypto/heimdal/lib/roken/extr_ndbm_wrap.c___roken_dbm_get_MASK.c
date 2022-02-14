
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ dsize; int * dptr; } ;
typedef TYPE_1__ datum ;
struct TYPE_13__ {scalar_t__ (* c_get ) (TYPE_4__*,int *,int *,int) ;} ;
struct TYPE_12__ {int (* seq ) (TYPE_2__*,int *,int *,int) ;int (* cursor ) (TYPE_2__*,int *,TYPE_4__**,int ) ;} ;
typedef int DBT ;
typedef TYPE_2__ DB ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_4__**,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *,int *,int) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int) ;

__attribute__((used)) static datum
FUNC_4 (DB *VAR_1, int VAR_2)
{
    DBT VAR_3, VAR_4;
    datum VAR_5;
    VAR_1->seq(VAR_1, &VAR_3, &VAR_4, VAR_2);
    FUNC_0(&VAR_4, &VAR_5);

    return VAR_5;
}
