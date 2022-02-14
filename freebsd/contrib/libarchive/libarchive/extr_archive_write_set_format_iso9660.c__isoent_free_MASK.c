
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct isoent* first; } ;
struct isoent {struct isoent* next; TYPE_1__ extr_rec_list; struct isoent* identifier; struct isoent* children_sorted; } ;
struct extr_rec {struct extr_rec* next; TYPE_1__ extr_rec_list; struct extr_rec* identifier; struct extr_rec* children_sorted; } ;


 int FUNC_0 (struct isoent*) ;

__attribute__((used)) static void
FUNC_1(struct isoent *VAR_0)
{
 struct extr_rec *VAR_1, *VAR_2;

 FUNC_0(VAR_0->children_sorted);
 FUNC_0(VAR_0->identifier);
 VAR_1 = VAR_0->extr_rec_list.first;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_0(VAR_0);
}
