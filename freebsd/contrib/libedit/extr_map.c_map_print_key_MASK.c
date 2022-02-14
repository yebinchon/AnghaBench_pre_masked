
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int outbuf ;
struct TYPE_7__ {scalar_t__ func; int name; } ;
typedef TYPE_2__ el_bindings_t ;
typedef scalar_t__ el_action_t ;
struct TYPE_6__ {size_t nfunc; TYPE_2__* help; } ;
struct TYPE_8__ {int el_outfile; TYPE_1__ el_map; } ;
typedef TYPE_3__ EditLine ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (char const*,char*,int,char*) ;
 int FUNC_2 (TYPE_3__*,char const*) ;

__attribute__((used)) static void
FUNC_3(EditLine *VAR_1, el_action_t *VAR_2, const wchar_t *VAR_3)
{
 char VAR_4[VAR_0];
 el_bindings_t *VAR_5, *VAR_6;

 if (VAR_3[0] == '\0' || VAR_3[1] == '\0') {
  (void) FUNC_1(VAR_3, VAR_4, sizeof(VAR_4), "");
  VAR_6 = &VAR_1->el_map.help[VAR_1->el_map.nfunc];
  for (VAR_5 = VAR_1->el_map.help; VAR_5 < VAR_6; VAR_5++)
   if (VAR_5->func == VAR_2[(unsigned char) *VAR_3]) {
    (void) FUNC_0(VAR_1->el_outfile,
        "%s\t->\t%d\n", VAR_4, VAR_5->name);
    return;
   }
 } else
  FUNC_2(VAR_1, VAR_3);
}
