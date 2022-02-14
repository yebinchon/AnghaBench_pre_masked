
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int8_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_9__ {scalar_t__ usage; int kind; int pos; int report_size; int report_count; int flags; scalar_t__ usage_minimum; scalar_t__ usage_maximum; scalar_t__ _usage_page; scalar_t__ set_delimiter; scalar_t__ string_maximum; scalar_t__ string_minimum; scalar_t__ string_index; scalar_t__ designator_maximum; scalar_t__ designator_minimum; scalar_t__ designator_index; scalar_t__ unit; scalar_t__ unit_exponent; scalar_t__ physical_maximum; scalar_t__ physical_minimum; scalar_t__ logical_maximum; scalar_t__ logical_minimum; int collevel; scalar_t__ collection; } ;
typedef TYPE_1__ hid_item_t ;
typedef TYPE_2__* hid_data_t ;
struct TYPE_10__ {size_t pushlevel; scalar_t__ icount; scalar_t__ ncount; size_t iusage; size_t nusage; scalar_t__* usages_min; scalar_t__ ousage; scalar_t__ usage_last; scalar_t__* usages_max; int kindset; int* pos; int susage; scalar_t__ p; scalar_t__ end; int loc_count; int loc_size; TYPE_1__* cur; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(hid_data_t VAR_8, hid_item_t *VAR_9)
{
 hid_item_t *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;
 int32_t VAR_14;
 int32_t VAR_15;

 if (VAR_8 == ((void*)0))
  return (0);

 VAR_10 = &VAR_8->cur[VAR_8->pushlevel];

 top:

 if (VAR_8->icount < VAR_8->ncount) {

  if (VAR_8->iusage < VAR_8->nusage) {
   VAR_15 = VAR_8->usages_min[VAR_8->iusage] + VAR_8->ousage;
   VAR_10->usage = VAR_15;
   VAR_8->usage_last = VAR_15;
   if (VAR_15 == VAR_8->usages_max[VAR_8->iusage]) {
    VAR_8->iusage ++;
    VAR_8->ousage = 0;
   } else {
    VAR_8->ousage ++;
   }
  } else {

   VAR_15 = VAR_8->usage_last;
  }
  VAR_8->icount ++;




  if (VAR_8->kindset & (1 << VAR_10->kind)) {
   *VAR_9 = *VAR_10;
   VAR_9->pos = VAR_8->pos[VAR_10->kind];
   VAR_8->pos[VAR_10->kind] += VAR_10->report_size * VAR_10->report_count;
   return (1);
  }
 }


 VAR_8->icount = 0;
 VAR_8->ncount = 0;
 VAR_8->iusage = 0;
 VAR_8->nusage = 0;
 VAR_8->susage = 0;
 VAR_8->ousage = 0;
 FUNC_0(VAR_10);


