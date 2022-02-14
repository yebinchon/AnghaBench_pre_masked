
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int FUNC_1 (char const*,size_t,int,struct conf*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, size_t VAR_1, bool VAR_2, void *VAR_3, char **VAR_4,
    int (*VAR_5)(const char *, size_t, bool, struct conf *, const char *))
{
 char *VAR_6 = *VAR_4;

 FUNC_0(VAR_4);
 return (*VAR_5)(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
}
