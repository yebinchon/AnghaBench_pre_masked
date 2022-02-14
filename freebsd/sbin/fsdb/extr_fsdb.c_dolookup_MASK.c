
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {char* id_name; int id_parent; int id_fix; int id_type; int id_func; int id_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct inodesc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_6)
{
    struct inodesc VAR_7;

    if (!FUNC_0())
     return 0;
    VAR_7.id_number = VAR_4;
    VAR_7.id_func = VAR_5;
    VAR_7.id_name = VAR_6;
    VAR_7.id_type = VAR_0;
    VAR_7.id_fix = VAR_2;
    if (FUNC_1(VAR_3, &VAR_7) & VAR_1) {
 VAR_4 = VAR_7.id_parent;
 VAR_3 = FUNC_2(VAR_4);
 FUNC_3(0);
 return 1;
    } else {
 FUNC_4("name `%s' not found in current inode directory", VAR_6);
 return 0;
    }
}
