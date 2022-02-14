
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_6__ {scalar_t__ nodekind; int* oid; int access; } ;
typedef TYPE_1__ SmiNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(SmiNode *VAR_1, u_int VAR_2)
{
 FUNC_0 (VAR_1->nodekind == VAR_0);

 FUNC_6(VAR_1);

 FUNC_1(VAR_2);
 FUNC_5("(%u ", VAR_1->oid[VAR_2]);
 FUNC_3(VAR_1);
 FUNC_5(" ");
 FUNC_4(VAR_1);
 FUNC_2(VAR_1->access);
 FUNC_5(")\n");
}
