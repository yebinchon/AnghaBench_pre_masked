
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int error; int * private; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct g_provider*,int,int) ;
 int FUNC_5 (struct g_provider*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct g_provider *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 FUNC_1();





 FUNC_0((VAR_3 >= 0 && VAR_4 >= 0 && VAR_5 >= 0) ||
     (VAR_3 <= 0 && VAR_4 <= 0 && VAR_5 <= 0),
     ("Unsupported access request to %s (acr=%d, acw=%d, ace=%d).",
     VAR_2->name, VAR_3, VAR_4, VAR_5));

 if (VAR_2->private == ((void*)0)) {
  if (VAR_3 <= 0 && VAR_4 <= 0 && VAR_5 <= 0)
   return (0);
  return (VAR_2->error);
 }
 VAR_6 = VAR_3 + VAR_4 + VAR_5;
 if (VAR_6 == 0)
  return (0);

 VAR_8 = 0;
 if (VAR_3 != 0 || VAR_5 != 0)
  VAR_8 |= VAR_0;
 if (VAR_4 != 0)
  VAR_8 |= VAR_1;

 FUNC_3();
 if (VAR_6 > 0)
  VAR_7 = FUNC_5(VAR_2, VAR_8, VAR_6);
 else
  VAR_7 = FUNC_4(VAR_2, VAR_8, -VAR_6);
 FUNC_2();
 return (VAR_7);
}
