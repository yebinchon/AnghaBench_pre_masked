
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {int (* ifcs_create ) (struct if_clone*,int,int ) ;} ;
typedef int caddr_t ;


 int FUNC_0 (struct if_clone*,int*) ;
 int FUNC_1 (struct if_clone*,int) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (char*,size_t,char*,int) ;
 int FUNC_5 (struct if_clone*,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct if_clone *VAR_0, char *VAR_1, size_t VAR_2, caddr_t VAR_3)
{
 char *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_5 = (VAR_6 < 0);

 VAR_7 = FUNC_0(VAR_0, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = VAR_0->ifcs_create(VAR_0, VAR_6, VAR_3);
 if (VAR_7 != 0) {
  FUNC_1(VAR_0, VAR_6);
  return (VAR_7);
 }


 if (VAR_5) {
  for (VAR_4 = VAR_1; *VAR_4 != '\0'; VAR_4++);
  if (FUNC_4(VAR_4, VAR_2 - (VAR_4-VAR_1), "%d", VAR_6) >
      VAR_2 - (VAR_4-VAR_1) - 1) {





   FUNC_3("if_clone_create(): interface name too long");
  }

 }

 return (0);
}
