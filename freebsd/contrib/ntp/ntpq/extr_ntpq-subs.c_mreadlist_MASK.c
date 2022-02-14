
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parse {TYPE_1__* argval; } ;
struct TYPE_4__ {int assid; } ;
struct TYPE_3__ {int uval; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int*,int*,int *) ;
 int FUNC_2 (int *,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(
 struct parse *VAR_4,
 FILE *VAR_5
 )
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 if (!FUNC_1(VAR_4->argval[0].uval, VAR_4->argval[1].uval,
       &VAR_7, &VAR_8, VAR_5))
  return;

 for (VAR_6 = VAR_7; VAR_6 <= VAR_8; VAR_6++) {
  if (VAR_6 != VAR_7)
   FUNC_2(VAR_5, "\n");
  if (!FUNC_0(VAR_3, VAR_2[VAR_6].assid,
       VAR_0, VAR_1, VAR_5))
   return;
 }
 return;
}
