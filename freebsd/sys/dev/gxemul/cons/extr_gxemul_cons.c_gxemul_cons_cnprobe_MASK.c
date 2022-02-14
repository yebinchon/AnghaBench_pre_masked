
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_pri; int cn_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_4)
{

 FUNC_0(VAR_4->cn_name, "ttyu0");
 VAR_4->cn_pri = (VAR_3 & VAR_2) ? VAR_1 : VAR_0;
}
