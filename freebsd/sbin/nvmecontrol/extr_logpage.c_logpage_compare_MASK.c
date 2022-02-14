
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logpage_function {scalar_t__ log_page; int * vendor; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct logpage_function *VAR_0, struct logpage_function *VAR_1)
{
 int VAR_2;

 if ((VAR_0->vendor == ((void*)0)) != (VAR_1->vendor == ((void*)0)))
  return (VAR_0->vendor == ((void*)0) ? -1 : 1);
 if (VAR_0->vendor != ((void*)0)) {
  VAR_2 = FUNC_0(VAR_0->vendor, VAR_1->vendor);
  if (VAR_2 != 0)
   return (VAR_2);
 }
 return ((int)VAR_0->log_page - (int)VAR_1->log_page);
}
