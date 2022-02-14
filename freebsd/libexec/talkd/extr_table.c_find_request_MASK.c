
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_13__ {scalar_t__ tv_sec; } ;
struct TYPE_12__ {scalar_t__ type; scalar_t__ pid; int l_name; int r_name; } ;
struct TYPE_11__ {scalar_t__ time; TYPE_2__ request; struct TYPE_11__* next; } ;
typedef TYPE_1__ TABLE_ENTRY ;
typedef TYPE_2__ CTL_MSG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 TYPE_3__ VAR_5 ;

CTL_MSG *
FUNC_4(CTL_MSG *VAR_6)
{
 TABLE_ENTRY *VAR_7, *VAR_8;
 time_t VAR_9;

 FUNC_0(VAR_0, &VAR_5);
 VAR_9 = VAR_5.tv_sec;




 if (VAR_3)
  FUNC_2("find_request", VAR_6);
 for (VAR_7 = VAR_4; VAR_7 != VAR_2; VAR_7 = VAR_8) {
  VAR_8 = VAR_7->next;
  if ((VAR_7->time - VAR_9) > VAR_1) {

   if (VAR_3)
    FUNC_2("deleting expired entry",
        &VAR_7->request);
   FUNC_1(VAR_7);
   continue;
  }
  if (VAR_3)
   FUNC_2("", &VAR_7->request);
  if (FUNC_3(VAR_6->r_name, VAR_7->request.r_name) == 0 &&
      FUNC_3(VAR_6->l_name, VAR_7->request.l_name) == 0 &&
      VAR_6->type == VAR_7->request.type &&
      VAR_6->pid == VAR_7->request.pid) {

   VAR_7->time = VAR_9;
   return (&VAR_7->request);
  }
 }
 return ((CTL_MSG *)0);
}
