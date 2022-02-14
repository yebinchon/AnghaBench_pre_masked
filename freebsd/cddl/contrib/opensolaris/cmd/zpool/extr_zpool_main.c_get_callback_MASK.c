
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zprop_source_t ;
struct TYPE_4__ {scalar_t__ pl_prop; int pl_user_prop; struct TYPE_4__* pl_next; } ;
typedef TYPE_1__ zprop_list_t ;
struct TYPE_5__ {int cb_literal; TYPE_1__* cb_proplist; } ;
typedef TYPE_2__ zprop_get_cbdata_t ;
typedef int zpool_handle_t ;
typedef int value ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,char*,int,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,char*,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ,char*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_7(zpool_handle_t *VAR_4, void *VAR_5)
{
 zprop_get_cbdata_t *VAR_6 = (zprop_get_cbdata_t *)VAR_5;
 char VAR_7[VAR_0];
 zprop_source_t VAR_8;
 zprop_list_t *VAR_9;

 for (VAR_9 = VAR_6->cb_proplist; VAR_9 != ((void*)0); VAR_9 = VAR_9->pl_next) {





  if (VAR_9->pl_prop == VAR_1 &&
      VAR_9 == VAR_6->cb_proplist)
   continue;

  if (VAR_9->pl_prop == VAR_2 &&
      (FUNC_2(VAR_9->pl_user_prop) ||
      FUNC_5(VAR_9->pl_user_prop))) {
   VAR_8 = VAR_3;

   if (FUNC_3(VAR_4, VAR_9->pl_user_prop,
       VAR_7, sizeof (VAR_7)) == 0) {
    FUNC_6(FUNC_0(VAR_4),
        VAR_6, VAR_9->pl_user_prop, VAR_7, VAR_8,
        ((void*)0), ((void*)0));
   }
  } else {
   if (FUNC_1(VAR_4, VAR_9->pl_prop, VAR_7,
       sizeof (VAR_7), &VAR_8, VAR_6->cb_literal) != 0)
    continue;

   FUNC_6(FUNC_0(VAR_4), VAR_6,
       FUNC_4(VAR_9->pl_prop), VAR_7, VAR_8,
       ((void*)0), ((void*)0));
  }
 }
 return (0);
}
