
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int sb ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 char const* VAR_10 ;
 scalar_t__ FUNC_0 (char const*,struct stat*) ;
 int FUNC_1 (int *,char*,struct stat*,int) ;
 int FUNC_2 (int *,char const*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 char* FUNC_6 (int const*,int*,void**) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_9(nvlist_t *VAR_11, const nvlist_t *VAR_12,
    const char *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 void *VAR_17;
 nvlist_t *VAR_18;
 const char *VAR_19;
 struct stat VAR_20;

 if ((VAR_9 & VAR_5) != 0) {
  VAR_6 = 1;
  return;
 }

 VAR_17 = VAR_8;
 for (VAR_15 = 0; VAR_15 < VAR_0 + 1; VAR_15++) {
  VAR_19 = FUNC_6(VAR_12, &VAR_14, &VAR_17);
  if (VAR_19 == ((void*)0)) {
   VAR_8 = ((void*)0);
   VAR_10 = ((void*)0);
   VAR_6 = 1;
   return;
  }

  if (VAR_15 == VAR_0) {
   break;
  }

  if (VAR_14 != VAR_4 ||
      (VAR_13 != ((void*)0) && FUNC_8(VAR_19, VAR_13) == 0)) {
   VAR_13 = ((void*)0);
   VAR_15--;
   continue;
  }

  VAR_18 = FUNC_3(VAR_3);
  if ((VAR_7 & VAR_2) != 0) {
   VAR_16 = FUNC_7(VAR_19);
   if (VAR_16 < 0) {
    VAR_15--;
    FUNC_4(VAR_18);
    continue;
   }
   FUNC_5(VAR_18, "fd", VAR_16);
  }
  if ((VAR_7 & VAR_1) != 0) {
   if (FUNC_0(VAR_19, &VAR_20) < 0) {
    VAR_15--;
    FUNC_4(VAR_18);
    continue;
   }
   FUNC_1(VAR_18, "stat", &VAR_20, sizeof(VAR_20));
  }

  FUNC_2(VAR_11, VAR_19, VAR_18);
 }
 VAR_8 = VAR_17;
 VAR_10 = VAR_19;
}
