
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int iter_idx; int inuse_count; TYPE_2__* tokens; } ;
typedef TYPE_1__ tokarray_t ;
struct TYPE_11__ {int type; char* string; int subtype; } ;
typedef TYPE_2__ tok_t ;
typedef int ocs_hw_t ;
struct TYPE_12__ {int inuse_count; scalar_t__ alloc_count; int rptcount_idx; int* rptcount; int * entry_counts; TYPE_4__* entries; } ;
typedef TYPE_3__ ocs_hw_qtop_t ;
struct TYPE_13__ {size_t entry; unsigned int len; unsigned int class; unsigned int ulp; int filter_mask; int set_default; } ;
typedef TYPE_4__ ocs_hw_qtop_entry_t ;
typedef int int32_t ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;







 int VAR_5 ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,int ,int ) ;
 void* FUNC_3 (int ) ;
 unsigned int FUNC_4 (int *,TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int32_t
FUNC_6(ocs_hw_t *VAR_6, tokarray_t *VAR_7, ocs_hw_qtop_t *VAR_8)
{
 ocs_hw_qtop_entry_t *VAR_9 = VAR_8->entries + VAR_8->inuse_count;
 tok_t *VAR_10;

 for (; (VAR_7->iter_idx < VAR_7->inuse_count) &&
      ((VAR_10 = &VAR_7->tokens[VAR_7->iter_idx]) != ((void*)0)); ) {
  if (VAR_8->inuse_count >= VAR_8->alloc_count) {
   return -1;
  }

  VAR_9 = VAR_8->entries + VAR_8->inuse_count;

  switch (VAR_10[0].type)
  {
  case 133:
   VAR_9->entry = FUNC_3(VAR_10[0].subtype);
   VAR_9->set_default = VAR_0;
   VAR_9->len = 0;
   VAR_9->class = 0;
   VAR_8->inuse_count++;

   VAR_7->iter_idx++;


   while ((VAR_7->iter_idx + 4) <= VAR_7->inuse_count) {
    VAR_10 = &VAR_7->tokens[VAR_7->iter_idx];
    if( (VAR_10[0].type == VAR_1) &&
     (VAR_10[1].type == 136) &&
     (VAR_10[2].type == VAR_2) &&
     ((VAR_10[3].type == 135) ||
      (VAR_10[3].type == 134) ||
      (VAR_10[3].type == VAR_4))) {

     switch (VAR_10[1].subtype) {
     case 129:
      VAR_9->len = FUNC_4(VAR_6, VAR_8, &VAR_10[3]);
      break;

     case 131:
      VAR_9->class = FUNC_4(VAR_6, VAR_8, &VAR_10[3]);
      break;

     case 128:
      VAR_9->ulp = FUNC_4(VAR_6, VAR_8, &VAR_10[3]);
      break;

     case 130:
      if (VAR_10[3].type == VAR_4) {
       uint32_t VAR_11 = 0;
       char *VAR_12 = VAR_10[3].string;

       while ((VAR_12 != ((void*)0)) && *VAR_12) {
        uint32_t VAR_13;

        VAR_13 = FUNC_2(VAR_12, 0, 0);
        if (VAR_13 < 32) {
         VAR_11 |= (1U << VAR_13);
        }

        VAR_12 = FUNC_1(VAR_12, ',');
        if (VAR_12 != ((void*)0)) {
         VAR_12++;
        }
       }
       VAR_9->filter_mask = VAR_11;
      } else {
       VAR_9->filter_mask = (1U << FUNC_4(VAR_6, VAR_8, &VAR_10[3]));
      }
      break;
     default:
      break;
     }

     VAR_7->iter_idx += 4;
    } else {
     break;
    }
   }
   VAR_8->entry_counts[VAR_9->entry]++;
   break;

  case 136:
   if ( ((VAR_7->iter_idx + 5) <= VAR_7->inuse_count) &&
    (VAR_10[1].type == VAR_1) &&
    (VAR_10[2].type == 133) &&
    (VAR_10[3].type == VAR_2) &&
    ((VAR_10[4].type == 135) || (VAR_10[4].type == 134))) {
    VAR_9->entry = FUNC_3(VAR_10[2].subtype);
    VAR_9->set_default = VAR_5;
    switch(VAR_10[0].subtype) {
    case 129:
     VAR_9->len = FUNC_4(VAR_6, VAR_8, &VAR_10[4]);
     break;
    case 131:
     VAR_9->class = FUNC_4(VAR_6, VAR_8, &VAR_10[4]);
     break;
    case 128:
     VAR_9->ulp = FUNC_4(VAR_6, VAR_8, &VAR_10[4]);
     break;
    default:
     break;
    }
    VAR_8->inuse_count++;
    VAR_7->iter_idx += 5;
   } else {
    FUNC_5(VAR_6, VAR_7);
    return -1;
   }
   break;

  case 135:
  case 134: {
   uint32_t VAR_14 = 1;
   uint32_t VAR_15;

   VAR_14 = FUNC_4(VAR_6, VAR_8, VAR_10);

   if (VAR_10[1].type == VAR_3) {
    uint32_t VAR_16;

    VAR_7->iter_idx += 2;


    VAR_16 = VAR_7->iter_idx;

    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
     uint32_t VAR_17 = VAR_8->rptcount_idx;

     if (VAR_8->rptcount_idx < FUNC_0(VAR_8->rptcount)) {
      VAR_8->rptcount[VAR_8->rptcount_idx++] = VAR_15;
     }


     VAR_7->iter_idx = VAR_16;


     FUNC_6(VAR_6, VAR_7, VAR_8);

     VAR_8->rptcount_idx = VAR_17;
    }
   }
   break;
  }

  case 132:
   VAR_7->iter_idx++;
   return 0;

  default:
   FUNC_5(VAR_6, VAR_7);
   return -1;
  }
 }
 return 0;
}
