
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int macroset; TYPE_2__* first; } ;
struct roff_man {TYPE_1__ meta; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct roff_man*) ;

__attribute__((used)) static void
FUNC_3(struct roff_man *VAR_2)
{
 FUNC_1(&VAR_2->meta, 0, sizeof(VAR_2->meta));
 VAR_2->meta.first = FUNC_0(1, sizeof(*VAR_2->meta.first));
 VAR_2->meta.first->type = VAR_1;
 VAR_2->meta.macroset = VAR_0;
 FUNC_2(VAR_2);
}
