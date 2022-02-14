
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (void*,int,char*,int*) ;
 int FUNC_1 (void*,char*) ;
 char* FUNC_2 (void*,int,char*,int,int*) ;
 scalar_t__ FUNC_3 (void*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_0, void *VAR_1)
{
 const char *VAR_2;
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(VAR_1, "/");
 if (VAR_5 < 0)
  return (VAR_5);






 if (FUNC_0(VAR_1, VAR_5, "compatible",
     &VAR_4) == ((void*)0) || VAR_4 == 0)
  return (0);
 VAR_6 = FUNC_1(VAR_0, "/");
 if (VAR_6 < 0)
  return (VAR_6);




 if (FUNC_0(VAR_0, VAR_6, "compatible",
     &VAR_3) == ((void*)0))
  return (VAR_3);
 else if(VAR_3 == 0)
  return (1);

 VAR_7 = 0;
 VAR_2 = FUNC_2(VAR_1, VAR_5, "compatible",
     VAR_7, &VAR_8);
 while (VAR_2 != ((void*)0)) {
  if (FUNC_3(VAR_0, VAR_6, "compatible",
      VAR_2) >= 0)
   return (0);
  ++VAR_7;
  VAR_2 = FUNC_2(VAR_1, VAR_5,
      "compatible", VAR_7, &VAR_8);
 };


 return (1);
}
