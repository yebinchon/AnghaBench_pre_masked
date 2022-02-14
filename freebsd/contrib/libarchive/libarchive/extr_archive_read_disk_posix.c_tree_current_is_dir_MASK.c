
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int flags; } ;
struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct stat* FUNC_2 (struct tree*) ;
 struct stat* FUNC_3 (struct tree*) ;

__attribute__((used)) static int
FUNC_4(struct tree *VAR_1)
{
 const struct stat *VAR_2;




 if (VAR_1->flags & VAR_0) {

  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 == ((void*)0))
   return 0;
  if (FUNC_0(VAR_2->st_mode))
   return 1;


  if (!FUNC_1(VAR_2->st_mode))
   return 0;




 }

 VAR_2 = FUNC_3(VAR_1);

 if (VAR_2 == ((void*)0))
  return 0;

 return (FUNC_0(VAR_2->st_mode));
}
