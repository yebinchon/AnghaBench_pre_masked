
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int lno; scalar_t__ cno; } ;
struct TYPE_11__ {scalar_t__ searchdir; int lno; scalar_t__ cno; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef int CHAR_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,size_t,char*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int *,size_t,int *,int) ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static int
FUNC_8(SCR *VAR_6, CHAR_T *VAR_7, size_t VAR_8, char *VAR_9)
{
 MARK VAR_10;
 char *VAR_11;
 char *VAR_12;
 size_t VAR_13;







 if (FUNC_1(VAR_7[0])) {
  FUNC_0(VAR_6, VAR_7, VAR_8+1, VAR_12, VAR_13);
  VAR_10.lno = FUNC_2(VAR_12);
  if (!FUNC_3(VAR_6, VAR_10.lno)) {
   FUNC_7(VAR_6, VAR_4, VAR_9);
   return (1);
  }
 } else {




  VAR_10.lno = 1;
  VAR_10.cno = 0;
  if (FUNC_4(VAR_6, &VAR_10, &VAR_10,
      VAR_7, VAR_8, ((void*)0), VAR_2 | VAR_3)) {
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_12, VAR_13);
   if ((VAR_11 = FUNC_6(VAR_12, '(')) != ((void*)0)) {
    VAR_8 = VAR_11 - VAR_12;
    if (FUNC_4(VAR_6, &VAR_10, &VAR_10, VAR_7, VAR_8,
        ((void*)0), VAR_2 | VAR_3))
     goto notfound;
   } else {
notfound: FUNC_7(VAR_6, VAR_5, VAR_9);
    return (1);
   }
  }





  if (VAR_6->searchdir == VAR_1)
   VAR_6->searchdir = VAR_0;
 }





 VAR_6->lno = VAR_10.lno;
 VAR_6->cno = 0;
 (void)FUNC_5(VAR_6, VAR_6->lno, &VAR_6->cno);
 return (0);
}
