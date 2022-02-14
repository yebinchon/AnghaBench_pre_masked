
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adh_reset; char* adh_trail_name; int adh_remoteaddr; scalar_t__ adh_trail_offset; int * adh_remote; } ;


 int FUNC_0 (int *,int *,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void)
{

 FUNC_7(&VAR_3);




 if (VAR_0->adh_remote == ((void*)0)) {
  FUNC_6(&VAR_3);
  return;
 }
 FUNC_3(2, "Closing connection to %s.", VAR_0->adh_remoteaddr);
 FUNC_5(VAR_0->adh_remote);
 FUNC_1(&VAR_4);
 VAR_0->adh_remote = ((void*)0);
 VAR_0->adh_reset = 1;
 VAR_0->adh_trail_name[0] = '\0';
 VAR_0->adh_trail_offset = 0;
 FUNC_2(&VAR_4);
 FUNC_6(&VAR_3);

 FUNC_4("Disconnected from %s.", VAR_0->adh_remoteaddr);


 FUNC_0(&VAR_1, &VAR_5, &VAR_2);
}
