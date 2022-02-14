
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int pos; int size; int count; } ;
struct hid_item {scalar_t__ usage; int kind; int flags; scalar_t__ _usage_page; scalar_t__ usage_minimum; scalar_t__ usage_maximum; scalar_t__ set_delimiter; scalar_t__ string_maximum; scalar_t__ string_minimum; scalar_t__ string_index; scalar_t__ designator_maximum; scalar_t__ designator_minimum; scalar_t__ designator_index; TYPE_1__ loc; scalar_t__ unit; scalar_t__ unit_exponent; scalar_t__ physical_maximum; scalar_t__ physical_minimum; scalar_t__ logical_maximum; scalar_t__ logical_minimum; int collevel; scalar_t__ collection; } ;
struct hid_data {size_t pushlevel; scalar_t__ icount; scalar_t__ ncount; size_t iusage; size_t nusage; scalar_t__* usages_min; scalar_t__ ousage; scalar_t__ usage_last; scalar_t__* usages_max; int kindset; int susage; scalar_t__ p; scalar_t__ end; int loc_count; int loc_size; struct hid_item* cur; } ;
typedef scalar_t__ int8_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct hid_item*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct hid_data*,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct hid_data*,struct hid_item*,scalar_t__) ;

int
FUNC_4(struct hid_data *VAR_9, struct hid_item *VAR_10)
{
 struct hid_item *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15;
 int32_t VAR_16;
 int32_t VAR_17;

 if (VAR_9 == ((void*)0))
  return (0);

 VAR_11 = &VAR_9->cur[VAR_9->pushlevel];

 top:

 if (VAR_9->icount < VAR_9->ncount) {

  if (VAR_9->iusage < VAR_9->nusage) {
   VAR_17 = VAR_9->usages_min[VAR_9->iusage] + VAR_9->ousage;
   VAR_11->usage = VAR_17;
   VAR_9->usage_last = VAR_17;
   if (VAR_17 == VAR_9->usages_max[VAR_9->iusage]) {
    VAR_9->iusage ++;
    VAR_9->ousage = 0;
   } else {
    VAR_9->ousage ++;
   }
  } else {
   FUNC_0(1, "Using last usage\n");
   VAR_17 = VAR_9->usage_last;
  }
  VAR_9->icount ++;




  if (VAR_9->kindset & (1 << VAR_11->kind)) {
   *VAR_10 = *VAR_11;
   FUNC_0(1, "%u,%u,%u\n", VAR_10->loc.pos,
       VAR_10->loc.size, VAR_10->loc.count);
   VAR_11->loc.pos += VAR_11->loc.size * VAR_11->loc.count;
   return (1);
  }
 }


 VAR_9->icount = 0;
 VAR_9->ncount = 0;
 VAR_9->iusage = 0;
 VAR_9->nusage = 0;
 VAR_9->susage = 0;
 VAR_9->ousage = 0;
 FUNC_1(VAR_11);


 while (VAR_9->p != VAR_9->end) {

  VAR_14 = FUNC_2(VAR_9, 1);
  if (VAR_14 == 0xfe) {

   VAR_14 = FUNC_2(VAR_9, 1);
   VAR_14 |= FUNC_2(VAR_9, 1) << 8;
   VAR_12 = FUNC_2(VAR_9, 1);
   VAR_13 = 0xff;
  } else {

   VAR_12 = VAR_14 >> 4;
   VAR_13 = (VAR_14 >> 2) & 3;
   VAR_14 &= 3;
   if (VAR_14 == 3)
    VAR_14 = 4;
  }
  switch (VAR_14) {
  case 0:
   VAR_17 = 0;
   VAR_16 = 0;
   break;
  case 1:
   VAR_17 = (int8_t)FUNC_2(VAR_9, 1);
   VAR_16 = 0xFF;
   break;
  case 2:
   VAR_17 = FUNC_2(VAR_9, 1);
   VAR_17 |= FUNC_2(VAR_9, 1) << 8;
   VAR_17 = (int16_t)VAR_17;
   VAR_16 = 0xFFFF;
   break;
  case 4:
   VAR_17 = FUNC_2(VAR_9, 1);
   VAR_17 |= FUNC_2(VAR_9, 1) << 8;
   VAR_17 |= FUNC_2(VAR_9, 1) << 16;
   VAR_17 |= FUNC_2(VAR_9, 1) << 24;
   VAR_16 = 0xFFFFFFFF;
   break;
  default:
   VAR_17 = FUNC_2(VAR_9, VAR_14);
   FUNC_0(0, "bad length %u (data=0x%02x)\n",
       VAR_14, VAR_17);
   continue;
  }

  switch (VAR_13) {
  case 0:
   switch (VAR_12) {
   case 8:
    VAR_11->kind = VAR_7;
  ret:
    VAR_11->flags = VAR_17;
    VAR_11->loc.count = VAR_9->loc_count;
    VAR_11->loc.size = VAR_9->loc_size;

    if (VAR_11->flags & VAR_0) {

     if (VAR_11->loc.count > VAR_1) {
      FUNC_0(0, "Number of "
          "items(%u) truncated to %u\n",
          (unsigned)(VAR_11->loc.count),
          VAR_1);
      VAR_9->ncount = VAR_1;
     } else
      VAR_9->ncount = VAR_11->loc.count;





     VAR_11->loc.count = 1;
    } else {
     VAR_9->ncount = 1;
    }
    goto top;

   case 9:
    VAR_11->kind = VAR_8;
    goto ret;
   case 10:
    VAR_11->kind = VAR_4;
    VAR_11->collection = VAR_17;
    VAR_11->collevel++;
    VAR_11->usage = VAR_9->usage_last;
    *VAR_10 = *VAR_11;
    return (1);
   case 11:
    VAR_11->kind = VAR_6;
    goto ret;
   case 12:
    VAR_11->kind = VAR_5;
    if (VAR_11->collevel == 0) {
     FUNC_0(0, "invalid end collection\n");
     return (0);
    }
    VAR_11->collevel--;
    *VAR_10 = *VAR_11;
    return (1);
   default:
    FUNC_0(0, "Main bTag=%d\n", VAR_12);
    break;
   }
   break;
  case 1:
   switch (VAR_12) {
   case 0:
    VAR_11->_usage_page = VAR_17 << 16;
    break;
   case 1:
    VAR_11->logical_minimum = VAR_17;
    break;
   case 2:
    VAR_11->logical_maximum = VAR_17;
    break;
   case 3:
    VAR_11->physical_minimum = VAR_17;
    break;
   case 4:
    VAR_11->physical_maximum = VAR_17;
    break;
   case 5:
    VAR_11->unit_exponent = VAR_17;
    break;
   case 6:
    VAR_11->unit = VAR_17;
    break;
   case 7:

    VAR_9->loc_size = VAR_17 & VAR_16;
    break;
   case 8:
    FUNC_3(VAR_9, VAR_11, VAR_17 & VAR_16);
    break;
   case 9:

    VAR_9->loc_count = VAR_17 & VAR_16;
    break;
   case 10:
    VAR_9->pushlevel ++;
    if (VAR_9->pushlevel < VAR_2) {
     VAR_9->cur[VAR_9->pushlevel] = *VAR_11;

     VAR_11->loc.size = VAR_9->loc_size;
     VAR_11->loc.count = VAR_9->loc_count;

     VAR_11 = &VAR_9->cur[VAR_9->pushlevel];
    } else {
     FUNC_0(0, "Cannot push "
         "item @ %d\n", VAR_9->pushlevel);
    }
    break;
   case 11:
    VAR_9->pushlevel --;
    if (VAR_9->pushlevel < VAR_2) {

     VAR_15 = VAR_11->loc.pos;
     VAR_11 = &VAR_9->cur[VAR_9->pushlevel];

     VAR_9->loc_size = VAR_11->loc.size;
     VAR_9->loc_count = VAR_11->loc.count;

     VAR_11->loc.pos = VAR_15;
     VAR_11->loc.size = 0;
     VAR_11->loc.count = 0;
    } else {
     FUNC_0(0, "Cannot pop "
         "item @ %d\n", VAR_9->pushlevel);
    }
    break;
   default:
    FUNC_0(0, "Global bTag=%d\n", VAR_12);
    break;
   }
   break;
  case 2:
   switch (VAR_12) {
   case 0:
    if (VAR_14 != 4)
     VAR_17 = (VAR_17 & VAR_16) | VAR_11->_usage_page;


    VAR_9->usage_last = VAR_17;

    if (VAR_9->nusage < VAR_3) {
     VAR_9->usages_min[VAR_9->nusage] = VAR_17;
     VAR_9->usages_max[VAR_9->nusage] = VAR_17;
     VAR_9->nusage ++;
    } else {
     FUNC_0(0, "max usage reached\n");
    }


    VAR_9->susage = 0;
    break;
   case 1:
    VAR_9->susage |= 1;

    if (VAR_14 != 4)
     VAR_17 = (VAR_17 & VAR_16) | VAR_11->_usage_page;
    VAR_11->usage_minimum = VAR_17;

    goto check_set;
   case 2:
    VAR_9->susage |= 2;

    if (VAR_14 != 4)
     VAR_17 = (VAR_17 & VAR_16) | VAR_11->_usage_page;
    VAR_11->usage_maximum = VAR_17;

   check_set:
    if (VAR_9->susage != 3)
     break;


    if ((VAR_9->nusage < VAR_3) &&
        (VAR_11->usage_minimum <= VAR_11->usage_maximum)) {

     VAR_9->usages_min[VAR_9->nusage] =
         VAR_11->usage_minimum;
     VAR_9->usages_max[VAR_9->nusage] =
         VAR_11->usage_maximum;
     VAR_9->nusage ++;
    } else {
     FUNC_0(0, "Usage set dropped\n");
    }
    VAR_9->susage = 0;
    break;
   case 3:
    VAR_11->designator_index = VAR_17;
    break;
   case 4:
    VAR_11->designator_minimum = VAR_17;
    break;
   case 5:
    VAR_11->designator_maximum = VAR_17;
    break;
   case 7:
    VAR_11->string_index = VAR_17;
    break;
   case 8:
    VAR_11->string_minimum = VAR_17;
    break;
   case 9:
    VAR_11->string_maximum = VAR_17;
    break;
   case 10:
    VAR_11->set_delimiter = VAR_17;
    break;
   default:
    FUNC_0(0, "Local bTag=%d\n", VAR_12);
    break;
   }
   break;
  default:
   FUNC_0(0, "default bType=%d\n", VAR_13);
   break;
  }
 }
 return (0);
}
