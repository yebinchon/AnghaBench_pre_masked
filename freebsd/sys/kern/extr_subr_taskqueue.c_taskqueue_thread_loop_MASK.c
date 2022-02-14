
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqueue {int tq_flags; int tq_threads; int tq_tcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct taskqueue*) ;
 int FUNC_1 (struct taskqueue*,struct taskqueue*,char*) ;
 int FUNC_2 (struct taskqueue*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct taskqueue*,int ) ;
 int FUNC_5 (struct taskqueue*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(void *VAR_3)
{
 struct taskqueue **VAR_4, *VAR_5;

 VAR_4 = VAR_3;
 VAR_5 = *VAR_4;
 FUNC_4(VAR_5, VAR_0);
 FUNC_0(VAR_5);
 while ((VAR_5->tq_flags & VAR_2) != 0) {

  FUNC_5(VAR_5);





  if ((VAR_5->tq_flags & VAR_2) == 0)
   break;
  FUNC_1(VAR_5, VAR_5, "-");
 }
 FUNC_5(VAR_5);





 FUNC_2(VAR_5);
 FUNC_4(VAR_5, VAR_1);
 FUNC_0(VAR_5);


 VAR_5->tq_tcount--;
 FUNC_6(VAR_5->tq_threads);
 FUNC_2(VAR_5);
 FUNC_3();
}
