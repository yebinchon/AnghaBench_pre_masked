
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_13__ {scalar_t__ tv_sec; } ;
struct TYPE_12__ {scalar_t__ type; int l_name; int r_name; } ;
struct TYPE_11__ {scalar_t__ time; TYPE_2__ request; struct TYPE_11__* next; } ;
typedef TYPE_1__ TABLE_ENTRY ;
typedef TYPE_2__ CTL_MSG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_5 ;
 TYPE_3__ VAR_6 ;

CTL_MSG *
FUNC_4(CTL_MSG *VAR_7)
{
 TABLE_ENTRY *VAR_8, *VAR_9;
 time_t VAR_10;

 FUNC_0(VAR_0, &VAR_6);
 VAR_10 = VAR_6.tv_sec;
 if (VAR_4)
  FUNC_2("find_match", VAR_7);
 for (VAR_8 = VAR_5; VAR_8 != VAR_3; VAR_8 = VAR_9) {
  VAR_9 = VAR_8->next;
  if ((VAR_8->time - VAR_10) > VAR_2) {

   if (VAR_4)
    FUNC_2("deleting expired entry",
        &VAR_8->request);
   FUNC_1(VAR_8);
   continue;
  }
  if (VAR_4)
   FUNC_2("", &VAR_8->request);
  if (FUNC_3(VAR_7->l_name, VAR_8->request.r_name) == 0 &&
      FUNC_3(VAR_7->r_name, VAR_8->request.l_name) == 0 &&
       VAR_8->request.type == VAR_1)
   return (&VAR_8->request);
 }
 return ((CTL_MSG *)0);
}
