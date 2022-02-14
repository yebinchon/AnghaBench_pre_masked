
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct login_time {int dummy; } ;
typedef int login_cap_t ;


 int FUNC_0 (struct login_time*) ;
 int FUNC_1 (struct login_time*,struct tm*,int *) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 struct login_time* FUNC_3 (int *,char*,int*,struct login_time**) ;

int
FUNC_4(login_cap_t *VAR_0, time_t VAR_1)
{
    int VAR_2 = 1;

    if (VAR_0 != ((void*)0) && VAR_1 != (time_t)0 && VAR_1 != (time_t)-1) {
 struct tm *VAR_3;

 static int VAR_4 = 0;
 static struct login_time *VAR_5 = ((void*)0);

 if ((VAR_3 = FUNC_2(&VAR_1)) != ((void*)0)) {
     struct login_time *VAR_6;

   VAR_6 = FUNC_3(VAR_0, "times.allow", &VAR_4, &VAR_5);
   if (VAR_6 != ((void*)0) && FUNC_1(VAR_6, VAR_3, ((void*)0)) == -1)
       VAR_2 = 0;
   else {

       VAR_6 = FUNC_3(VAR_0, "times.deny", &VAR_4, &VAR_5);
       if (VAR_6 != ((void*)0) && FUNC_1(VAR_6, VAR_3, ((void*)0)) != -1)
    VAR_2 = 0;
   }
   if (VAR_5) {
       FUNC_0(VAR_5);
       VAR_5 = ((void*)0);
       VAR_4 = 0;
   }
 }
    }

    return VAR_2;
}
