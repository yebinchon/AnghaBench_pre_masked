
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,char*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*,char const*) ;

int
FUNC_6(const char *VAR_0, int VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, VAR_1);





 VAR_4 = 0;

 if (VAR_4)
  return (1);
 FUNC_2(VAR_0, VAR_1, "Could not create hardlink");
 FUNC_4("   New link: %s\n", VAR_2);
 FUNC_4("   Old name: %s\n", VAR_3);
 FUNC_1(((void*)0));
 return(0);
}
