
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afswtch {int af_af; struct afswtch* af_next; } ;


 struct afswtch* VAR_0 ;

__attribute__((used)) static struct afswtch *
FUNC_0(int VAR_1)
{
 struct afswtch *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->af_next)
  if (VAR_2->af_af == VAR_1)
   return VAR_2;
 return ((void*)0);
}
