
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_30__ {size_t len; int * bp; } ;
struct TYPE_29__ {int argc; TYPE_5__** argv; } ;
struct TYPE_28__ {TYPE_1__* gp; } ;
struct TYPE_27__ {int cno; scalar_t__ owrite; scalar_t__ len; int insert; int * lb; int lb_len; int offset; int ai; } ;
struct TYPE_26__ {int (* scr_bell ) (TYPE_3__*) ;} ;
typedef TYPE_2__ TEXT ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ EXCMD ;
typedef int CHAR_T ;
typedef TYPE_5__ ARGS ;


 int FUNC_0 (TYPE_3__*,int *,int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int *,int ) ;
 int FUNC_2 (TYPE_3__*,int *,int,char*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_4__*,int ) ;
 size_t FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_0 ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (TYPE_3__*,TYPE_4__*,int *,size_t) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*,int *,size_t) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_4__*,int *,size_t) ;
 int * FUNC_11 (TYPE_3__*,TYPE_4__*,int *,size_t) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (TYPE_3__*,TYPE_4__*,int ,int ,int ,int ,int ) ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,struct stat*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,int,TYPE_5__**) ;

__attribute__((used)) static int
FUNC_19(SCR *VAR_1, TEXT *VAR_2, int *VAR_3)
{
 struct stat VAR_4;
 ARGS **VAR_5;
 EXCMD VAR_6;
 size_t VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;
 CHAR_T *VAR_12, *VAR_13, *VAR_14;
 char *VAR_15, *VAR_16 = ((void*)0);
 size_t VAR_17;
 int VAR_18 = 1;

 *VAR_3 = 0;
 FUNC_13(VAR_1, &VAR_6, 0, 0, VAR_0, VAR_0, 0);





 if (VAR_2->cno == 1) {
  VAR_8 = 0;
  VAR_12 = VAR_2->lb;
 } else {
  CHAR_T *VAR_19;

  for (VAR_8 = 0,
      VAR_10 = FUNC_4(VAR_2->ai, VAR_2->offset), VAR_19 = VAR_2->lb + VAR_10, VAR_12 = VAR_19;
      VAR_10 < VAR_2->cno; ++VAR_10, ++VAR_19) {
   if (FUNC_3(VAR_1, &VAR_6, *VAR_19)) {
    if (++VAR_10 == VAR_2->cno)
     break;
    ++VAR_19;
    VAR_8 += 2;
   } else if (FUNC_12(*VAR_19)) {
    VAR_12 = VAR_19 + 1;
    if (VAR_8 > 0)
     VAR_18 = 0;
    VAR_8 = 0;
   } else
    ++VAR_8;
  }
 }





 if (VAR_18)
  (void)FUNC_9(VAR_1, &VAR_6, VAR_12, VAR_8);
 else {
  if ((VAR_14 = FUNC_11(VAR_1, &VAR_6, VAR_12, VAR_8)) == ((void*)0))
   return (1);
  if (FUNC_10(VAR_1, &VAR_6, VAR_14, FUNC_6(VAR_14))) {
   FUNC_1(VAR_1, VAR_14, 0);
   return (0);
  }
  FUNC_1(VAR_1, VAR_14, 0);
 }
 VAR_11 = VAR_6.argc;
 VAR_5 = VAR_6.argv;

 switch (VAR_11) {
 case 0:
  (void)VAR_1->gp->scr_bell(VAR_1);
  return (0);
 case 1:

  VAR_9 = FUNC_6(VAR_6.argv[0]->bp);
  break;
 default:
  *VAR_3 = 1;
  if (FUNC_18(VAR_1, VAR_11, VAR_5))
   return (1);


  for (VAR_9 = VAR_6.argv[0]->len; --VAR_11 > 0;) {
   if (VAR_6.argv[VAR_11]->len < VAR_9)
    VAR_9 = VAR_6.argv[VAR_11]->len;
   for (VAR_7 = 0; VAR_7 < VAR_9 &&
       VAR_6.argv[VAR_11]->bp[VAR_7] == VAR_6.argv[0]->bp[VAR_7];
       ++VAR_7);
   VAR_9 = VAR_7;
  }
  break;
 }


 if (VAR_18)
  VAR_14 = VAR_6.argv[0]->bp;
 else {
  if ((VAR_14 = FUNC_8(VAR_1, &VAR_6, VAR_6.argv[0]->bp, VAR_9)) == ((void*)0))
   return (1);
  VAR_9 = FUNC_6(VAR_14);
 }


 for (VAR_13 = VAR_14; VAR_8 > 0 && VAR_9 > 0; --VAR_8, --VAR_9)
  *VAR_12++ = *VAR_13++;


 if (VAR_8) {
  VAR_2->cno -= VAR_8;
  VAR_2->owrite += VAR_8;
 }


 for (; VAR_9 > 0 && VAR_2->owrite > 0; --VAR_9, --VAR_2->owrite, ++VAR_2->cno)
  *VAR_12++ = *VAR_13++;


 if (VAR_9) {
  VAR_10 = VAR_12 - VAR_2->lb;
  FUNC_0(VAR_1, VAR_2->lb, VAR_2->lb_len, VAR_2->len + VAR_9);
  VAR_12 = VAR_2->lb + VAR_10;

  VAR_2->cno += VAR_9;
  VAR_2->len += VAR_9;

  if (VAR_2->insert != 0)
   (void)FUNC_5(VAR_12 + VAR_9, VAR_12, VAR_2->insert);
  while (VAR_9--)
   *VAR_12++ = *VAR_13++;
 }

 if (!VAR_18)
  FUNC_1(VAR_1, VAR_14, 0);


 if (VAR_11 != 1 || VAR_18)
  return (0);


 FUNC_2(VAR_1, VAR_6.argv[0]->bp, VAR_6.argv[0]->len + 1, VAR_15, VAR_17);
 if ((VAR_16 = FUNC_14(VAR_15)) != ((void*)0))
  VAR_15 = VAR_16;
 if (!FUNC_16(VAR_15, &VAR_4) && FUNC_7(VAR_4.st_mode)) {
  if (VAR_2->owrite == 0) {
   VAR_10 = VAR_12 - VAR_2->lb;
   FUNC_0(VAR_1, VAR_2->lb, VAR_2->lb_len, VAR_2->len + 1);
   VAR_12 = VAR_2->lb + VAR_10;
   if (VAR_2->insert != 0)
    (void)FUNC_5(VAR_12 + 1, VAR_12, VAR_2->insert);
   ++VAR_2->len;
  } else
   --VAR_2->owrite;

  ++VAR_2->cno;
  *VAR_12++ = '/';
 }
 FUNC_15(VAR_16);
 return (0);
}
