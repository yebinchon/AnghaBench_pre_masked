
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag {int closed; size_t tag; scalar_t__ refcnt; int next; } ;
struct html {int tag; int noindent; int indent; struct tag* tblt; struct tag* metaf; } ;
struct TYPE_2__ {int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tag*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct html*,char) ;
 int FUNC_2 (struct html*) ;
 int FUNC_3 (struct html*) ;
 int FUNC_4 (struct html*,int ) ;

__attribute__((used)) static void
FUNC_5(struct html *VAR_5, struct tag *VAR_6)
{
 int VAR_7;

 if (VAR_6->closed == 0) {
  VAR_6->closed = 1;
  if (VAR_6 == VAR_5->metaf)
   VAR_5->metaf = ((void*)0);
  if (VAR_6 == VAR_5->tblt)
   VAR_5->tblt = ((void*)0);

  VAR_7 = VAR_4[VAR_6->tag].flags;
  if (VAR_7 & VAR_0)
   VAR_5->indent--;
  if (VAR_7 & VAR_3)
   VAR_5->noindent--;
  if (VAR_7 & VAR_2)
   FUNC_2(VAR_5);
  FUNC_3(VAR_5);
  FUNC_1(VAR_5, '<');
  FUNC_1(VAR_5, '/');
  FUNC_4(VAR_5, VAR_4[VAR_6->tag].name);
  FUNC_1(VAR_5, '>');
  if (VAR_7 & VAR_1)
   FUNC_2(VAR_5);
 }
 if (VAR_6->refcnt == 0) {
  VAR_5->tag = VAR_6->next;
  FUNC_0(VAR_6);
 }
}
