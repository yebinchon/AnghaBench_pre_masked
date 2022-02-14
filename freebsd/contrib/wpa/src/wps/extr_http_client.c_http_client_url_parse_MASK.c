
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {void* sin_port; int sin_addr; int sin_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (int ,char*,char const*,char*,char*) ;

char * FUNC_8(const char *VAR_2, struct sockaddr_in *VAR_3,
        char **VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;

 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->sin_family = VAR_0;
 VAR_6 = VAR_5 + 7;
 VAR_8 = FUNC_5(VAR_6, '/');
 VAR_7 = FUNC_5(VAR_6, ':');
 if (VAR_8 == ((void*)0)) {
  VAR_8 = "/";
 } else {
  *VAR_8 = '\0';
  if (VAR_7 > VAR_8)
   VAR_7 = ((void*)0);
 }
 if (VAR_7)
  *VAR_7++ = '\0';

 if (FUNC_2(VAR_6, &VAR_3->sin_addr) == 0) {

  FUNC_7(VAR_1, "HTTP: Unsupported address in URL '%s' "
      "(addr='%s' port='%s')",
      VAR_2, VAR_6, VAR_7);
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 if (VAR_7)
  VAR_3->sin_port = FUNC_1(FUNC_0(VAR_7));
 else
  VAR_3->sin_port = FUNC_1(80);

 if (*VAR_8 == '\0') {

  *VAR_8 = '/';
 }

 *VAR_4 = VAR_8;

 return VAR_5;
}
