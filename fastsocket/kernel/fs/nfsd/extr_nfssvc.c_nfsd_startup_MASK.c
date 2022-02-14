
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(unsigned short VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_0)
  return 0;





 VAR_3 = FUNC_4(2*VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  goto out_racache;
 VAR_3 = FUNC_1();
 if (VAR_3)
  goto out_racache;
 VAR_3 = FUNC_2();
 if (VAR_3)
  goto out_lockd;
 VAR_0 = 1;
 return 0;
out_lockd:
 FUNC_0();
out_racache:
 FUNC_5();
 return VAR_3;
}
