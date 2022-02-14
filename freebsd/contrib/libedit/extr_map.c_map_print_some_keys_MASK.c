
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t wint_t ;
typedef size_t wchar_t ;
typedef int unparsbuf ;
typedef int extrabuf ;
struct TYPE_6__ {scalar_t__ func; int name; } ;
typedef TYPE_2__ el_bindings_t ;
typedef scalar_t__ el_action_t ;
struct TYPE_5__ {size_t nfunc; scalar_t__* key; int* alt; TYPE_2__* help; } ;
struct TYPE_7__ {int el_errfile; TYPE_1__ el_map; int el_outfile; } ;
typedef TYPE_3__ EditLine ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (size_t*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_3(EditLine *VAR_3, el_action_t *VAR_4, wint_t VAR_5, wint_t VAR_6)
{
 el_bindings_t *VAR_7, *VAR_8;
 wchar_t VAR_9[2], VAR_10[2];
 char VAR_11[VAR_1], VAR_12[VAR_1];

 VAR_9[0] = VAR_5;
 VAR_9[1] = 0;
 VAR_10[0] = VAR_6;
 VAR_10[1] = 0;
 if (VAR_4[VAR_5] == VAR_0) {
  if (VAR_5 == VAR_6) {
   (void) FUNC_2(VAR_9, VAR_11,
       sizeof(VAR_11), VAR_2);
   (void) FUNC_1(VAR_3->el_outfile,
       "%-15s->  is undefined\n", VAR_11);
  }
  return;
 }
 VAR_8 = &VAR_3->el_map.help[VAR_3->el_map.nfunc];
 for (VAR_7 = VAR_3->el_map.help; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_7->func == VAR_4[VAR_5]) {
   if (VAR_5 == VAR_6) {
    (void) FUNC_2(VAR_9, VAR_11,
        sizeof(VAR_11), VAR_2);
    (void) FUNC_1(VAR_3->el_outfile, "%-15s->  %d\n",
        VAR_11, VAR_7->name);
   } else {
    (void) FUNC_2(VAR_9, VAR_11,
        sizeof(VAR_11), VAR_2);
    (void) FUNC_2(VAR_10, VAR_12,
        sizeof(VAR_12), VAR_2);
    (void) FUNC_1(VAR_3->el_outfile,
        "%-4s to %-7s->  %d\n",
        VAR_11, VAR_12, VAR_7->name);
   }
   return;
  }
 }
 FUNC_0((VAR_3->el_errfile, "Error printing keys\n"));
}
