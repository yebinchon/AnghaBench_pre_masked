
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct block {int sense; int head; } ;
struct TYPE_7__ {int root; } ;
struct TYPE_8__ {TYPE_1__ ic; int snaplen; } ;
typedef TYPE_2__ compiler_state_t ;


 int FUNC_0 (struct block*,int ) ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void
FUNC_5(compiler_state_t *VAR_0, struct block *VAR_1)
{
 struct block *VAR_2;
 FUNC_4(VAR_0, VAR_1->head);
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2, VAR_1);

 FUNC_0(VAR_1, FUNC_3(VAR_0, VAR_0->snaplen));
 VAR_1->sense = !VAR_1->sense;
 FUNC_0(VAR_1, FUNC_3(VAR_0, 0));
 VAR_0->ic.root = VAR_1->head;
}
