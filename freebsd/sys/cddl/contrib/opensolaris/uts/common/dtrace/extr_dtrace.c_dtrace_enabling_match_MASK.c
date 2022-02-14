
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dten_ndesc; int dten_error; int dten_probegen; TYPE_2__* dten_current; TYPE_2__** dten_desc; } ;
typedef TYPE_1__ dtrace_enabling_t ;
struct TYPE_6__ {int dted_probe; } ;
typedef TYPE_2__ dtrace_ecbdesc_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,void*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(dtrace_enabling_t *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_0(FUNC_1(&VAR_1));
 FUNC_0(FUNC_1(&VAR_2));

 for (VAR_6 = 0; VAR_6 < VAR_4->dten_ndesc; VAR_6++) {
  dtrace_ecbdesc_t *VAR_8 = VAR_4->dten_desc[VAR_6];

  VAR_4->dten_current = VAR_8;
  VAR_4->dten_error = 0;

  VAR_7 += FUNC_3(&VAR_8->dted_probe, VAR_4);

  if (VAR_4->dten_error != 0) {
   if (VAR_5 == ((void*)0)) {
    FUNC_2(VAR_0, "dtrace_enabling_match() "
        "error on %p: %d", (void *)VAR_8,
        VAR_4->dten_error);
   }

   return (VAR_4->dten_error);
  }
 }

 VAR_4->dten_probegen = VAR_3;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7;

 return (0);
}
