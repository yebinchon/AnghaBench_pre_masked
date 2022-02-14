
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct torus {unsigned int* port_order; TYPE_1__* osm; } ;
struct TYPE_2__ {int log; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int *,int ,char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int*,char const*) ;

__attribute__((used)) static
bool FUNC_3(struct torus *VAR_1, const char *VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5, VAR_6;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->port_order); VAR_3++) {
  if (!FUNC_2(&(VAR_1->port_order[VAR_3]), VAR_2))
   break;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   if (VAR_1->port_order[VAR_4] == VAR_1->port_order[VAR_3]) {
    FUNC_1(&VAR_1->osm->log, VAR_0,
     "Ignored duplicate port %u in"
     " port_order parsing\n",
     VAR_1->port_order[VAR_4]);
    VAR_3--;
    break;
   }
  }
 }

 VAR_6 = VAR_3;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->port_order); VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   if (VAR_1->port_order[VAR_5] == VAR_4)
    break;
  if (VAR_5 >= VAR_3)
   VAR_1->port_order[VAR_6++] = VAR_4;
 }

 return 1;
}
