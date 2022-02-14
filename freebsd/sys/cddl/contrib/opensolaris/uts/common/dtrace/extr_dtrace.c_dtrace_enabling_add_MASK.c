
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dten_probegen; int dten_ndesc; int dten_maxdesc; int ** dten_desc; int * dten_prev; int * dten_next; } ;
typedef TYPE_1__ dtrace_enabling_t ;
typedef int dtrace_ecbdesc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int **,int **,size_t) ;
 int FUNC_2 (int **,size_t) ;
 int ** FUNC_3 (size_t,int ) ;

__attribute__((used)) static void
FUNC_4(dtrace_enabling_t *VAR_1, dtrace_ecbdesc_t *VAR_2)
{
 dtrace_ecbdesc_t **VAR_3;
 size_t VAR_4, VAR_5;





 FUNC_0(VAR_1->dten_probegen == 0);
 FUNC_0(VAR_1->dten_next == ((void*)0) && VAR_1->dten_prev == ((void*)0));

 if (VAR_1->dten_ndesc < VAR_1->dten_maxdesc) {
  VAR_1->dten_desc[VAR_1->dten_ndesc++] = VAR_2;
  return;
 }

 VAR_4 = VAR_1->dten_maxdesc * sizeof (dtrace_enabling_t *);

 if (VAR_1->dten_maxdesc == 0) {
  VAR_1->dten_maxdesc = 1;
 } else {
  VAR_1->dten_maxdesc <<= 1;
 }

 FUNC_0(VAR_1->dten_ndesc < VAR_1->dten_maxdesc);

 VAR_5 = VAR_1->dten_maxdesc * sizeof (dtrace_enabling_t *);
 VAR_3 = FUNC_3(VAR_5, VAR_0);
 FUNC_1(VAR_1->dten_desc, VAR_3, VAR_4);
 if (VAR_1->dten_desc != ((void*)0))
  FUNC_2(VAR_1->dten_desc, VAR_4);

 VAR_1->dten_desc = VAR_3;
 VAR_1->dten_desc[VAR_1->dten_ndesc++] = VAR_2;
}
