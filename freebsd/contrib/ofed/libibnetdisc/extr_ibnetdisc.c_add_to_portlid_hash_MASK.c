
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int base_lid; int lmc; } ;
typedef TYPE_1__ ibnd_port_t ;
typedef int GHashTable ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

void FUNC_2(ibnd_port_t * VAR_0, GHashTable *VAR_1)
{
 uint16_t VAR_2 = VAR_0->base_lid;
 uint16_t VAR_3 = ((1 << VAR_0->lmc) -1);
 uint16_t VAR_4 = 0;

 if (VAR_2 > 0 && VAR_2 <= 0xbfff) {


  for (VAR_4 = VAR_2; VAR_4 <= (VAR_2 + VAR_3); VAR_4++) {
   FUNC_1(VAR_1, FUNC_0(VAR_4), VAR_0);
  }
 }
}
