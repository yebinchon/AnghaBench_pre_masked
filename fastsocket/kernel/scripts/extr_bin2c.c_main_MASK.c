
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;

int FUNC_2(int VAR_1, char *VAR_2[])
{
 int VAR_3, VAR_4=0;

 if (VAR_1 > 1)
  FUNC_1("const char %s[] %s=\n",
   VAR_2[1], VAR_1 > 2 ? VAR_2[2] : "");

 do {
  FUNC_1("\t\"");
  while ((VAR_3 = FUNC_0()) != VAR_0)
  {
   VAR_4++;
   FUNC_1("\\x%02x",VAR_3);
   if (VAR_4 % 16 == 0)
    break;
  }
  FUNC_1("\"\n");
 } while (VAR_3 != VAR_0);

 if (VAR_1 > 1)
  FUNC_1("\t;\n\nconst int %s_size = %d;\n", VAR_2[1], VAR_4);

 return 0;
}
