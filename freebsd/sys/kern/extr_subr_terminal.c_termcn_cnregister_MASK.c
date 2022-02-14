
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terminal {struct consdev* consdev; int tm_flags; } ;
struct consdev {int cn_name; int cn_pri; struct terminal* cn_arg; int * cn_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct consdev*) ;
 struct consdev* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int FUNC_3 (struct terminal*) ;

void
FUNC_4(struct terminal *VAR_6)
{
 struct consdev *VAR_7;

 VAR_7 = VAR_6->consdev;
 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_1(sizeof(struct consdev), VAR_1,
      VAR_2|VAR_3);
  VAR_7->cn_ops = &VAR_5;
  VAR_7->cn_arg = VAR_6;
  VAR_7->cn_pri = VAR_0;
  FUNC_2(VAR_7->cn_name, "ttyv0");

  VAR_6->tm_flags = VAR_4;
  VAR_6->consdev = VAR_7;

  FUNC_3(VAR_6);
 }


 FUNC_0(VAR_7);
}
