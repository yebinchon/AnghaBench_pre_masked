
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int u_long ;
typedef int buf ;
struct TYPE_27__ {int (* scr_addstr ) (TYPE_2__*,char const*,size_t) ;int (* scr_move ) (TYPE_2__*,int ,size_t) ;int (* scr_clrtoeol ) (TYPE_2__*) ;} ;
struct TYPE_26__ {int cols; size_t showmode; int ep; scalar_t__ lno; TYPE_1__* frp; TYPE_3__* gp; } ;
struct TYPE_25__ {int name; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;
typedef char CHAR_T ;


 int FUNC_0 (TYPE_2__*,int ,scalar_t__,char*,size_t) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 size_t FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 (TYPE_2__*,char) ;
 char* FUNC_5 (TYPE_2__*,char) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_8 (TYPE_2__*,char* const,size_t*) ;
 size_t FUNC_9 (char*,int,char*,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int ,size_t) ;
 int FUNC_12 (TYPE_2__*,char*,int) ;
 int FUNC_13 (TYPE_2__*,char const*,size_t) ;
 int FUNC_14 (TYPE_2__*,char*,int) ;
 int FUNC_15 (TYPE_2__*,char*,int) ;
 int FUNC_16 (TYPE_2__*,char*,size_t) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,int ,size_t) ;
 int FUNC_19 (TYPE_2__*,char*,int) ;
 int FUNC_20 (TYPE_2__*,char*,size_t) ;
 int FUNC_21 (TYPE_2__*,int ,size_t) ;
 int FUNC_22 (TYPE_2__*,size_t*) ;

__attribute__((used)) static void
FUNC_23(SCR *VAR_3)
{
 static char * const VAR_4[] = {
  "215|Append",
  "216|Change",
  "217|Command",
  "218|Insert",
  "219|Replace",
 };
 GS *VAR_5;
 size_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 const char *VAR_12 = ((void*)0);
 int VAR_13;
 char VAR_14[20];

 VAR_5 = VAR_3->gp;
 (void)VAR_5->scr_move(VAR_3, FUNC_6(VAR_3), 0);


 VAR_8 = 0;
 if (FUNC_2(VAR_3)) {
  CHAR_T *VAR_15, *VAR_16;
  size_t VAR_17;

  FUNC_0(VAR_3, VAR_3->frp->name, FUNC_10(VAR_3->frp->name) + 1, VAR_15, VAR_17);
  VAR_16 = VAR_15 + VAR_17;
  for (VAR_13 = 0, VAR_6 = VAR_3->cols / 2; --VAR_16 > VAR_15;) {
   if (*VAR_16 == '/') {
    ++VAR_16;
    break;
   }
   if ((VAR_8 += FUNC_3(VAR_3, *VAR_16)) > VAR_6) {
    VAR_13 = 3;
    VAR_8 +=
        FUNC_4(VAR_3, '.') * 3 + FUNC_4(VAR_3, ' ');
    while (VAR_8 > VAR_6) {
     ++VAR_16;
     VAR_8 -= FUNC_3(VAR_3, *VAR_16);
    }
    break;
   }
  }
  if (VAR_13) {
   while (VAR_13--)
    (void)VAR_5->scr_addstr(VAR_3,
        FUNC_5(VAR_3, '.'), FUNC_4(VAR_3, '.'));
   (void)VAR_5->scr_addstr(VAR_3,
       FUNC_5(VAR_3, ' '), FUNC_4(VAR_3, ' '));
  }
  for (; *VAR_16 != '\0'; ++VAR_16)
   (void)VAR_5->scr_addstr(VAR_3,
       FUNC_5(VAR_3, *VAR_16), FUNC_3(VAR_3, *VAR_16));
 }


 (void)VAR_5->scr_clrtoeol(VAR_3);
 VAR_6 = VAR_3->cols - 1;
 if (FUNC_7(VAR_3, VAR_1)) {
  FUNC_22(VAR_3, &VAR_7);
  VAR_10 = FUNC_9(VAR_14, sizeof(VAR_14), "%lu,%lu",
      (u_long)VAR_3->lno, (u_long)(VAR_7 + 1));

  VAR_11 = (VAR_6 - ((VAR_10 + 1) / 2)) / 2;
  if (VAR_8 < VAR_11) {
   (void)VAR_5->scr_move(VAR_3, FUNC_6(VAR_3), VAR_11);
   VAR_8 += VAR_10;
  } else if (VAR_8 + 2 + VAR_10 < VAR_6) {
   (void)VAR_5->scr_addstr(VAR_3, "  ", 2);
   VAR_8 += 2 + VAR_10;
  }
  (void)VAR_5->scr_addstr(VAR_3, VAR_14, VAR_10);
 }







 VAR_9 = VAR_6;
 if (FUNC_7(VAR_3, VAR_2)) {
  if (FUNC_1(VAR_3->ep, VAR_0))
   --VAR_9;
  VAR_12 = FUNC_8(VAR_3, VAR_4[VAR_3->showmode], &VAR_10);
  VAR_9 -= VAR_10;
 }

 if (VAR_9 > VAR_8 + 2) {
  (void)VAR_5->scr_move(VAR_3, FUNC_6(VAR_3), VAR_9);
  if (FUNC_7(VAR_3, VAR_2)) {
   if (FUNC_1(VAR_3->ep, VAR_0))
    (void)VAR_5->scr_addstr(VAR_3,
        FUNC_5(VAR_3, '*'), FUNC_4(VAR_3, '*'));
   (void)VAR_5->scr_addstr(VAR_3, VAR_12, VAR_10);
  }
 }
}
