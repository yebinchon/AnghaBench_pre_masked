
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {union node* ch2; } ;
struct TYPE_5__ {int * redirect; union node* n; } ;
struct TYPE_4__ {int backgnd; } ;
union node {scalar_t__ type; TYPE_3__ nbinary; TYPE_2__ nredir; TYPE_1__ npipe; } ;
struct nredir {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;




 union node* FUNC_0 () ;
 int VAR_7 ;
 int VAR_8 ;
 union node* FUNC_1 (int ,union node*,union node*) ;
 int FUNC_2 () ;
 size_t FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static union node *
FUNC_8(int VAR_11)
{
 union node *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 int VAR_16;

 VAR_7 = VAR_2 | VAR_1 | VAR_0;
 if (!VAR_11 && VAR_9[FUNC_3()])
  return ((void*)0);
 VAR_12 = VAR_13 = ((void*)0);
 for (;;) {
  VAR_14 = FUNC_0();
  VAR_16 = FUNC_5();
  if (VAR_16 == 131) {
   if (VAR_14 != ((void*)0) && VAR_14->type == VAR_4) {
    VAR_14->npipe.backgnd = 1;
   } else if (VAR_14 != ((void*)0) && VAR_14->type == VAR_5) {
    VAR_14->type = VAR_3;
   } else {
    VAR_15 = (union node *)FUNC_6(sizeof (struct nredir));
    VAR_15->type = VAR_3;
    VAR_15->nredir.n = VAR_14;
    VAR_15->nredir.redirect = ((void*)0);
    VAR_14 = VAR_15;
   }
  }
  if (VAR_12 == ((void*)0))
   VAR_12 = VAR_14;
  else if (VAR_13 == ((void*)0)) {
   VAR_13 = FUNC_1(VAR_6, VAR_12, VAR_14);
   VAR_12 = VAR_13;
  }
  else {
   VAR_15 = FUNC_1(VAR_6, VAR_13->nbinary.ch2, VAR_14);
   VAR_13->nbinary.ch2 = VAR_15;
   VAR_13 = VAR_15;
  }
  switch (VAR_16) {
  case 131:
  case 128:
   VAR_16 = FUNC_5();

  case 129:
   if (VAR_16 == 129) {
    FUNC_2();
    if (VAR_11)
     return VAR_12;
   } else if (VAR_16 == 130 && VAR_11) {
    FUNC_2();
    return VAR_12;
   } else {
    VAR_10++;
   }
   VAR_7 = VAR_2 | VAR_1 | VAR_0;
   if (!VAR_11 && VAR_9[FUNC_3()])
    return VAR_12;
   break;
  case 130:
   if (VAR_8)
    FUNC_2();
   else
    FUNC_4();
   return VAR_12;
  default:
   if (VAR_11)
    FUNC_7(-1);
   VAR_10++;
   return VAR_12;
  }
 }
}
