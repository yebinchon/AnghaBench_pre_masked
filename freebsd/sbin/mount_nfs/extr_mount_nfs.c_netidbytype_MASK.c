
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nc_protos {char const* netid; int af; int sotype; } ;


 struct nc_protos* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_1, int VAR_2)
{
 struct nc_protos *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->netid != ((void*)0); VAR_3++) {
  if (VAR_1 != VAR_3->af || VAR_2 != VAR_3->sotype)
   continue;
  return (VAR_3->netid);
 }
 return (((void*)0));
}
