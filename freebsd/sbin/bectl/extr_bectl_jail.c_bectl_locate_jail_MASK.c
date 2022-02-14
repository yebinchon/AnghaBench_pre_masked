
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int *,char const*,int **) ;
 scalar_t__ FUNC_6 (int *,char*,char**) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_1)
{
 nvlist_t *VAR_2, *VAR_3;
 char *VAR_4;
 int VAR_5;


 VAR_5 = FUNC_4(VAR_1);





 if (VAR_5 > 0)
  return (VAR_5);


 if (FUNC_1(&VAR_2) != 0)
  return (-1);

 if (FUNC_0(VAR_0, VAR_2) != 0)
  return (-1);

 if (FUNC_5(VAR_2, VAR_1, &VAR_3) == 0) {


  if (FUNC_6(VAR_3, "mounted", &VAR_4) == 0) {


   VAR_5 = FUNC_3(VAR_4);
   FUNC_2(VAR_2);
   return (VAR_5);
  }

  FUNC_2(VAR_2);
 }

 return (-1);
}
