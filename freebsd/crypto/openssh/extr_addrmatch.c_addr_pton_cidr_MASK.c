
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_int ;
struct xaddr {int af; } ;
typedef int addrbuf ;


 scalar_t__ FUNC_0 (struct xaddr*,unsigned long) ;
 int FUNC_1 (char*,struct xaddr*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct xaddr*,struct xaddr*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char const*,int) ;
 unsigned long FUNC_7 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_0, struct xaddr *VAR_1, u_int *VAR_2)
{
 struct xaddr VAR_3;
 long unsigned int VAR_4 = 999;
 char VAR_5[64], *VAR_6, *VAR_7;


 if (VAR_0 == ((void*)0) || FUNC_6(VAR_5, VAR_0, sizeof(VAR_5)) >= sizeof(VAR_5))
  return -1;

 if ((VAR_6 = FUNC_5(VAR_5, '/')) != ((void*)0)) {
  *VAR_6 = '\0';
  VAR_6++;
  VAR_4 = FUNC_7(VAR_6, &VAR_7, 10);
  if (*VAR_6 == '\0' || *VAR_7 != '\0' || VAR_4 > 128)
   return -1;
 }

 if (FUNC_1(VAR_5, &VAR_3) == -1)
  return -1;

 if (VAR_6 == ((void*)0))
  VAR_4 = FUNC_2(VAR_3.af);
 if (FUNC_3(VAR_3.af, VAR_4) == -1)
  return -2;
 if (FUNC_0(&VAR_3, VAR_4) != 0)
  return -2;

 if (VAR_1 != ((void*)0))
  FUNC_4(VAR_1, &VAR_3, sizeof(*VAR_1));
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_4;

 return 0;
}
