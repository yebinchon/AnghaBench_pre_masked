
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scripting_ops {int dummy; } ;
struct scripting_context {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,struct scripting_ops*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct scripting_ops *VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_2("Perl", VAR_1);
 if (VAR_2)
  FUNC_0("error registering Perl script extension");

 VAR_2 = FUNC_2("pl", VAR_1);
 if (VAR_2)
  FUNC_0("error registering pl script extension");

 VAR_0 = FUNC_1(sizeof(struct scripting_context));
}
