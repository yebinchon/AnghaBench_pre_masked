
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hists {int lock; void* entries; void* entries_collapsed; void** entries_in_array; void** entries_in; } ;


 void* VAR_0 ;
 int FUNC_0 (struct hists*,int ,int) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct hists *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->entries_in_array[0] = VAR_1->entries_in_array[1] = VAR_0;
 VAR_1->entries_in = &VAR_1->entries_in_array[0];
 VAR_1->entries_collapsed = VAR_0;
 VAR_1->entries = VAR_0;
 FUNC_1(&VAR_1->lock, ((void*)0));
}
