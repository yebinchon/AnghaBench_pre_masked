
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_freq_range_list {unsigned int num; struct wpa_freq_range* range; } ;
struct wpa_freq_range {void* min; void* max; } ;


 void* FUNC_0 (char const*) ;
 int FUNC_1 (struct wpa_freq_range*) ;
 struct wpa_freq_range* FUNC_2 (struct wpa_freq_range*,unsigned int,int) ;
 char* FUNC_3 (char const*,char) ;

int FUNC_4(struct wpa_freq_range_list *VAR_0, const char *VAR_1)
{
 struct wpa_freq_range *VAR_2 = ((void*)0), *VAR_3;
 unsigned int VAR_4 = 0;
 const char *VAR_5, *VAR_6, *VAR_7;





 VAR_5 = VAR_1;
 while (VAR_5 && VAR_5[0]) {
  VAR_3 = FUNC_2(VAR_2, VAR_4 + 1,
         sizeof(struct wpa_freq_range));
  if (VAR_3 == ((void*)0)) {
   FUNC_1(VAR_2);
   return -1;
  }
  VAR_2 = VAR_3;
  VAR_2[VAR_4].min = FUNC_0(VAR_5);
  VAR_6 = FUNC_3(VAR_5, '-');
  VAR_7 = FUNC_3(VAR_5, ',');
  if (VAR_6 && (!VAR_7 || VAR_6 < VAR_7)) {
   VAR_6++;
   VAR_2[VAR_4].max = FUNC_0(VAR_6);
  } else
   VAR_2[VAR_4].max = VAR_2[VAR_4].min;
  VAR_5 = VAR_7;
  if (VAR_5)
   VAR_5++;
  VAR_4++;
 }

 FUNC_1(VAR_0->range);
 VAR_0->range = VAR_2;
 VAR_0->num = VAR_4;

 return 0;
}
