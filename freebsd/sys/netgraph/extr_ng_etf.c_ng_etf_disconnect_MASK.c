
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct filter {scalar_t__ match_hook; } ;
typedef scalar_t__ hook_p ;
typedef TYPE_3__* etf_p ;
struct TYPE_6__ {scalar_t__ hook; } ;
struct TYPE_5__ {scalar_t__ hook; } ;
struct TYPE_7__ {TYPE_2__ nomatch_hook; TYPE_1__ downstream_hook; int * hashtable; } ;


 int VAR_0 ;
 struct filter* FUNC_0 (int *) ;
 struct filter* FUNC_1 (struct filter*,int ) ;
 int FUNC_2 (struct filter*,int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 struct filter* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (struct filter*,int ) ;
 int VAR_2 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(hook_p VAR_3)
{
 const etf_p VAR_4 = FUNC_8(FUNC_3(VAR_3));
 int VAR_5;
 struct filter *VAR_6, *VAR_7;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = FUNC_0(&VAR_4->hashtable[VAR_5]);
  while (VAR_6 != ((void*)0)) {
   VAR_7 = FUNC_1(VAR_6, VAR_2);
   if (VAR_6->match_hook == VAR_3) {
    FUNC_2(VAR_6, VAR_2);
    FUNC_9(VAR_6, VAR_1);
   }
   VAR_6 = VAR_7;
  }
 }


 if (VAR_3 == VAR_4->downstream_hook.hook) {
  VAR_4->downstream_hook.hook = ((void*)0);
 } else if (VAR_3 == VAR_4->nomatch_hook.hook) {
  VAR_4->nomatch_hook.hook = ((void*)0);
 } else {
  if (FUNC_4(VAR_3))
   FUNC_9(FUNC_4(VAR_3), VAR_1);
 }

 FUNC_5(VAR_3, ((void*)0));

 if ((FUNC_7(FUNC_3(VAR_3)) == 0)
 && (FUNC_6(FUNC_3(VAR_3))))
  FUNC_10(FUNC_3(VAR_3));
 return (0);
}
