
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feedertab_entry {int dummy; } ;


 int VAR_0 ;
 struct feedertab_entry* FUNC_0 (int *) ;
 struct feedertab_entry* FUNC_1 (struct feedertab_entry*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct feedertab_entry*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct feedertab_entry *VAR_4, *VAR_5;

 VAR_5 = FUNC_0(&VAR_1);
 while (VAR_5 != ((void*)0)) {
  VAR_4 = VAR_5;
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  FUNC_2(VAR_4, VAR_0);
 }
}
