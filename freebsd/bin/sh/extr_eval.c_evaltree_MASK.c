
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {union node* com; } ;
struct TYPE_9__ {int next; int text; } ;
struct TYPE_8__ {union node* next; union node* body; } ;
struct TYPE_7__ {union node* elsepart; union node* ifpart; union node* test; } ;
struct TYPE_6__ {union node* ch2; union node* ch1; } ;
union node {int type; TYPE_5__ nnot; TYPE_4__ narg; TYPE_3__ nclist; TYPE_2__ nif; TYPE_1__ nbinary; } ;
struct stackmark {int dummy; } ;
struct backcmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 union node* FUNC_3 (union node*) ;
 int FUNC_4 (union node*,int,struct backcmd*) ;
 int FUNC_5 (union node*,int) ;
 int FUNC_6 (union node*,int) ;
 int FUNC_7 (union node*) ;
 int FUNC_8 (union node*,int) ;
 int VAR_5 ;
 int FUNC_9 (union node*,int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (struct stackmark*) ;
 int FUNC_15 (struct stackmark*) ;

void
FUNC_16(union node *VAR_9, int VAR_10)
{
 int VAR_11;
 union node *VAR_12;
 struct stackmark VAR_13;

 FUNC_15(&VAR_13);
 VAR_11 = 0;
 if (VAR_9 == ((void*)0)) {
  FUNC_0(("evaltree(NULL) called\n"));
  VAR_6 = 0;
  goto out;
 }
 do {
  VAR_12 = ((void*)0);

  VAR_3 = 1;

  FUNC_0(("evaltree(%p: %d) called\n", (void )VAR_9, VAR_9->type));
  switch (VAR_9->type) {
  case 131:
   FUNC_16(VAR_9->nbinary.ch1, VAR_10 & ~VAR_0);
   if (VAR_5)
    goto out;
   VAR_12 = VAR_9->nbinary.ch2;
   break;
  case 144:
   FUNC_16(VAR_9->nbinary.ch1, VAR_1);
   if (VAR_5 || VAR_6 != 0) {
    goto out;
   }
   VAR_12 = VAR_9->nbinary.ch2;
   break;
  case 134:
   FUNC_16(VAR_9->nbinary.ch1, VAR_1);
   if (VAR_5 || VAR_6 == 0)
    goto out;
   VAR_12 = VAR_9->nbinary.ch2;
   break;
  case 132:
   FUNC_8(VAR_9, VAR_10);
   break;
  case 130:
   FUNC_9(VAR_9, VAR_10);
   VAR_11 = !(VAR_10 & VAR_1);
   break;
  case 143:
   FUNC_9(VAR_9, VAR_10);
   break;
  case 136: {
   FUNC_16(VAR_9->nif.test, VAR_1);
   if (VAR_5)
    goto out;
   if (VAR_6 == 0)
    VAR_12 = VAR_9->nif.ifpart;
   else if (VAR_9->nif.elsepart)
    VAR_12 = VAR_9->nif.elsepart;
   else
    VAR_6 = 0;
   break;
  }
  case 128:
  case 129:
   FUNC_6(VAR_9, VAR_10 & ~VAR_0);
   break;
  case 137:
   FUNC_5(VAR_9, VAR_10 & ~VAR_0);
   break;
  case 142:
   VAR_12 = FUNC_3(VAR_9);
   break;
  case 141:
   VAR_12 = VAR_9->nclist.body;
   break;
  case 140:
   if (VAR_9->nclist.body) {
    FUNC_16(VAR_9->nclist.body, VAR_10 & ~VAR_0);
    if (VAR_5)
     goto out;
   }
   VAR_12 = VAR_9->nclist.next;
   break;
  case 138:
   FUNC_1(VAR_9->narg.text, VAR_9->narg.next);
   VAR_6 = 0;
   break;
  case 135:
   FUNC_16(VAR_9->nnot.com, VAR_1);
   if (VAR_5)
    goto out;
   VAR_6 = !VAR_6;
   break;

  case 133:
   FUNC_7(VAR_9);
   VAR_11 = !(VAR_10 & VAR_1);
   break;
  case 139:
   FUNC_4(VAR_9, VAR_10, (struct backcmd *)((void*)0));
   VAR_11 = !(VAR_10 & VAR_1);
   break;
  default:
   FUNC_13("Node type = %d\n", VAR_9->type);
   FUNC_12(&VAR_7);
   break;
  }
  VAR_9 = VAR_12;
  FUNC_14(&VAR_13);
  FUNC_15(&VAR_13);
 } while (VAR_9 != ((void*)0));
out:
 FUNC_14(&VAR_13);
 if (VAR_8)
  FUNC_2();
 if (VAR_4 && VAR_6 != 0 && VAR_11)
  FUNC_10(VAR_6);
 if (VAR_10 & VAR_0)
  FUNC_11(VAR_2);
}
