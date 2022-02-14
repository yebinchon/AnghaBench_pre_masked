
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_proc_entry {scalar_t__ name; scalar_t__ dirent; } ;


 struct atm_proc_entry* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 static struct atm_proc_entry *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->name; VAR_3++) {
  if (VAR_3->dirent)
   FUNC_1(VAR_3->name, VAR_1);
 }
 FUNC_0(&VAR_2, "atm");
}
