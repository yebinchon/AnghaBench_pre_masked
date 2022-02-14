
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nelem; int size; TYPE_1__** tab; } ;
struct TYPE_8__ {unsigned int tval; int fval; void* sval; void* nval; struct TYPE_8__* cnext; int ctype; int csub; } ;
typedef TYPE_1__ Cell ;
typedef int Awkfloat ;
typedef TYPE_2__ Array ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int) ;
 TYPE_1__* FUNC_4 (char const*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 void* FUNC_7 (char const*) ;

Cell *FUNC_8(const char *VAR_3, const char *VAR_4, Awkfloat VAR_5, unsigned VAR_6, Array *VAR_7)
{
 int VAR_8;
 Cell *VAR_9;

 if (VAR_3 != ((void*)0) && (VAR_9 = FUNC_4(VAR_3, VAR_7)) != ((void*)0)) {
     FUNC_2( ("setsymtab found %p: n=%s s=\"%s\" f=%g t=%o\n",
   (void)VAR_9, FUNC_1(VAR_9->nval), FUNC_1(VAR_9->sval), VAR_9->fval, VAR_9->tval) );
  return(VAR_9);
 }
 VAR_9 = (Cell *) FUNC_5(sizeof(Cell));
 if (VAR_9 == ((void*)0))
  FUNC_0("out of space for symbol table at %s", VAR_3);
 VAR_9->nval = FUNC_7(VAR_3);
 VAR_9->sval = VAR_4 ? FUNC_7(VAR_4) : FUNC_7("");
 VAR_9->fval = VAR_5;
 VAR_9->tval = VAR_6;
 VAR_9->csub = VAR_0;
 VAR_9->ctype = VAR_2;
 VAR_7->nelem++;
 if (VAR_7->nelem > VAR_1 * VAR_7->size)
  FUNC_6(VAR_7);
 VAR_8 = FUNC_3(VAR_3, VAR_7->size);
 VAR_9->cnext = VAR_7->tab[VAR_8];
 VAR_7->tab[VAR_8] = VAR_9;
    FUNC_2( ("setsymtab set %p: n=%s s=\"%s\" f=%g t=%o\n",
  (void)VAR_9, VAR_9->nval, VAR_9->sval, VAR_9->fval, VAR_9->tval) );
 return(VAR_9);
}
