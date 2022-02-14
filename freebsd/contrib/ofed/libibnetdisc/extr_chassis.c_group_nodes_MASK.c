
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;


struct TYPE_24__ {int ch_found; int info; struct TYPE_24__* next; TYPE_1__* chassis; struct TYPE_24__* type_next; } ;
typedef TYPE_2__ ibnd_node_t ;
struct TYPE_25__ {TYPE_4__* chassis; TYPE_2__* nodes; TYPE_2__* switches; } ;
typedef TYPE_3__ ibnd_fabric_t ;
struct TYPE_26__ {int nodecount; int chassisnum; struct TYPE_26__* next; } ;
typedef TYPE_4__ ibnd_chassis_t ;
struct TYPE_27__ {TYPE_4__* first_chassis; TYPE_18__* current_chassis; int * last_chassis; } ;
typedef TYPE_5__ chassis_scan_t ;
struct TYPE_23__ {scalar_t__ chassisnum; } ;
struct TYPE_22__ {int chassisnum; int nodecount; int chassisguid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_18__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;

int FUNC_12(ibnd_fabric_t * VAR_4)
{
 ibnd_node_t *VAR_5;
 int VAR_6 = 0;
 ibnd_chassis_t *VAR_7;
 ibnd_chassis_t *VAR_8, *VAR_9;
 chassis_scan_t VAR_10;
 int VAR_11;

 VAR_10.first_chassis = ((void*)0);
 VAR_10.current_chassis = ((void*)0);
 VAR_10.last_chassis = ((void*)0);





 for (VAR_5 = VAR_4->switches; VAR_5; VAR_5 = VAR_5->type_next) {

  VAR_11 = FUNC_10(VAR_5->info, 0,VAR_1);

  if (VAR_11 == VAR_3
      && FUNC_4(VAR_5))
   goto cleanup;
  else if (VAR_11 == VAR_2
   && FUNC_3(VAR_5))
   goto cleanup;

 }



 for (VAR_5 = VAR_4->switches; VAR_5; VAR_5 = VAR_5->type_next) {
  if (FUNC_10(VAR_5->info, 0,
      VAR_1) != VAR_3)
   continue;
  if (!VAR_5->ch_found
      || (VAR_5->chassis && VAR_5->chassis->chassisnum)
      || !FUNC_9(VAR_5))
   continue;
  if (FUNC_0(&VAR_10))
   goto cleanup;
  VAR_10.current_chassis->chassisnum = ++VAR_6;
  if (FUNC_2(VAR_5, VAR_10.current_chassis))
   goto cleanup;
 }



 for (VAR_5 = VAR_4->nodes; VAR_5; VAR_5 = VAR_5->next) {
  if (FUNC_10(VAR_5->info, 0,
      VAR_1) == VAR_3)
   continue;
  if (FUNC_11(VAR_5->info, 0, VAR_0)) {
   VAR_7 = FUNC_5(VAR_4, VAR_5);
   if (VAR_7)
    VAR_7->nodecount++;
   else {

    if (FUNC_0(&VAR_10))
     goto cleanup;
    VAR_10.current_chassis->chassisguid =
        FUNC_7(VAR_5);
    VAR_10.current_chassis->nodecount = 1;
    if (!VAR_4->chassis)
     VAR_4->chassis = VAR_10.first_chassis;
   }
  }
 }



 for (VAR_5 = VAR_4->nodes; VAR_5; VAR_5 = VAR_5->next) {

  VAR_11 = FUNC_10(VAR_5->info, 0,VAR_1);

  if (VAR_11 == VAR_3)
   continue;
  if (FUNC_11(VAR_5->info, 0, VAR_0)) {
   VAR_7 = FUNC_5(VAR_4, VAR_5);
   if (VAR_7 && VAR_7->nodecount > 1) {
    if (!VAR_7->chassisnum)
     VAR_7->chassisnum = ++VAR_6;
    if (!VAR_5->ch_found) {
     VAR_5->ch_found = 1;
     FUNC_1(VAR_7, VAR_5);
    }
    else if (VAR_11 == VAR_2){
     FUNC_8(VAR_5, VAR_7);
    }
   }
  }
 }

 VAR_4->chassis = VAR_10.first_chassis;
 return 0;

cleanup:
 VAR_8 = VAR_10.first_chassis;
 while (VAR_8) {
  VAR_9 = VAR_8->next;
  FUNC_6(VAR_8);
  VAR_8 = VAR_9;
 }
 VAR_4->chassis = ((void*)0);
 return -1;
}
