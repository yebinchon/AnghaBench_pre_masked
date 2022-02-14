
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* pgno_t ;
typedef int indx_t ;
struct TYPE_16__ {int bt_psize; } ;
struct TYPE_15__ {int flags; int upper; int lower; void* nextpg; void* prevpg; void* pgno; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,void**) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int *,size_t) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static PAGE *
FUNC_2(BTREE *VAR_5, PAGE *VAR_6, PAGE **VAR_7, PAGE **VAR_8, indx_t *VAR_9, size_t VAR_10)
{
 PAGE *VAR_11, *VAR_12, *VAR_13;
 pgno_t VAR_14, VAR_15;






 if ((VAR_11 = FUNC_0(VAR_5, &VAR_14)) == ((void*)0) ||
     (VAR_12 = FUNC_0(VAR_5, &VAR_15)) == ((void*)0))
  return (((void*)0));
 VAR_11->pgno = VAR_14;
 VAR_12->pgno = VAR_15;
 VAR_11->nextpg = VAR_12->pgno;
 VAR_12->prevpg = VAR_11->pgno;
 VAR_11->prevpg = VAR_12->nextpg = VAR_1;
 VAR_11->lower = VAR_12->lower = VAR_0;
 VAR_11->upper = VAR_12->upper = VAR_5->bt_psize;
 VAR_11->flags = VAR_12->flags = VAR_6->flags & VAR_2;


 VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_11, VAR_12, VAR_9, VAR_10);

 *VAR_7 = VAR_11;
 *VAR_8 = VAR_12;
 return (VAR_13);
}
