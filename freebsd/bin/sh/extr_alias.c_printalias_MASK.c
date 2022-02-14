
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias {int val; int name; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(const struct alias *VAR_0)
{
 FUNC_1("%s=", VAR_0->name);
 FUNC_2(VAR_0->val);
 FUNC_0('\n');
}
