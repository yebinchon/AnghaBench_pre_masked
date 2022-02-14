
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_flush_info {int completion; int cpuleft; int * cache; } ;
typedef int DEFINE_MUTEX ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,struct flow_flush_info*,int ) ;
 int FUNC_11 (int *) ;

void FUNC_12(void)
{
 struct flow_flush_info VAR_2;
 static DEFINE_MUTEX(VAR_3);


 FUNC_2();
 FUNC_6(&VAR_3);
 VAR_2.cache = &VAR_1;
 FUNC_0(&VAR_2.cpuleft, FUNC_8());
 FUNC_3(&VAR_2.completion);

 FUNC_4();
 FUNC_10(VAR_0, &VAR_2, 0);
 FUNC_1((unsigned long)&VAR_2);
 FUNC_5();

 FUNC_11(&VAR_2.completion);
 FUNC_7(&VAR_3);
 FUNC_9();
}
