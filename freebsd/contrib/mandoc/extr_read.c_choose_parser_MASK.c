
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mparse {TYPE_4__* man; TYPE_1__* primary; int roff; } ;
struct TYPE_7__ {TYPE_2__* first; int macroset; } ;
struct TYPE_8__ {TYPE_3__ meta; int * manmac; int * mdocmac; } ;
struct TYPE_6__ {int tok; } ;
struct TYPE_5__ {char* buf; int sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (char*,char,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct mparse *VAR_9)
{
 char *VAR_10, *VAR_11;
 int VAR_12;







 if ((VAR_12 = FUNC_1(VAR_9->roff)) == 0) {
  VAR_10 = VAR_9->primary->buf;
  VAR_11 = VAR_10 + VAR_9->primary->sz;
  while (VAR_10 < VAR_11) {
   if (*VAR_10 == '.' || *VAR_10 == '\'') {
    VAR_10++;
    if (VAR_10[0] == 'D' && VAR_10[1] == 'd') {
     VAR_12 = VAR_7;
     break;
    }
    if (VAR_10[0] == 'T' && VAR_10[1] == 'H') {
     VAR_12 = VAR_6;
     break;
    }
   }
   VAR_10 = FUNC_0(VAR_10, '\n', VAR_11 - VAR_10);
   if (VAR_10 == ((void*)0))
    break;
   VAR_10++;
  }
 }

 if (VAR_12 == VAR_7) {
  VAR_9->man->meta.macroset = VAR_1;
  if (VAR_9->man->mdocmac == ((void*)0))
   VAR_9->man->mdocmac = FUNC_2(VAR_4, VAR_5);
 } else {
  VAR_9->man->meta.macroset = VAR_0;
  if (VAR_9->man->manmac == ((void*)0))
   VAR_9->man->manmac = FUNC_2(VAR_3, VAR_2);
 }
 VAR_9->man->meta.first->tok = VAR_8;
}
