
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scanlist {scalar_t__* list; int count; } ;
struct ieee80211_channel {scalar_t__ ic_freq; } ;



__attribute__((used)) static int
FUNC_0(const struct scanlist *VAR_0, const struct ieee80211_channel *VAR_1)
{
 int VAR_2;

 for (; VAR_0->list != ((void*)0); VAR_0++) {
  for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++)
   if (VAR_0->list[VAR_2] == VAR_1->ic_freq)
    return 1;
 }
 return 0;
}
