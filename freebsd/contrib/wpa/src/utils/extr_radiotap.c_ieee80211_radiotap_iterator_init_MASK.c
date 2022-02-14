
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211_radiotap_vendor_namespaces {int dummy; } ;
struct ieee80211_radiotap_iterator {int _max_length; int _bitmap_shifter; int is_radiotap_ns; scalar_t__ this_arg_size; scalar_t__ this_arg_index; int * _arg; int * this_arg; struct ieee80211_radiotap_header* _rtheader; int * overrides; scalar_t__ n_overrides; int * current_namespace; struct ieee80211_radiotap_vendor_namespaces const* _vns; int * _next_bitmap; scalar_t__ _reset_on_ext; int * _next_ns_data; scalar_t__ _arg_index; } ;
struct ieee80211_radiotap_header {int it_present; int it_len; scalar_t__ it_version; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

int FUNC_3(
 struct ieee80211_radiotap_iterator *VAR_3,
 struct ieee80211_radiotap_header *VAR_4,
 int VAR_5, const struct ieee80211_radiotap_vendor_namespaces *VAR_6)
{

 if (VAR_5 < (int)sizeof(struct ieee80211_radiotap_header))
  return -VAR_0;


 if (VAR_4->it_version)
  return -VAR_0;


 if (VAR_5 < FUNC_1(&VAR_4->it_len))
  return -VAR_0;

 VAR_3->_rtheader = VAR_4;
 VAR_3->_max_length = FUNC_1(&VAR_4->it_len);
 VAR_3->_arg_index = 0;
 VAR_3->_bitmap_shifter = FUNC_2(&VAR_4->it_present);
 VAR_3->_arg = (uint8_t *)VAR_4 + sizeof(*VAR_4);
 VAR_3->_next_ns_data = ((void*)0);
 VAR_3->_reset_on_ext = 0;
 VAR_3->_next_bitmap = &VAR_4->it_present;
 VAR_3->_next_bitmap++;
 VAR_3->_vns = VAR_6;
 VAR_3->current_namespace = &VAR_2;
 VAR_3->is_radiotap_ns = 1;







 if (VAR_3->_bitmap_shifter & FUNC_0(VAR_1)) {
  if ((unsigned long)VAR_3->_arg -
      (unsigned long)VAR_3->_rtheader + sizeof(uint32_t) >
      (unsigned long)VAR_3->_max_length)
   return -VAR_0;
  while (FUNC_2(VAR_3->_arg) &
         FUNC_0(VAR_1)) {
   VAR_3->_arg += sizeof(uint32_t);







   if ((unsigned long)VAR_3->_arg -
       (unsigned long)VAR_3->_rtheader +
       sizeof(uint32_t) >
       (unsigned long)VAR_3->_max_length)
    return -VAR_0;
  }

  VAR_3->_arg += sizeof(uint32_t);






 }

 VAR_3->this_arg = VAR_3->_arg;
 VAR_3->this_arg_index = 0;
 VAR_3->this_arg_size = 0;



 return 0;
}
