
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct parse {scalar_t__ next; scalar_t__ end; scalar_t__ error; TYPE_1__* g; } ;
struct TYPE_15__ {int * multis; } ;
typedef TYPE_2__ cset ;
struct TYPE_14__ {int cflags; int csetsize; } ;
typedef char RCHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char,int ) ;
 int FUNC_8 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_9 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (char,char) ;
 TYPE_2__* FUNC_11 (struct parse*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct parse*,TYPE_2__*) ;
 int FUNC_14 (struct parse*,TYPE_2__*) ;
 int FUNC_15 (struct parse*,TYPE_2__*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct parse*,TYPE_2__*) ;
 int FUNC_18 (struct parse*,TYPE_2__*) ;
 int FUNC_19 (struct parse*,TYPE_2__*) ;
 int FUNC_20 (struct parse*,int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (struct parse*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_23(struct parse *VAR_6)
{
 cset *VAR_7;
 int VAR_8 = 0;
 static RCHAR_T VAR_9[] = { '[', ':', '<', ':', ']', ']' };
 static RCHAR_T VAR_10[] = { '[', ':', '>', ':', ']', ']' };

 VAR_7 = FUNC_11(VAR_6);
 if (VAR_7 == ((void*)0))
  return;


 if (VAR_6->next + 5 < VAR_6->end && FUNC_5(VAR_6->next, VAR_9, 6) == 0) {
  FUNC_4(VAR_1, 0);
  FUNC_8(6);
  return;
 }
 if (VAR_6->next + 5 < VAR_6->end && FUNC_5(VAR_6->next, VAR_10, 6) == 0) {
  FUNC_4(VAR_2, 0);
  FUNC_8(6);
  return;
 }

 if (FUNC_3('^'))
  VAR_8++;
 if (FUNC_3(']'))
  FUNC_1(VAR_7, ']');
 else if (FUNC_3('-'))
  FUNC_1(VAR_7, '-');
 while (FUNC_6() && FUNC_9() != ']' && !FUNC_10('-', ']'))
  FUNC_22(VAR_6, VAR_7);
 if (FUNC_3('-'))
  FUNC_1(VAR_7, '-');
 (void)FUNC_7(']', VAR_3);

 if (VAR_6->error != 0)
  return;

 if (VAR_6->g->cflags&VAR_4) {
  int VAR_11;
  int VAR_12;

  for (VAR_11 = VAR_6->g->csetsize - 1; VAR_11 >= 0; VAR_11--)
   if (FUNC_0(VAR_7, VAR_11) && FUNC_16(VAR_11)) {
    VAR_12 = FUNC_21(VAR_11);
    if (VAR_12 != VAR_11)
     FUNC_1(VAR_7, VAR_12);
   }
  if (VAR_7->multis != ((void*)0))
   FUNC_17(VAR_6, VAR_7);
 }
 if (VAR_8) {
  int VAR_13;

  for (VAR_13 = VAR_6->g->csetsize - 1; VAR_13 >= 0; VAR_13--)
   if (FUNC_0(VAR_7, VAR_13))
    FUNC_2(VAR_7, VAR_13);
   else
    FUNC_1(VAR_7, VAR_13);
  if (VAR_6->g->cflags&VAR_5)
   FUNC_2(VAR_7, '\n');
  if (VAR_7->multis != ((void*)0))
   FUNC_18(VAR_6, VAR_7);
 }

 FUNC_12(VAR_7->multis == ((void*)0));

 if (FUNC_19(VAR_6, VAR_7) == 1) {
  FUNC_20(VAR_6, FUNC_13(VAR_6, VAR_7));
  FUNC_14(VAR_6, VAR_7);
 } else
  FUNC_4(VAR_0, FUNC_15(VAR_6, VAR_7));
}
