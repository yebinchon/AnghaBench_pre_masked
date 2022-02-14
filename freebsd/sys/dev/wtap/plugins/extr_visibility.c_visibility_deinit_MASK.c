
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtap_plugin {int wp_sdev; } ;
struct visibility_plugin {int pl_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct visibility_plugin*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct wtap_plugin *VAR_1)
{
 struct visibility_plugin *VAR_2;

 VAR_2 = (struct visibility_plugin *) VAR_1;
 FUNC_0(VAR_1->wp_sdev);
 FUNC_2(&VAR_2->pl_mtx);
 FUNC_1(VAR_2, VAR_0);
 FUNC_3("Removing visibility wtap plugin...\n");
}
