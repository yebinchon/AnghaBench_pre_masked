
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int oidlen; scalar_t__* oid; } ;
typedef TYPE_1__ SmiNode ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,...) ;
 TYPE_1__* FUNC_4 (int,scalar_t__*) ;

__attribute__((used)) static u_int
FUNC_5(const SmiNode *VAR_1, u_int VAR_2, SmiNode **VAR_3)
{
 SmiNode *VAR_4;
 u_int VAR_5;

 if (*VAR_3 != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < (*VAR_3)->oidlen - 1; VAR_5++) {
   if (VAR_5 >= VAR_1->oidlen) {
    VAR_2 = FUNC_0((*VAR_3)->oidlen -
        VAR_1->oidlen, VAR_2);
    break;
   }
   if ((*VAR_3)->oid[VAR_5] != VAR_1->oid[VAR_5])
    break;
  }
  if (VAR_5 < (*VAR_3)->oidlen - 1)
   VAR_2 = FUNC_0((*VAR_3)->oidlen - 1 - VAR_5,
       VAR_2 - 1) + 1;
 }

 while (VAR_2 < VAR_1->oidlen - 1) {
  if (VAR_2 >= VAR_0) {
   VAR_4 = FUNC_4(VAR_2 + 1, VAR_1->oid);
   if (VAR_4 == ((void*)0))
    continue;
   FUNC_1(VAR_2);
   FUNC_3("(%u", VAR_1->oid[VAR_2]);
   FUNC_3(" ");
   FUNC_2(VAR_4);
   FUNC_3("\n");
  }
  VAR_2++;
 }
 return (VAR_2);
}
