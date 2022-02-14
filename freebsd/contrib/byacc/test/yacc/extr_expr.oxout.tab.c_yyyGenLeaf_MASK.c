
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* node; int solvedSAlist; } ;
typedef TYPE_3__ yyySIT ;
typedef scalar_t__ yyyRCT ;
struct TYPE_8__ {TYPE_3__* stackref; } ;
struct TYPE_10__ {int parentIsStack; int refCountListLen; scalar_t__ whichSym; scalar_t__ prodNum; scalar_t__* refCountList; struct TYPE_10__** cL; scalar_t__ cLlen; TYPE_2__ parent; } ;
typedef TYPE_4__ yyyGNT ;
struct TYPE_7__ {TYPE_3__* yyyOxStackItem; } ;
struct TYPE_11__ {TYPE_1__ yyyOxAttrbs; } ;
typedef TYPE_5__ YYSTYPE ;


 scalar_t__ FUNC_0 (size_t,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

void FUNC_3(int VAR_2,int VAR_3,long VAR_4,long VAR_5,YYSTYPE *VAR_6)
  {yyyRCT *VAR_7;
   yyySIT **VAR_8 = &VAR_6->yyyOxAttrbs.yyyOxStackItem;
   (*VAR_8) = (yyySIT *) FUNC_1((size_t)sizeof(yyySIT));
   if ((*VAR_8) == (yyySIT *) ((void*)0))
      FUNC_2("malloc error in ox yacc semantic stack space allocation\n");
   (*VAR_8)->node =
                          (yyyGNT *) FUNC_1((size_t)sizeof(yyyGNT))
                         ;
   if ((*VAR_8)->node == (yyyGNT *) ((void*)0))
      FUNC_2("malloc error in ox node space allocation\n");
   (*VAR_8)->solvedSAlist = VAR_1;
   (*VAR_8)->node->parent.stackref = *VAR_8;
   (*VAR_8)->node->parentIsStack = 1;
   (*VAR_8)->node->cLlen = 0;
   (*VAR_8)->node->cL = (yyyGNT **)((void*)0);
   (*VAR_8)->node->refCountListLen = VAR_2;
   VAR_7 = (*VAR_8)->node->refCountList =
            (yyyRCT *) FUNC_0((size_t)VAR_2, (size_t)sizeof(yyyRCT));
   if (VAR_7 == (yyyRCT *) ((void*)0))
      FUNC_2("malloc error in ox reference count list space allocation\n");
   while (VAR_4 < VAR_5) VAR_7[VAR_0[VAR_4++]] = 0;
   (*VAR_8)->node->prodNum = 0;
   (*VAR_8)->node->whichSym = 0;
  }
