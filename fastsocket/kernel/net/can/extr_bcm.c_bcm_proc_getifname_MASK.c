
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;


 struct net_device* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *FUNC_4(char *VAR_2, int VAR_3)
{
 struct net_device *VAR_4;

 if (!VAR_3)
  return "any";

 FUNC_1(&VAR_0);
 VAR_4 = FUNC_0(&VAR_1, VAR_3);
 if (VAR_4)
  FUNC_3(VAR_2, VAR_4->name);
 else
  FUNC_3(VAR_2, "???");
 FUNC_2(&VAR_0);

 return VAR_2;
}
