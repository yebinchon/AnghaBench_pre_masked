
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int,char*,char const*,char const*) ;
 int FUNC_3 (char const*,char const*,size_t,size_t) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;

int
FUNC_6(const char *VAR_0, int VAR_1,
    const void *VAR_2, const char *VAR_3,
    const void *VAR_4, const char *VAR_5,
    size_t VAR_6, const char *VAR_7, void *VAR_8)
{
 const char *VAR_9 = (const char *)VAR_2;
 const char *VAR_10 = (const char *)VAR_4;
 size_t VAR_11;

 FUNC_0(VAR_0, VAR_1);
 if (VAR_9 == VAR_10 || (VAR_9 != ((void*)0) && VAR_10 != ((void*)0) && FUNC_5(VAR_9, VAR_10, VAR_6) == 0))
  return (1);
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  return (0);

 FUNC_2(VAR_0, VAR_1, "%s != %s", VAR_3, VAR_5);
 FUNC_4("      size %s = %d\n", VAR_7, (int)VAR_6);


 VAR_11 = 0;
 while (VAR_6 > 64 && FUNC_5(VAR_9, VAR_10, 32) == 0) {

  VAR_9 += 16;
  VAR_10 += 16;
  VAR_6 -= 16;
  VAR_11 += 16;
 }
 FUNC_4("      Dump of %s\n", VAR_3);
 FUNC_3(VAR_9, VAR_10, VAR_6 < 128 ? VAR_6 : 128, VAR_11);
 FUNC_4("      Dump of %s\n", VAR_5);
 FUNC_3(VAR_10, VAR_9, VAR_6 < 128 ? VAR_6 : 128, VAR_11);
 FUNC_4("\n");
 FUNC_1(VAR_8);
 return (0);
}
