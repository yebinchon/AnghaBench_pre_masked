
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* stackref; TYPE_3__* noderef; } ;
typedef TYPE_2__ yyyParent ;
struct TYPE_9__ {int prodNum; size_t whichSym; int parentIsStack; TYPE_2__ parent; } ;
typedef TYPE_3__ yyyGNT ;
struct TYPE_11__ {int whichSym; int wa; TYPE_3__* node; } ;
struct TYPE_10__ {long next; int attrbNum; } ;
struct TYPE_7__ {long solvedSAlist; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int* VAR_1 ;
 size_t* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_6__* VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 long VAR_9 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;

void FUNC_2() {
long VAR_10,*VAR_11;
int VAR_12,VAR_13;
yyyGNT *VAR_14,*VAR_15;
yyyParent VAR_16;


VAR_16 = (VAR_14 = VAR_5->node)->parent;
VAR_15= (VAR_12 = (VAR_5->whichSym))?VAR_16.noderef:VAR_14;
VAR_13 = VAR_5->wa;
VAR_5--;
switch(VAR_15->prodNum) {
case 1:
  switch (VAR_12) {
  }
break;
case 2:
  switch (VAR_12) {
  }
break;
case 3:
  switch (VAR_12) {
  }
break;
case 4:
  switch (VAR_12) {
  }
break;
case 5:
  switch (VAR_12) {
  }
break;
case 6:
  switch (VAR_12) {
  }
break;
case 7:
  switch (VAR_12) {
  case 1:
    switch (VAR_13) {
    }
  break;
  }
break;
case 8:
  switch (VAR_12) {
  case 1:
    switch (VAR_13) {
    }
  break;
  }
break;
}

if (VAR_12)
   {if (VAR_14->prodNum)
       {VAR_10 = VAR_1[VAR_2[VAR_14->prodNum]] + VAR_13;
        FUNC_1(VAR_14,VAR_0[VAR_10],
                                VAR_0[VAR_10+1]
                     );
       }
   }
   else
   {if (!(VAR_14->parentIsStack))
       {VAR_10 = VAR_1[VAR_2[VAR_16.noderef->prodNum] +
                          VAR_14->whichSym
                         ] +
                  VAR_13;
        FUNC_1(VAR_16.noderef,
                      VAR_0[VAR_10],
                      VAR_0[VAR_10+1]
                     );
       }
       else
       {VAR_11 = &(VAR_16.stackref->solvedSAlist);
        if (VAR_6 == VAR_3)
           {VAR_8[VAR_4].next = *VAR_11;
            if ((*VAR_11 = VAR_4++) == VAR_9)
               FUNC_0(VAR_7);
           }
           else
           {VAR_10 = VAR_6;
            VAR_6 = VAR_8[VAR_6].next;
            VAR_8[VAR_10].next = *VAR_11;
            *VAR_11 = VAR_10;
           }
        VAR_8[*VAR_11].attrbNum = VAR_13;
       }
   }

}
