
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*,int,char*,char const*,char const*,char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_3, const char *VAR_4, device_t VAR_5)
{
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 const char *VAR_9;

 if (!VAR_2)
  return;
 VAR_6 = FUNC_6(1024, VAR_0, VAR_1);
 if (VAR_6 == ((void*)0))
  goto bad;


 VAR_7 = FUNC_6(1024, VAR_0, VAR_1);
 if (VAR_7 == ((void*)0))
  goto bad;
 *VAR_7 = '\0';
 FUNC_0(VAR_5, VAR_7, 1024);


 VAR_8 = FUNC_6(1024, VAR_0, VAR_1);
 if (VAR_8 == ((void*)0))
  goto bad;
 *VAR_8 = '\0';
 FUNC_1(VAR_5, VAR_8, 1024);


 if (FUNC_4(VAR_5) == ((void*)0))
  VAR_9 = ".";
 else
  VAR_9 = FUNC_3(FUNC_4(VAR_5));

 FUNC_7(VAR_6, 1024, "%s%s at %s %s on %s\n", VAR_3, VAR_4, VAR_7, VAR_8,
   VAR_9);
 FUNC_5(VAR_7, VAR_0);
 FUNC_5(VAR_8, VAR_0);
 FUNC_2(VAR_6);
 return;
bad:
 FUNC_5(VAR_8, VAR_0);
 FUNC_5(VAR_7, VAR_0);
 FUNC_5(VAR_6, VAR_0);
 return;
}