 while (VAR_8->p != VAR_8->end) {

  VAR_13 = FUNC_1(VAR_8, 1);
  if (VAR_13 == 0xfe) {

   VAR_13 = FUNC_1(VAR_8, 1);
   VAR_13 |= FUNC_1(VAR_8, 1) << 8;
   VAR_11 = FUNC_1(VAR_8, 1);
   VAR_12 = 0xff;
  } else {

   VAR_11 = VAR_13 >> 4;
   VAR_12 = (VAR_13 >> 2) & 3;
   VAR_13 &= 3;
   if (VAR_13 == 3)
    VAR_13 = 4;
  }

  switch(VAR_13) {
  case 0:
   VAR_15 = 0;
   VAR_14 = 0;
   break;
  case 1:
   VAR_15 = (int8_t)FUNC_1(VAR_8, 1);
   VAR_14 = 0xFF;
   break;
  case 2:
   VAR_15 = FUNC_1(VAR_8, 1);
   VAR_15 |= FUNC_1(VAR_8, 1) << 8;
   VAR_15 = (int16_t)VAR_15;
   VAR_14 = 0xFFFF;
   break;
  case 4:
   VAR_15 = FUNC_1(VAR_8, 1);
   VAR_15 |= FUNC_1(VAR_8, 1) << 8;
   VAR_15 |= FUNC_1(VAR_8, 1) << 16;
   VAR_15 |= FUNC_1(VAR_8, 1) << 24;
   VAR_14 = 0xFFFFFFFF;
   break;
  default:
   VAR_15 = FUNC_1(VAR_8, VAR_13);
   continue;
  }

  switch (VAR_12) {
  case 0:
   switch (VAR_11) {
   case 8:
    VAR_10->kind = VAR_6;
    VAR_10->flags = VAR_15;
  ret:
    VAR_10->report_count = VAR_8->loc_count;
    VAR_10->report_size = VAR_8->loc_size;

    if (VAR_10->flags & VAR_0) {

     if (VAR_10->report_count > 255) {
      VAR_8->ncount = 255;
     } else
      VAR_8->ncount = VAR_10->report_count;





     VAR_10->report_count = 1;
     VAR_10->usage_minimum = 0;
     VAR_10->usage_maximum = 0;
    } else {
     VAR_8->ncount = 1;
    }
    goto top;

   case 9:
    VAR_10->kind = VAR_7;
    VAR_10->flags = VAR_15;
    goto ret;
   case 10:
    VAR_10->kind = VAR_3;
    VAR_10->collection = VAR_15;
    VAR_10->collevel++;
    VAR_10->usage = VAR_8->usage_last;
    *VAR_9 = *VAR_10;
    return (1);
   case 11:
    VAR_10->kind = VAR_5;
    VAR_10->flags = VAR_15;
    goto ret;
   case 12:
    VAR_10->kind = VAR_4;
    if (VAR_10->collevel == 0) {

     return (0);
    }
    VAR_10->collevel--;
    *VAR_9 = *VAR_10;
    return (1);
   default:
    break;
   }
   break;

  case 1:
   switch (VAR_11) {
   case 0:
    VAR_10->_usage_page = VAR_15 << 16;
    break;
   case 1:
    VAR_10->logical_minimum = VAR_15;
    break;
   case 2:
    VAR_10->logical_maximum = VAR_15;
    break;
   case 3:
    VAR_10->physical_minimum = VAR_15;
    break;
   case 4:
    VAR_10->physical_maximum = VAR_15;
    break;
   case 5:
    VAR_10->unit_exponent = VAR_15;
    break;
   case 6:
    VAR_10->unit = VAR_15;
    break;
   case 7:

    VAR_8->loc_size = VAR_15 & VAR_14;
    break;
   case 8:
    FUNC_2(VAR_8, VAR_10, VAR_15 & VAR_14);
    break;
   case 9:

    VAR_8->loc_count = VAR_15 & VAR_14;
    break;
   case 10:
    VAR_8->pushlevel ++;
    if (VAR_8->pushlevel < VAR_1) {
     VAR_8->cur[VAR_8->pushlevel] = *VAR_10;

     VAR_10->report_size = VAR_8->loc_size;
     VAR_10->report_count = VAR_8->loc_count;

     VAR_10 = &VAR_8->cur[VAR_8->pushlevel];
    }
    break;
   case 11:
    VAR_8->pushlevel --;
    if (VAR_8->pushlevel < VAR_1) {
     VAR_10 = &VAR_8->cur[VAR_8->pushlevel];

     VAR_8->loc_size = VAR_10->report_size;
     VAR_8->loc_count = VAR_10->report_count;
     VAR_10->report_size = 0;
     VAR_10->report_count = 0;
    }
    break;
   default:
    break;
   }
   break;
  case 2:
   switch (VAR_11) {
   case 0:
    if (VAR_13 != 4)
     VAR_15 = (VAR_15 & VAR_14) | VAR_10->_usage_page;


    VAR_8->usage_last = VAR_15;

    if (VAR_8->nusage < VAR_2) {
     VAR_8->usages_min[VAR_8->nusage] = VAR_15;
     VAR_8->usages_max[VAR_8->nusage] = VAR_15;
     VAR_8->nusage ++;
    }



    VAR_8->susage = 0;
    break;
   case 1:
    VAR_8->susage |= 1;

    if (VAR_13 != 4)
     VAR_15 = (VAR_15 & VAR_14) | VAR_10->_usage_page;
    VAR_10->usage_minimum = VAR_15;

    goto check_set;
   case 2:
    VAR_8->susage |= 2;

    if (VAR_13 != 4)
     VAR_15 = (VAR_15 & VAR_14) | VAR_10->_usage_page;
    VAR_10->usage_maximum = VAR_15;

   check_set:
    if (VAR_8->susage != 3)
     break;


    if ((VAR_8->nusage < VAR_2) &&
        (VAR_10->usage_minimum <= VAR_10->usage_maximum)) {

     VAR_8->usages_min[VAR_8->nusage] =
         VAR_10->usage_minimum;
     VAR_8->usages_max[VAR_8->nusage] =
         VAR_10->usage_maximum;
     VAR_8->nusage ++;
    }


    VAR_8->susage = 0;
    break;
   case 3:
    VAR_10->designator_index = VAR_15;
    break;
   case 4:
    VAR_10->designator_minimum = VAR_15;
    break;
   case 5:
    VAR_10->designator_maximum = VAR_15;
    break;
   case 7:
    VAR_10->string_index = VAR_15;
    break;
   case 8:
    VAR_10->string_minimum = VAR_15;
    break;
   case 9:
    VAR_10->string_maximum = VAR_15;
    break;
   case 10:
    VAR_10->set_delimiter = VAR_15;
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
 }
 return (0);
}
