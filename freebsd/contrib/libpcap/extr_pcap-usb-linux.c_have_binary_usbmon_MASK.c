
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* release; } ;


 int FUNC_0 (char*,char**,int) ;
 scalar_t__ FUNC_1 (struct utsname*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 struct utsname VAR_0;
 char *VAR_1, *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 if (FUNC_1(&VAR_0) == 0) {




  VAR_1 = VAR_0.release;
  VAR_3 = FUNC_0(VAR_1, &VAR_2, 10);
  if (VAR_2 != VAR_1 && *VAR_2 == '.') {





   if (VAR_3 >= 3)
    return 1;






   if (VAR_3 <= 1)
    return 0;
  }





  VAR_1 = VAR_2 + 1;
  VAR_4 = FUNC_0(VAR_1, &VAR_2, 10);
  if (VAR_2 != VAR_1 &&
      (*VAR_2 == '.' || *VAR_2 == '\0')) {






   if (VAR_4 < 6) {




    return 0;
   }





   VAR_1 = VAR_2 + 1;
   VAR_5 = FUNC_0(VAR_1, &VAR_2, 10);
   if (VAR_2 != VAR_1 &&
       (*VAR_2 == '.' || *VAR_2 == '\0')) {




    if (VAR_5 >= 21) {




     return 1;
    }
   }
  }
 }





 return 0;
}
