
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent_test_data {int dummy; } ;
struct servent {char* s_name; char** s_aliases; int s_proto; } ;


 scalar_t__ FUNC_0 (struct servent*,struct servent*,int *) ;
 int FUNC_1 (struct servent*) ;
 struct servent* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct servent_test_data*,struct servent*) ;
 scalar_t__ FUNC_5 (struct servent*,int *) ;

__attribute__((used)) static int
FUNC_6(struct servent *VAR_0, void *VAR_1)
{
 char **VAR_2;
 struct servent *VAR_3;

 FUNC_3("testing getservbyname() with the following data:\n");
 FUNC_1(VAR_0);

 VAR_3 = FUNC_2(VAR_0->s_name, VAR_0->s_proto);
 if (FUNC_5(VAR_3, ((void*)0)) != 0)
  goto errfin;

 if ((FUNC_0(VAR_3, VAR_0, ((void*)0)) != 0) &&
     (FUNC_4((struct servent_test_data *)VAR_1, VAR_3)
     !=0))
  goto errfin;

 for (VAR_2 = VAR_0->s_aliases; *VAR_2; ++VAR_2) {
  VAR_3 = FUNC_2(*VAR_2, VAR_0->s_proto);

  if (FUNC_5(VAR_3, ((void*)0)) != 0)
   goto errfin;

  if ((FUNC_0(VAR_3, VAR_0, ((void*)0)) != 0) &&
      (FUNC_4(
      (struct servent_test_data *)VAR_1, VAR_3) != 0))
      goto errfin;
 }

 FUNC_3("ok\n");
 return (0);

errfin:
 FUNC_3("not ok\n");

 return (-1);
}
