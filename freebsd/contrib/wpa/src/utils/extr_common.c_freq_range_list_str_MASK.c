
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_freq_range_list {int num; struct wpa_freq_range* range; } ;
struct wpa_freq_range {scalar_t__ min; scalar_t__ max; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int,char*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_3 (int,int) ;

char * FUNC_4(const struct wpa_freq_range_list *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3;
 size_t VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_0->num == 0)
  return ((void*)0);

 VAR_4 = VAR_0->num * 30;
 VAR_1 = FUNC_1(VAR_4);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_2 = VAR_1;
 VAR_3 = VAR_1 + VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_0->num; VAR_5++) {
  struct wpa_freq_range *VAR_7 = &VAR_0->range[VAR_5];

  if (VAR_7->min == VAR_7->max)
   VAR_6 = FUNC_2(VAR_2, VAR_3 - VAR_2, "%s%u",
       VAR_5 == 0 ? "" : ",", VAR_7->min);
  else
   VAR_6 = FUNC_2(VAR_2, VAR_3 - VAR_2, "%s%u-%u",
       VAR_5 == 0 ? "" : ",",
       VAR_7->min, VAR_7->max);
  if (FUNC_3(VAR_3 - VAR_2, VAR_6)) {
   FUNC_0(VAR_1);
   return ((void*)0);
  }
  VAR_2 += VAR_6;
 }

 return VAR_1;
}
