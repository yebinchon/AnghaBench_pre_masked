
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_7__ {scalar_t__ cch_magic; int cch_flags; } ;
typedef TYPE_1__ cap_channel_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int * FUNC_2 (TYPE_1__ const*,int *) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int *,char*,char*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;

cap_channel_t *
FUNC_10(const cap_channel_t *VAR_2)
{
 cap_channel_t *VAR_3;
 nvlist_t *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->cch_magic == VAR_0);

 VAR_4 = FUNC_6(FUNC_3(VAR_2));
 FUNC_5(VAR_4, "cmd", "clone");
 VAR_4 = FUNC_2(VAR_2, VAR_4);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 if (FUNC_8(VAR_4, "error") != 0) {
  VAR_1 = (int)FUNC_8(VAR_4, "error");
  FUNC_7(VAR_4);
  return (((void*)0));
 }
 VAR_5 = FUNC_9(VAR_4, "sock");
 FUNC_7(VAR_4);
 VAR_3 = FUNC_1(VAR_5, VAR_2->cch_flags);
 if (VAR_3 == ((void*)0)) {
  int VAR_6;

  VAR_6 = VAR_1;
  FUNC_4(VAR_5);
  VAR_1 = VAR_6;
 }

 return (VAR_3);
}
