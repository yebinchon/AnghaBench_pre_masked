
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ Authmethod ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,int *) ;

__attribute__((used)) static Authmethod *
FUNC_2(const char *VAR_1)
{
 Authmethod *VAR_2 = ((void*)0);
 if (VAR_1 != ((void*)0))
  for (VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++)
   if (FUNC_1(VAR_1, VAR_2->name) == 0)
    return VAR_2;
 FUNC_0("Unrecognized authentication method name: %s", VAR_1 ? VAR_1 : "NULL");
 return ((void*)0);
}
