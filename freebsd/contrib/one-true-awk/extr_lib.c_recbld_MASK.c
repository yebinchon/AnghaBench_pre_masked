
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* sval; int tval; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char**,int *,int,int ,char**,char*) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_1__** VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 int VAR_10;
 char *VAR_11, *VAR_12;
 char *VAR_13 = FUNC_4(VAR_7);

 if (VAR_4 == 1)
  return;
 VAR_11 = VAR_8;
 for (VAR_10 = 1; VAR_10 <= *VAR_1; VAR_10++) {
  VAR_12 = FUNC_4(VAR_5[VAR_10]);
  if (!FUNC_1(&VAR_8, &VAR_9, 1+FUNC_5(VAR_12)+VAR_11-VAR_8, VAR_9, &VAR_11, "recbld 1"))
   FUNC_0("created $0 `%.30s...' too long", VAR_8);
  while ((*VAR_11 = *VAR_12++) != 0)
   VAR_11++;
  if (VAR_10 < *VAR_1) {
   if (!FUNC_1(&VAR_8, &VAR_9, 2+FUNC_5(VAR_13)+VAR_11-VAR_8, VAR_9, &VAR_11, "recbld 2"))
    FUNC_0("created $0 `%.30s...' too long", VAR_8);
   for (VAR_12 = VAR_13; (*VAR_11 = *VAR_12++) != 0; )
    VAR_11++;
  }
 }
 if (!FUNC_1(&VAR_8, &VAR_9, 2+VAR_11-VAR_8, VAR_9, &VAR_11, "recbld 3"))
  FUNC_0("built giant record `%.30s...'", VAR_8);
 *VAR_11 = '\0';
    FUNC_2( ("in recbld inputFS=%s, fldtab[0]=%p\n", VAR_6, (void*)VAR_5[0]) );

 if (FUNC_3(VAR_5[0]))
  FUNC_6(VAR_5[0]->sval);
 VAR_5[0]->tval = VAR_2 | VAR_3 | VAR_0;
 VAR_5[0]->sval = VAR_8;

    FUNC_2( ("in recbld inputFS=%s, fldtab[0]=%p\n", VAR_6, (void*)VAR_5[0]) );
    FUNC_2( ("recbld = |%s|\n", VAR_8) );
 VAR_4 = 1;
}
