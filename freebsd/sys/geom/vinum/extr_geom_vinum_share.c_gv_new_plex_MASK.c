
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_plex {scalar_t__ org; scalar_t__ stripesize; int volume; int state; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gv_plex*) ;
 struct gv_plex* FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int) ;

struct gv_plex *
FUNC_7(int VAR_2, char *VAR_3[])
{
 struct gv_plex *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3[1] == ((void*)0) || *VAR_3[1] == '\0')
  return (((void*)0));

 VAR_4 = FUNC_1();
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_6 = 0;
 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++) {
  if (!FUNC_5(VAR_3[VAR_5], "name")) {
   VAR_5++;
   if (VAR_5 >= VAR_2) {
    VAR_6++;
    break;
   }
   FUNC_6(VAR_4->name, VAR_3[VAR_5], sizeof(VAR_4->name));
  } else if (!FUNC_5(VAR_3[VAR_5], "org")) {
   VAR_5++;
   if (VAR_5 >= VAR_2) {
    VAR_6++;
    break;
   }
   VAR_4->org = FUNC_2(VAR_3[VAR_5]);
   if ((VAR_4->org == VAR_0) ||
       (VAR_4->org == VAR_1)) {
    VAR_5++;
    if (VAR_5 >= VAR_2) {
     VAR_6++;
     break;
    }
    VAR_4->stripesize = FUNC_4(VAR_3[VAR_5]);
    if (VAR_4->stripesize == 0) {
     VAR_6++;
     break;
    }
   }
  } else if (!FUNC_5(VAR_3[VAR_5], "state")) {
   VAR_5++;
   if (VAR_5 >= VAR_2) {
    VAR_6++;
    break;
   }
   VAR_4->state = FUNC_3(VAR_3[VAR_5]);
  } else if (!FUNC_5(VAR_3[VAR_5], "vol") ||
       !FUNC_5(VAR_3[VAR_5], "volume")) {
   VAR_5++;
   if (VAR_5 >= VAR_2) {
    VAR_6++;
    break;
   }
   FUNC_6(VAR_4->volume, VAR_3[VAR_5], sizeof(VAR_4->volume));
  } else {
   VAR_6++;
   break;
  }
 }

 if (VAR_6) {
  FUNC_0(VAR_4);
  return (((void*)0));
 }

 return (VAR_4);
}
