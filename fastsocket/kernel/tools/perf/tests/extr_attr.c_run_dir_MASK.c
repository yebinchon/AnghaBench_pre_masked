
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*,char const*,char const*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const char *VAR_3)
{
 char VAR_4[3*VAR_0];

 FUNC_0(VAR_4, 3*VAR_0, "python %s/attr.py -d %s/attr/ -p %s %s",
   VAR_2, VAR_2, VAR_3, VAR_1 ? "-v" : "");

 return FUNC_1(VAR_4);
}
