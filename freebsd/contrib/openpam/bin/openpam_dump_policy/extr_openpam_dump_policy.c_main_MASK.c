
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_2, char *VAR_3[])
{
 int VAR_4, VAR_5;

 while ((VAR_5 = FUNC_1(VAR_2, VAR_3, "d")) != -1)
  switch (VAR_5) {
  case 'd':
   VAR_0 = 1;
   break;
  default:
   FUNC_4();
  }

 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;

 if (VAR_2 < 1)
  FUNC_4();

 FUNC_3("#include <security/pam_appl.h>\n");
 FUNC_3("#include \"openpam_impl.h\"\n");
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
  FUNC_2(VAR_3[VAR_4]);
 FUNC_3("pam_policy_t *pam_embedded_policies[] = {\n");
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
  FUNC_3("\t&pam_%s_policy,\n", VAR_3[VAR_4]);
 FUNC_3("\tNULL,\n");
 FUNC_3("};\n");
 FUNC_0(0);
}
