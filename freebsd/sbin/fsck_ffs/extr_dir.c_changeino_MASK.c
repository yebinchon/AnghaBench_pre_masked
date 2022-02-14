
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {void* id_parent; int id_name; int id_fix; void* id_number; int id_func; int id_type; } ;
typedef void* ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct inodesc*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct inodesc*,int ,int) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(ino_t VAR_3, const char *VAR_4, ino_t VAR_5)
{
 struct inodesc VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(struct inodesc));
 VAR_6.id_type = VAR_0;
 VAR_6.id_func = VAR_2;
 VAR_6.id_number = VAR_3;
 VAR_6.id_fix = VAR_1;
 VAR_6.id_name = FUNC_3(VAR_4);
 VAR_6.id_parent = VAR_5;
 return (FUNC_0(FUNC_1(VAR_3), &VAR_6));
}
