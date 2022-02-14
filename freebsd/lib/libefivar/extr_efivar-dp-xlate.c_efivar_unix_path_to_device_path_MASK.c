
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmesh {int dummy; } ;
typedef int efidp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gmesh*,char*,int *) ;
 int FUNC_1 (struct gmesh*,char*,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct gmesh*) ;
 scalar_t__ FUNC_4 (struct gmesh*) ;
 int FUNC_5 (struct gmesh*,char*,int *) ;
 scalar_t__ FUNC_6 (char*,char) ;
 char* FUNC_7 (char const*) ;

int
FUNC_8(const char *VAR_3, efidp *VAR_4)
{
 char *VAR_5 = ((void*)0), *VAR_6;
 int VAR_7 = VAR_1;
 struct gmesh VAR_8;




 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);







 if (FUNC_4(&VAR_8))
  return (VAR_2);





 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 == ((void*)0))
  goto out;
 for (VAR_6 = VAR_5; *VAR_6; VAR_6++)
  if (*VAR_6 == '\\')
   *VAR_6 = '/';

 if (VAR_5[0] == '/' && VAR_5[1] == '/')
  VAR_7 = FUNC_1(&VAR_8, VAR_5, VAR_4);
 else if (FUNC_6(VAR_5, ':'))
  VAR_7 = FUNC_0(&VAR_8, VAR_5, VAR_4);
 else
  VAR_7 = FUNC_5(&VAR_8, VAR_5, VAR_4);

out:
 FUNC_3(&VAR_8);
 FUNC_2(VAR_5);

 return (VAR_7);
}
