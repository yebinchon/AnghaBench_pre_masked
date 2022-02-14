
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int sense; int head; } ;


 int FUNC_0 (struct block*,int ) ;
 int FUNC_1 (struct block*,struct block*) ;

void
FUNC_2(struct block *VAR_0, struct block *VAR_1)
{
 VAR_0->sense = !VAR_0->sense;
 FUNC_0(VAR_0, VAR_1->head);
 VAR_0->sense = !VAR_0->sense;
 FUNC_1(VAR_1, VAR_0);
 VAR_1->head = VAR_0->head;
}
