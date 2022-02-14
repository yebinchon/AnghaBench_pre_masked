
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int name; } ;
struct bearer {TYPE_1__ publ; int active; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ,char) ;
 int FUNC_1 (char*,char const*) ;
 struct bearer* VAR_1 ;

struct bearer *FUNC_2(const char *VAR_2)
{
 struct bearer *VAR_3;
 char *VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0, VAR_3 = VAR_1; VAR_5 < VAR_0; VAR_5++, VAR_3++) {
  if (!VAR_3->active)
   continue;
  VAR_4 = FUNC_0(VAR_3->publ.name, ':') + 1;
  if (!FUNC_1(VAR_4, VAR_2))
   return VAR_3;
 }
 return ((void*)0);
}
