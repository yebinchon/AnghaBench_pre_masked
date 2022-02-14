
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct match {scalar_t__ matches; struct match* next; } ;
struct TYPE_4__ {struct match* first; int unmatched_count; } ;
struct TYPE_3__ {struct match* first; } ;
struct archive_match {TYPE_2__ inclusions; TYPE_1__ exclusions; } ;


 int FUNC_0 (struct archive_match*,struct match*,int,void const*) ;
 int FUNC_1 (struct archive_match*,struct match*,int,void const*) ;

__attribute__((used)) static int
FUNC_2(struct archive_match *VAR_0, int VAR_1, const void *VAR_2)
{
 struct match *VAR_3;
 struct match *VAR_4;
 int VAR_5;

 if (VAR_0 == ((void*)0))
  return (0);






 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_0->inclusions.first; VAR_3 != ((void*)0);
     VAR_3 = VAR_3->next){
  if (VAR_3->matches == 0 &&
      (VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2)) != 0) {
   if (VAR_5 < 0)
    return (VAR_5);
   VAR_0->inclusions.unmatched_count--;
   VAR_3->matches++;
   VAR_4 = VAR_3;
  }
 }


 for (VAR_3 = VAR_0->exclusions.first; VAR_3 != ((void*)0);
     VAR_3 = VAR_3->next){
  VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
  if (VAR_5)
   return (VAR_5);
 }



 if (VAR_4 != ((void*)0))
  return (0);



 for (VAR_3 = VAR_0->inclusions.first; VAR_3 != ((void*)0);
     VAR_3 = VAR_3->next){

  if (VAR_3->matches > 0 &&
      (VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2)) != 0) {
   if (VAR_5 < 0)
    return (VAR_5);
   VAR_3->matches++;
   return (0);
  }
 }


 if (VAR_0->inclusions.first != ((void*)0))
     return (1);


 return (0);
}
