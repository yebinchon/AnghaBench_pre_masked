
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_ent {struct dir_ent* dirname; } ;


 struct dir_ent* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct dir_ent* FUNC_2 (struct dir_ent*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct dir_ent*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct dir_ent *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(&VAR_0);
 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_2, VAR_1);
  FUNC_3(VAR_2->dirname);
  FUNC_3(VAR_2);
  VAR_2 = VAR_3;
 }
 FUNC_1(&VAR_0);
}
