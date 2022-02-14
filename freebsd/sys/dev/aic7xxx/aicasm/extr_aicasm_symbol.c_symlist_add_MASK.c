
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int symlist_t ;
struct TYPE_15__ {TYPE_2__* rinfo; TYPE_1__* finfo; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_3__ info; } ;
typedef TYPE_4__ symbol_t ;
struct TYPE_17__ {TYPE_4__* symbol; } ;
typedef TYPE_5__ symbol_node_t ;
struct TYPE_14__ {scalar_t__ address; } ;
struct TYPE_13__ {scalar_t__ value; } ;




 int VAR_0 ;
 int VAR_1 ;




 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*,int ) ;
 int FUNC_2 (int *,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_3 (TYPE_5__*,int ) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(symlist_t *VAR_5, symbol_t *VAR_6, int VAR_7)
{
 symbol_node_t *VAR_8;

 VAR_8 = (symbol_node_t *)FUNC_4(sizeof(symbol_node_t));
 if (VAR_8 == ((void*)0)) {
  FUNC_5("symlist_add: Unable to malloc symbol_node", VAR_0);

 }
 VAR_8->symbol = VAR_6;
 if (VAR_7 == VAR_2) {
  symbol_node_t *VAR_9;
  int VAR_10;

  VAR_10 = VAR_1;
  switch(VAR_6->type) {
  case 130:
  case 129:
  case 128:
   break;
  case 132:
  case 131:
  case 134:
  case 133:
   VAR_10 = VAR_3;
   break;
  default:
   FUNC_5("symlist_add: Invalid symbol type for sorting",
        VAR_0);

  }

  VAR_9 = FUNC_0(VAR_5);
  if (VAR_9 == ((void*)0)
   || (VAR_10
    && (VAR_9->symbol->type > VAR_8->symbol->type
     || (VAR_9->symbol->type == VAR_8->symbol->type
      && (VAR_9->symbol->info.finfo->value >
   VAR_8->symbol->info.finfo->value))))
   || (!VAR_10 && (VAR_9->symbol->info.rinfo->address >
                 VAR_8->symbol->info.rinfo->address))) {
   FUNC_2(VAR_5, VAR_8, VAR_4);
   return;
  }

  while (1) {
   if (FUNC_3(VAR_9, VAR_4) == ((void*)0)) {
    FUNC_1(VAR_9, VAR_8,
         VAR_4);
    break;
   } else {
    symbol_t *VAR_11;

    VAR_11 = FUNC_3(VAR_9, VAR_4)->symbol;
    if ((VAR_10
        && (VAR_11->type > VAR_6->type
       || (VAR_11->type == VAR_6->type
        && (VAR_11->info.finfo->value >
     VAR_6->info.finfo->value))))
     || (!VAR_10
       && (VAR_11->info.rinfo->address >
           VAR_6->info.rinfo->address))) {
     FUNC_1(VAR_9, VAR_8,
          VAR_4);
     break;
    }
   }
   VAR_9 = FUNC_3(VAR_9, VAR_4);
  }
 } else {
  FUNC_2(VAR_5, VAR_8, VAR_4);
 }
}
