
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct refclockstat {int flags; int haveflags; int fudgeval2; int fudgeval1; int fudgetime2; int fudgetime1; } ;
typedef int sockaddr_u ;
struct TYPE_8__ {int fudge; } ;
typedef TYPE_2__ config_tree ;
struct TYPE_7__ {int i; int s; int d; } ;
struct TYPE_9__ {int attr; TYPE_1__ value; struct TYPE_9__* link; } ;
typedef TYPE_3__ attr_val ;
struct TYPE_10__ {int address; } ;
typedef TYPE_4__ address_node ;
struct TYPE_11__ {int options; TYPE_4__* addr; struct TYPE_11__* link; } ;
typedef TYPE_5__ addr_opts_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_12 ;
 int FUNC_2 (struct refclockstat) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*,int ,...) ;
 int FUNC_9 (int *,struct refclockstat*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_13 ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(
 config_tree *VAR_14
 )
{
 addr_opts_node *VAR_15;
 attr_val *VAR_16;
 sockaddr_u VAR_17;
 address_node *VAR_18;
 struct refclockstat VAR_19;
 int VAR_20;

 VAR_15 = FUNC_0(VAR_14->fudge);
 for (; VAR_15 != ((void*)0); VAR_15 = VAR_15->link) {
  VAR_20 = 0;




  VAR_18 = VAR_15->addr;
  FUNC_3(&VAR_17);
  if (FUNC_5(VAR_18->address, &VAR_17, 1, VAR_13)
      != 1) {
   VAR_20 = 1;
   FUNC_8(VAR_12,
    "unrecognized fudge reference clock address %s, line ignored",
    VAR_18->address);
  } else if (!FUNC_1(&VAR_17)) {
   VAR_20 = 1;
   FUNC_8(VAR_12,
    "inappropriate address %s for the fudge command, line ignored",
    FUNC_10(&VAR_17));
  }


  FUNC_2(VAR_19);
  VAR_16 = FUNC_0(VAR_15->options);
  for (; VAR_16 != ((void*)0); VAR_16 = VAR_16->link) {
   switch (VAR_16->attr) {

   case 129:
    VAR_19.haveflags |= VAR_8;
    VAR_19.fudgetime1 = VAR_16->value.d;
    break;

   case 128:
    VAR_19.haveflags |= VAR_9;
    VAR_19.fudgetime2 = VAR_16->value.d;
    break;

   case 130:
    VAR_19.haveflags |= VAR_10;
    VAR_19.fudgeval1 = VAR_16->value.i;
    break;

   case 131:
    VAR_19.haveflags |= VAR_11;
    VAR_19.fudgeval2 = 0;
    FUNC_6(&VAR_19.fudgeval2,
           VAR_16->value.s,
           FUNC_7(FUNC_11(VAR_16->value.s), 4));
    break;

   case 135:
    VAR_19.haveflags |= VAR_4;
    if (VAR_16->value.i)
     VAR_19.flags |= VAR_0;
    else
     VAR_19.flags &= ~VAR_0;
    break;

   case 134:
    VAR_19.haveflags |= VAR_5;
    if (VAR_16->value.i)
     VAR_19.flags |= VAR_1;
    else
     VAR_19.flags &= ~VAR_1;
    break;

   case 133:
    VAR_19.haveflags |= VAR_6;
    if (VAR_16->value.i)
     VAR_19.flags |= VAR_2;
    else
     VAR_19.flags &= ~VAR_2;
    break;

   case 132:
    VAR_19.haveflags |= VAR_7;
    if (VAR_16->value.i)
     VAR_19.flags |= VAR_3;
    else
     VAR_19.flags &= ~VAR_3;
    break;

   default:
    FUNC_8(VAR_12,
     "Unexpected fudge flag %s (%d) for %s",
     FUNC_12(VAR_16->attr),
     VAR_16->attr, VAR_18->address);
    FUNC_4(VAR_16->attr ? VAR_16->attr : 1);
   }
  }




 }
}
