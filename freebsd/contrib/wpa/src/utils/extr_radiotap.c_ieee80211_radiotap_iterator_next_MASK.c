
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211_radiotap_iterator {int _arg_index; int _bitmap_shifter; int* _arg; int* _next_ns_data; int this_arg_index; int* this_arg; int this_arg_size; int _reset_on_ext; int is_radiotap_ns; int _next_bitmap; TYPE_2__* current_namespace; scalar_t__ _max_length; scalar_t__ _rtheader; } ;
struct TYPE_4__ {int n_bits; TYPE_1__* align_size; } ;
struct TYPE_3__ {int align; int size; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct ieee80211_radiotap_iterator*,int,int) ;
 int FUNC_1 (struct ieee80211_radiotap_iterator*,int*,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_2 ;

int FUNC_4(
 struct ieee80211_radiotap_iterator *VAR_3)
{
 while (1) {
  int VAR_4 = 0;
  int VAR_5, VAR_6, VAR_7, VAR_8;
  uint32_t VAR_9;


  if ((VAR_3->_arg_index % 32) == 130 &&
      !(VAR_3->_bitmap_shifter & 1))
   return -VAR_1;

  if (!(VAR_3->_bitmap_shifter & 1))
   goto next_entry;


  switch (VAR_3->_arg_index % 32) {
  case 129:
  case 130:
   VAR_6 = 1;
   VAR_7 = 0;
   break;
  case 128:
   VAR_6 = 2;
   VAR_7 = 6;
   break;
  default:





   if (!VAR_3->current_namespace ||
       VAR_3->_arg_index >= VAR_3->current_namespace->n_bits) {
    if (VAR_3->current_namespace == &VAR_2)
     return -VAR_1;
    VAR_6 = 0;
   } else {
    VAR_6 = VAR_3->current_namespace->align_size[VAR_3->_arg_index].align;
    VAR_7 = VAR_3->current_namespace->align_size[VAR_3->_arg_index].size;
   }
   if (!VAR_6) {

    VAR_3->_arg = VAR_3->_next_ns_data;

    VAR_3->current_namespace = ((void*)0);
    goto next_entry;
   }
   break;
  }
  VAR_5 = ((unsigned long)VAR_3->_arg -
         (unsigned long)VAR_3->_rtheader) & (VAR_6 - 1);

  if (VAR_5)
   VAR_3->_arg += VAR_6 - VAR_5;

  if (VAR_3->_arg_index % 32 == 128) {
   int VAR_10;

   if ((unsigned long)VAR_3->_arg + VAR_7 -
       (unsigned long)VAR_3->_rtheader >
       (unsigned long)VAR_3->_max_length)
    return -VAR_0;

   VAR_9 = (*VAR_3->_arg << 16) |
    (*(VAR_3->_arg + 1) << 8) |
    *(VAR_3->_arg + 2);
   VAR_8 = *(VAR_3->_arg + 3);

   FUNC_0(VAR_3, VAR_9, VAR_8);

   VAR_10 = FUNC_2(VAR_3->_arg + 4);
   VAR_3->_next_ns_data = VAR_3->_arg + VAR_7 + VAR_10;
   if (!VAR_3->current_namespace)
    VAR_7 += VAR_10;
  }





  VAR_3->this_arg_index = VAR_3->_arg_index;
  VAR_3->this_arg = VAR_3->_arg;
  VAR_3->this_arg_size = VAR_7;


  VAR_3->_arg += VAR_7;
  if ((unsigned long)VAR_3->_arg -
      (unsigned long)VAR_3->_rtheader >
      (unsigned long)VAR_3->_max_length)
   return -VAR_0;


  switch (VAR_3->_arg_index % 32) {
  case 128:
   VAR_3->_reset_on_ext = 1;

   VAR_3->is_radiotap_ns = 0;






   VAR_3->this_arg_index =
    128;
   if (!VAR_3->current_namespace)
    VAR_4 = 1;
   goto next_entry;
  case 129:
   VAR_3->_reset_on_ext = 1;
   VAR_3->current_namespace = &VAR_2;
   VAR_3->is_radiotap_ns = 1;
   goto next_entry;
  case 130:




   VAR_3->_bitmap_shifter =
    FUNC_3(VAR_3->_next_bitmap);
   VAR_3->_next_bitmap++;
   if (VAR_3->_reset_on_ext)
    VAR_3->_arg_index = 0;
   else
    VAR_3->_arg_index++;
   VAR_3->_reset_on_ext = 0;
   break;
  default:

   VAR_4 = 1;
 next_entry:
   VAR_3->_bitmap_shifter >>= 1;
   VAR_3->_arg_index++;
  }


  if (VAR_4)
   return 0;
 }
}
