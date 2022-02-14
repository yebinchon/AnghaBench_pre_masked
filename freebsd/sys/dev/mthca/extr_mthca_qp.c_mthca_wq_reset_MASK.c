
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_wq {scalar_t__ tail; scalar_t__ head; scalar_t__ max; scalar_t__ last_comp; scalar_t__ next_ind; } ;



__attribute__((used)) static void FUNC_0(struct mthca_wq *VAR_0)
{
 VAR_0->next_ind = 0;
 VAR_0->last_comp = VAR_0->max - 1;
 VAR_0->head = 0;
 VAR_0->tail = 0;
}
