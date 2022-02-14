
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int maxtcol; int type; int fontsz; unsigned int defrmargin; TYPE_1__* ps; int width; int setwidth; int letter; int hspan; int endline; int end; int begin; int advance; int fontl; int * fontq; int enc; void* tcols; void* tcol; } ;
struct manoutput {char* paper; } ;
typedef enum termtype { ____Placeholder_termtype } termtype ;
struct TYPE_2__ {char* medianame; int scale; size_t width; size_t lastwidth; size_t height; unsigned int header; unsigned int top; size_t footer; size_t bottom; size_t left; size_t lineheight; } ;


 void* FUNC_0 (struct termp*,double) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int * FUNC_2 (int *,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static struct termp *
FUNC_6(const struct manoutput *VAR_10, enum termtype VAR_11)
{
 struct termp *VAR_12;
 unsigned int VAR_13, VAR_14;
 size_t VAR_15, VAR_16, VAR_17;
 const char *VAR_18;

 VAR_12 = FUNC_1(1, sizeof(*VAR_12));
 VAR_12->tcol = VAR_12->tcols = FUNC_1(1, sizeof(*VAR_12->tcol));
 VAR_12->maxtcol = 1;
 VAR_12->type = VAR_11;

 VAR_12->enc = VAR_0;
 VAR_12->fontq = FUNC_2(((void*)0),
     (VAR_12->fontsz = 8), sizeof(*VAR_12->fontq));
 VAR_12->fontq[0] = VAR_12->fontl = VAR_1;
 VAR_12->ps = FUNC_1(1, sizeof(*VAR_12->ps));

 VAR_12->advance = VAR_2;
 VAR_12->begin = VAR_3;
 VAR_12->end = VAR_4;
 VAR_12->endline = VAR_5;
 VAR_12->hspan = VAR_6;
 VAR_12->letter = VAR_7;
 VAR_12->setwidth = VAR_8;
 VAR_12->width = VAR_9;



 VAR_12->ps->medianame = "Letter";
 VAR_13 = 216;
 VAR_14 = 279;
 VAR_18 = VAR_10->paper;
 if (VAR_18 != ((void*)0) && FUNC_4(VAR_18, "letter") != 0) {
  if (FUNC_4(VAR_18, "a3") == 0) {
   VAR_12->ps->medianame = "A3";
   VAR_13 = 297;
   VAR_14 = 420;
  } else if (FUNC_4(VAR_18, "a4") == 0) {
   VAR_12->ps->medianame = "A4";
   VAR_13 = 210;
   VAR_14 = 297;
  } else if (FUNC_4(VAR_18, "a5") == 0) {
   VAR_12->ps->medianame = "A5";
   VAR_13 = 148;
   VAR_14 = 210;
  } else if (FUNC_4(VAR_18, "legal") == 0) {
   VAR_12->ps->medianame = "Legal";
   VAR_13 = 216;
   VAR_14 = 356;
  } else if (FUNC_3(VAR_18, "%ux%u", &VAR_13, &VAR_14) == 2)
   VAR_12->ps->medianame = "CustomSize";
  else
   FUNC_5("%s: Unknown paper", VAR_18);
 }






 VAR_12->ps->scale = 11;



 VAR_13 = FUNC_0(VAR_12, ((double)VAR_13 * 72.0 / 25.4));
 VAR_14 = FUNC_0(VAR_12, ((double)VAR_14 * 72.0 / 25.4));



 VAR_15 = (size_t)((double)VAR_13 / 9.0);
 VAR_16 = (size_t)((double)VAR_14 / 9.0);



 VAR_17 = FUNC_0(VAR_12, ((double)VAR_12->ps->scale * 1.4));

 VAR_12->ps->width = VAR_12->ps->lastwidth = (size_t)VAR_13;
 VAR_12->ps->height = (size_t)VAR_14;
 VAR_12->ps->header = VAR_14 - (VAR_16 / 2) - (VAR_17 / 2);
 VAR_12->ps->top = VAR_14 - VAR_16;
 VAR_12->ps->footer = (VAR_16 / 2) - (VAR_17 / 2);
 VAR_12->ps->bottom = VAR_16;
 VAR_12->ps->left = VAR_15;
 VAR_12->ps->lineheight = VAR_17;

 VAR_12->defrmargin = VAR_13 - (VAR_15 * 2);
 return VAR_12;
}
