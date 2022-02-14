
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wellness_periodic; } ;
struct pqisrc_softstate {TYPE_1__ os_specific; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pqisrc_softstate*) ;
 int FUNC_2 (struct pqisrc_softstate*) ;
 int FUNC_3 (void (*) (void*),struct pqisrc_softstate*,int) ;

void FUNC_4(void *VAR_2)
{
 struct pqisrc_softstate *VAR_3 = (struct pqisrc_softstate *)VAR_2;
 int VAR_4 = 0;



 if (!FUNC_1(VAR_3)){
  if( (VAR_4 = FUNC_2(VAR_3)) != 0 )
   FUNC_0("Failed to update time to FW in periodic ret = %d\n", VAR_4);
 }


 VAR_3->os_specific.wellness_periodic = FUNC_3(FUNC_4,
     VAR_3, VAR_0 * VAR_1);
}
