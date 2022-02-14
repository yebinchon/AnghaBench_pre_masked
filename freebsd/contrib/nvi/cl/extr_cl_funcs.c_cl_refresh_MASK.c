
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_13__ {TYPE_1__* focus; scalar_t__ killersig; } ;
struct TYPE_12__ {scalar_t__ roff; scalar_t__ coff; scalar_t__ cols; int * gp; } ;
typedef TYPE_1__ SCR ;
typedef int GS ;
typedef TYPE_2__ CL_PRIVATE ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *,size_t,size_t) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_9 (int *,size_t,size_t) ;
 scalar_t__ FUNC_10 (int *) ;

int
FUNC_11(SCR *VAR_5, int VAR_6)
{
 GS *VAR_7;
 CL_PRIVATE *VAR_8;
 WINDOW *VAR_9;
 SCR *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13;

 VAR_7 = VAR_5->gp;
 VAR_8 = FUNC_0(VAR_5);
 VAR_9 = FUNC_1(VAR_5) ? FUNC_1(VAR_5) : VAR_4;





 if (VAR_8->killersig)
  return (0);
 if (VAR_6 || FUNC_3(VAR_8, VAR_0)) {
  FUNC_8(VAR_4, VAR_12, VAR_13);
  for (VAR_10 = VAR_5; VAR_10 != ((void*)0); VAR_10 = FUNC_4(VAR_10, VAR_3))
   for (VAR_11 = FUNC_4(VAR_10, VAR_3); VAR_11 != ((void*)0);
       VAR_11 = FUNC_4(VAR_11, VAR_3))
    if (VAR_10->roff == VAR_11->roff) {
        if (VAR_10->coff + VAR_10->cols + 1 == VAR_11->coff)
     FUNC_5(VAR_10);
        else
        if (VAR_11->coff + VAR_11->cols + 1 == VAR_10->coff)
     FUNC_5(VAR_11);
    }
  (void)FUNC_9(VAR_4, VAR_12, VAR_13);
  FUNC_2(VAR_8, VAR_0);
 }






 if (VAR_6)
  FUNC_6(VAR_2, 1);






 return (FUNC_10(VAR_4) == VAR_1 ||
  FUNC_10(VAR_9) == VAR_1 ||
  (VAR_5 == VAR_8->focus && FUNC_7() == VAR_1));
}
