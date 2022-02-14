
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* value; char* name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 char* FUNC_2 (char const*) ;
 struct option* FUNC_3 (char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_4(const char * VAR_2, const char * VAR_3, int VAR_4)
{
 struct option *VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_0, "No such option `%s'.\n", VAR_2);
  return;
 }
 FUNC_0(VAR_5->value);
 VAR_5->value = FUNC_2(VAR_3);
 if (VAR_1 && VAR_4)
  FUNC_1(VAR_0, "Setting `%s' to `%s'.\n",
      VAR_5->name, VAR_5->value);
}
