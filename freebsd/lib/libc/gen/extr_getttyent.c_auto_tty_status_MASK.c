
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char**,char*) ;
 int FUNC_6 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_2)
{
 size_t VAR_3;
 char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;

 VAR_7 = VAR_0;


 VAR_4 = ((void*)0);
 if (FUNC_6("kern.console", ((void*)0), &VAR_3, ((void*)0), 0) == -1)
  return (VAR_7);
 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_6("kern.console", VAR_4, &VAR_3, ((void*)0), 0) == -1)
  goto done;

 if ((VAR_5 = FUNC_2(VAR_4, '/')) == ((void*)0))
  goto done;
 *VAR_5 = '\0';
 VAR_6 = VAR_4;
 while ((VAR_5 = FUNC_5(&VAR_6, ",")) != ((void*)0) && FUNC_4(VAR_5) != 0) {
  if (FUNC_3(VAR_5, VAR_2) == 0) {
   VAR_7 |= VAR_1;
   break;
  }
 }

done:
 FUNC_0(VAR_4);
 return (VAR_7);
}
