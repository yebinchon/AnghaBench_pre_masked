
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmesh {int dummy; } ;
typedef int * const_efidp ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 uintptr_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct gmesh*,int *,char**,char**,char**) ;
 int FUNC_4 (struct gmesh*,int *,char**,char**,char**) ;
 int FUNC_5 (struct gmesh*,int *,char**,char**,char**) ;
 int FUNC_6 (struct gmesh*,int *,char**,char**,char**) ;
 int FUNC_7 (struct gmesh*) ;
 scalar_t__ FUNC_8 (struct gmesh*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

int
FUNC_12(const_efidp VAR_7, char **VAR_8, char **VAR_9, char **VAR_10)
{
 const_efidp VAR_11;
 struct gmesh VAR_12;
 int VAR_13 = 0;




 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  return (VAR_0);

 *VAR_8 = ((void*)0);
 *VAR_9 = ((void*)0);
 *VAR_10 = ((void*)0);






 VAR_11 = VAR_7;
 while (FUNC_1(VAR_11) != VAR_5 &&
     FUNC_1(VAR_11) != VAR_2) {
  VAR_11 = (const_efidp)FUNC_2(VAR_11);
  if ((uintptr_t)VAR_11 - (uintptr_t)VAR_7 > VAR_4)
   return (VAR_1);
 }
 if (FUNC_1(VAR_11) != VAR_5)
  return (VAR_1);
 if (FUNC_8(&VAR_12))
  return (VAR_3);

 VAR_13 = VAR_1;
 if (FUNC_0(VAR_11) == VAR_6)
  VAR_13 = FUNC_5(&VAR_12, VAR_11, VAR_8, VAR_9, VAR_10);
 FUNC_7(&VAR_12);

 return (VAR_13);
}
