
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t klen; char* keyw; int keywlen; } ;
typedef TYPE_1__ VI_PRIVATE ;
struct TYPE_11__ {size_t cno; int lno; } ;
typedef TYPE_2__ SCR ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_2__*,char*,int ,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,size_t) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ,int **,size_t*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 int FUNC_7 (TYPE_2__*,int ) ;

int
FUNC_8(SCR *VAR_2)
{
 VI_PRIVATE *VAR_3;
 size_t VAR_4, VAR_5, VAR_6;
 int VAR_7;
 CHAR_T *VAR_8;

 if (FUNC_4(VAR_2, VAR_2->lno, VAR_0, &VAR_8, &VAR_6))
  return (1);
 for (VAR_7 = 0,
     VAR_4 = VAR_2->cno; VAR_4 < VAR_6 && FUNC_1(VAR_8[VAR_4]); VAR_7 = 1, ++VAR_4);
 if (VAR_4 >= VAR_6) {
  FUNC_6(VAR_2, VAR_1, "212|Cursor not in a word");
  return (1);
 }
 if (VAR_7) {
  VAR_2->cno = VAR_4;
  (void)FUNC_7(VAR_2, 0);
 }
 for (VAR_5 = VAR_4; ++VAR_5 < VAR_6 && FUNC_5(VAR_8[VAR_5]););

 VAR_3 = FUNC_3(VAR_2);
 VAR_3->klen = VAR_6 = (VAR_5 - VAR_4);
 FUNC_0(VAR_2, VAR_3->keyw, VAR_3->keywlen, VAR_6+1);
 FUNC_2(VAR_3->keyw, VAR_8 + VAR_4, VAR_6);
 VAR_3->keyw[VAR_6] = '\0';
 return (0);
}
