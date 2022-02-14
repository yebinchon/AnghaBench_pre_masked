
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,int *,void**) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_4(nvlist_t *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 size_t VAR_3;
 void *VAR_4;

 VAR_3 = FUNC_2(VAR_1);
again:
 VAR_4 = ((void*)0);
 while ((VAR_2 = FUNC_1(VAR_0, ((void*)0), &VAR_4)) != ((void*)0)) {
  if (FUNC_3(VAR_2, VAR_1, VAR_3) == 0) {
   FUNC_0(VAR_0, VAR_2);
   goto again;
  }
 }
}
