
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (unsigned long,unsigned long*,unsigned long*,char**,char*) ;
 int FUNC_1 (char*,char*,unsigned long,...) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_0, unsigned long VAR_1)
{
 char *VAR_2;
 const char *VAR_3;
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = FUNC_0(VAR_1, &VAR_5, &VAR_4, &VAR_2, VAR_0);
 if (!VAR_3)
  return FUNC_1(VAR_0, "0x%lx", VAR_1);

 if (VAR_3 != VAR_0)
  FUNC_2(VAR_0, VAR_3);
 VAR_6 = FUNC_3(VAR_0);
 VAR_0 += VAR_6;

 if (VAR_2)
  VAR_6 += FUNC_1(VAR_0, "+%#lx/%#lx [%s]",
      VAR_4, VAR_5, VAR_2);
 else
  VAR_6 += FUNC_1(VAR_0, "+%#lx/%#lx", VAR_4, VAR_5);

 return VAR_6;
}
