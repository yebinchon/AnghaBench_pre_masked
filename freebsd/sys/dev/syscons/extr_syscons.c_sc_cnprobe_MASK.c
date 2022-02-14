
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {void* cn_pri; int cn_name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int*,int*) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct consdev *VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (!FUNC_4(VAR_2)) {
 VAR_3->cn_pri = VAR_0;
 return;
    }

    VAR_3->cn_pri = FUNC_0(&VAR_4, &VAR_5);


    if (!FUNC_2(VAR_4, VAR_5, VAR_1))
 VAR_3->cn_pri = VAR_0;


    FUNC_1(VAR_4, VAR_5, VAR_1);

    if (VAR_3->cn_pri == VAR_0)
 return;


    FUNC_3(VAR_3->cn_name, "ttyv0");
}
