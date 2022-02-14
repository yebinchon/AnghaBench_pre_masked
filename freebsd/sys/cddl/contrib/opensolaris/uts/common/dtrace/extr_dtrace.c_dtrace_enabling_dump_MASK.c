
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* dtpd_provider; char* dtpd_mod; char* dtpd_func; char* dtpd_name; } ;
typedef TYPE_2__ dtrace_probedesc_t ;
struct TYPE_7__ {int dten_ndesc; TYPE_1__** dten_desc; } ;
typedef TYPE_3__ dtrace_enabling_t ;
struct TYPE_5__ {TYPE_2__ dted_probe; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*,char*,char*,char*) ;
 int FUNC_1 (char*,int,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(dtrace_enabling_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->dten_ndesc; VAR_2++) {
  dtrace_probedesc_t *VAR_3 = &VAR_1->dten_desc[VAR_2]->dted_probe;






  FUNC_0(VAR_0, "enabling probe %d (%s:%s:%s:%s)", VAR_2,
      VAR_3->dtpd_provider, VAR_3->dtpd_mod,
      VAR_3->dtpd_func, VAR_3->dtpd_name);

 }
}
