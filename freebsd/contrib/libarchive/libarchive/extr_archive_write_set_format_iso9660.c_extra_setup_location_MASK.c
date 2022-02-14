
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct extr_rec* current; struct extr_rec* first; } ;
struct isoent {TYPE_1__ extr_rec_list; } ;
struct extr_rec {struct extr_rec* next; scalar_t__ offset; int location; } ;



__attribute__((used)) static int
FUNC_0(struct isoent *VAR_0, int VAR_1)
{
 struct extr_rec *VAR_2;
 int VAR_3;

 VAR_3 = 0;
 VAR_2 = VAR_0->extr_rec_list.first;
 VAR_0->extr_rec_list.current = VAR_2;
 while (VAR_2) {
  VAR_3++;
  VAR_2->location = VAR_1++;
  VAR_2->offset = 0;
  VAR_2 = VAR_2->next;
 }
 return (VAR_3);
}
