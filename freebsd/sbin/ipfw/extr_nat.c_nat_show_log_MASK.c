
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat44_cfg_nat {char* name; } ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(struct nat44_cfg_nat *VAR_0, void *VAR_1)
{
 char *VAR_2;

 VAR_2 = (char *)(VAR_0 + 1);
 if (VAR_2[0] != '\0')
  FUNC_0("nat %s: %s\n", VAR_0->name, VAR_2);
}
