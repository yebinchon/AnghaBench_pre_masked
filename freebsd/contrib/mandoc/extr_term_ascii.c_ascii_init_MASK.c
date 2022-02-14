
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int maxtcol; int line; int defrmargin; int lastrmargin; int fontsz; int enc; int mdocstyle; int defindent; int synopsisonly; int width; int letter; int endline; int advance; int setwidth; int type; int hspan; int end; int begin; int fontl; int * fontq; void* tcols; void* tcol; } ;
struct manoutput {int indent; int width; scalar_t__ synopsisonly; scalar_t__ mdoc; } ;
typedef enum termenc { ____Placeholder_termenc } termenc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_1 (int,int) ;
 int * FUNC_2 (int *,int,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static struct termp *
FUNC_6(enum termenc VAR_22, const struct manoutput *VAR_23)
{



 struct termp *VAR_24;

 VAR_24 = FUNC_1(1, sizeof(*VAR_24));
 VAR_24->tcol = VAR_24->tcols = FUNC_1(1, sizeof(*VAR_24->tcol));
 VAR_24->maxtcol = 1;

 VAR_24->line = 1;
 VAR_24->defrmargin = VAR_24->lastrmargin = 78;
 VAR_24->fontq = FUNC_2(((void*)0),
      (VAR_24->fontsz = 8), sizeof(*VAR_24->fontq));
 VAR_24->fontq[0] = VAR_24->fontl = VAR_6;

 VAR_24->begin = VAR_11;
 VAR_24->end = VAR_12;
 VAR_24->hspan = VAR_14;
 VAR_24->type = VAR_7;

 VAR_24->enc = VAR_3;
 VAR_24->advance = VAR_10;
 VAR_24->endline = VAR_13;
 VAR_24->letter = VAR_15;
 VAR_24->setwidth = VAR_16;
 VAR_24->width = VAR_17;
 if (VAR_23->mdoc) {
  VAR_24->mdocstyle = 1;
  VAR_24->defindent = 5;
 }
 if (VAR_23->indent)
  VAR_24->defindent = VAR_23->indent;
 if (VAR_23->width)
  VAR_24->defrmargin = VAR_23->width;
 if (VAR_23->synopsisonly)
  VAR_24->synopsisonly = 1;

 FUNC_0(VAR_24->defindent < VAR_8);
 FUNC_0(VAR_24->defrmargin < VAR_8);
 return VAR_24;
}
