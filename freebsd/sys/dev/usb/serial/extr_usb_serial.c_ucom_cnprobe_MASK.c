
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_name; int cn_pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_3)
{
 if (VAR_2 != -1)
  VAR_3->cn_pri = VAR_1;
 else
  VAR_3->cn_pri = VAR_0;

 FUNC_0(VAR_3->cn_name, "ucom", sizeof(VAR_3->cn_name));
}
