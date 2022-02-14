
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int processed; scalar_t__ initiator; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct regulatory_request* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
 bool VAR_5 = 0;
 struct regulatory_request *VAR_6 = FUNC_1();

 VAR_6->processed = 1;

 FUNC_4(&VAR_2);
 if (!FUNC_2(&VAR_1))
  VAR_5 = 1;
 FUNC_5(&VAR_2);

 if (VAR_6->initiator == VAR_0)
  FUNC_0(&VAR_3);

 if (VAR_5)
  FUNC_3(&VAR_4);
}
