
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro {struct macro* value; struct macro* name; int perm; } ;


 struct macro* FUNC_0 (int *) ;
 struct macro* FUNC_1 (struct macro*,int ) ;
 int FUNC_2 (struct macro*,int ) ;
 int FUNC_3 (struct macro*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void)
{
 static struct macro *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(&VAR_1);
 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  if (!VAR_2->perm) {
   FUNC_3(VAR_2->name);
   FUNC_3(VAR_2->value);
   FUNC_2(VAR_2, VAR_0);
   FUNC_3(VAR_2);
  }
  VAR_2 = VAR_3;
 }
}
