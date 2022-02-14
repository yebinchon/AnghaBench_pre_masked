
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqisrc_softstate {scalar_t__** device_list; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pqisrc_softstate*,int,int) ;

void FUNC_2(struct pqisrc_softstate *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;

 FUNC_0("IN\n");

 for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++){
  for(VAR_4 = 0; VAR_4 < VAR_1; VAR_4++){
   if(VAR_2->device_list[VAR_3][VAR_4]){
    FUNC_1(VAR_2, VAR_3, VAR_4);
   }
  }
 }

 FUNC_0("OUT\n");
}
