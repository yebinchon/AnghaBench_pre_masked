
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,struct tty*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tty* FUNC_2 (int *,int *) ;
 int FUNC_3 (struct tty*,int ) ;
 int FUNC_4 (struct tty*,int *,char*,char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct tty *VAR_5;

 VAR_5 = FUNC_2(&VAR_3, ((void*)0));
 FUNC_3(VAR_5, 0);
 FUNC_4(VAR_5, ((void*)0), "%s", "ttyu0");
 FUNC_0(&VAR_0, 1);
 FUNC_1(&VAR_0, VAR_1,
     VAR_2, VAR_5);

}
