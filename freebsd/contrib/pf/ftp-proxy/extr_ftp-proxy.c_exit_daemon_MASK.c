
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int dummy; } ;


 struct session* FUNC_0 (int *) ;
 struct session* FUNC_1 (int *) ;
 struct session* FUNC_2 (struct session*,int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct session*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

void
FUNC_6(void)
{
 struct session *VAR_3, *VAR_4;

 for (VAR_3 = FUNC_1(&VAR_2); VAR_3 != FUNC_0(&VAR_2); VAR_3 = VAR_4) {
  VAR_4 = FUNC_2(VAR_3, VAR_1);
  FUNC_4(VAR_3);
 }

 if (VAR_0)
  FUNC_3();

 FUNC_5(0);
}
