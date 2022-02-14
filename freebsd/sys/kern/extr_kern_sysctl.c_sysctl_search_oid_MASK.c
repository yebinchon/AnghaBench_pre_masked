
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int oid_kind; int oid_children; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sysctl_oid* FUNC_0 (int *) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_oid*,int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct sysctl_oid **VAR_5, struct sysctl_oid *VAR_6)
{
 int VAR_7;

 FUNC_2();
 VAR_7 = 0;
 while (VAR_7 < VAR_2 && VAR_7 >= 0) {
  if (VAR_5[VAR_7] == ((void*)0) && VAR_7 == 0)
   VAR_5[VAR_7] = FUNC_0(&VAR_4);
  else if (VAR_5[VAR_7] == ((void*)0))
   VAR_5[VAR_7] = FUNC_0(&VAR_5[VAR_7 - 1]->oid_children);
  else
   VAR_5[VAR_7] = FUNC_1(VAR_5[VAR_7], VAR_3);

  if (VAR_5[VAR_7] == VAR_6)
   return (VAR_7 + 1);

  if (VAR_5[VAR_7] == ((void*)0)) {
   VAR_7--;
   continue;
  }

  if ((VAR_5[VAR_7]->oid_kind & VAR_0) == VAR_1) {
   VAR_7++;
   continue;
  }
 }
 return (-1);
}
