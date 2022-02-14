
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {char const* start; int count; } ;
struct resource_list {int dummy; } ;


 int FUNC_0 (char const*,...) ;
 struct resource_list_entry* FUNC_1 (struct resource_list*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct resource_list *VAR_0, const char *VAR_1, int VAR_2,
    int VAR_3, const char *VAR_4)
{
 struct resource_list_entry *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_7);
  if (VAR_5 != ((void*)0)) {
   if (VAR_6 == 0)
    FUNC_0(" %s ", VAR_1);
   else if (VAR_6 > 0)
    FUNC_0(",");
   VAR_6++;
   FUNC_0(VAR_4, VAR_5->start);
   if (VAR_5->count > 1) {
    FUNC_0("-");
    FUNC_0(VAR_4, VAR_5->start + VAR_5->count - 1);
   }
  } else if (VAR_7 > 3) {

   break;
  }
 }
}
