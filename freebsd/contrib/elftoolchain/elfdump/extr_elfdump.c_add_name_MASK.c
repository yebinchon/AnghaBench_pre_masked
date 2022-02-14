
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spec_name {char const* name; } ;
struct elfdump {int snl; } ;


 int FUNC_0 (int *,struct spec_name*,int ) ;
 scalar_t__ FUNC_1 (struct elfdump*,char const*) ;
 struct spec_name* FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct elfdump *VAR_1, const char *VAR_2)
{
 struct spec_name *VAR_3;

 if (FUNC_1(VAR_1, VAR_2))
  return;
 if ((VAR_3 = FUNC_2(sizeof(*VAR_3))) == ((void*)0)) {
  FUNC_3("malloc failed");
  return;
 }
 VAR_3->name = VAR_2;
 FUNC_0(&VAR_1->snl, VAR_3, VAR_0);
}
