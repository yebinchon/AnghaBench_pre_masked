
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char**,int) ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static char **
FUNC_4(char **VAR_1, const char *VAR_2)
{
 char **VAR_3;

 if (VAR_1 == ((void*)0)) {



  VAR_1 = (char **)FUNC_1(sizeof(*VAR_1) * 12);
  if (VAR_1 == ((void*)0))
   FUNC_0(VAR_0, "failure allocating argument space");
  *VAR_1++ = (char *)10;
  *VAR_1 = (char *)0;
 }
 for (VAR_3 = VAR_1; *VAR_3; VAR_3++)
  ;
 if (VAR_3 == &VAR_1[(long)VAR_1[-1]]) {
  --VAR_1;
  *VAR_1 = (char *)((long)(*VAR_1) + 10);
  VAR_1 = (char **)FUNC_2(VAR_1, sizeof(*VAR_1)*((long)(*VAR_1) + 2));
  if (VAR_1 == ((void*)0))
   FUNC_0(VAR_0, "failure allocating argument space");
  VAR_1++;
  VAR_3 = &VAR_1[(long)VAR_1[-1] - 10];
 }
 if ((*VAR_3++ = FUNC_3(VAR_2)) == ((void*)0))
  FUNC_0(VAR_0, "failure allocating argument space");
 *VAR_3 = 0;
 return(VAR_1);
}
