
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int totalram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (struct sysinfo*) ;
 int * FUNC_6 (int *,int,int ,int ,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(void)
{
 int VAR_11 = 0;

 FUNC_0(!FUNC_2(&VAR_7));
 if (VAR_9) {
  FUNC_7(VAR_9);
  return 0;
 }
 if (VAR_6 == 0) {

  struct sysinfo VAR_12;
  FUNC_5(&VAR_12);






  VAR_6 = VAR_1;
  VAR_12.totalram <<= VAR_2 - 12;
  while (VAR_6 > VAR_12.totalram &&
         VAR_6 >= 8*1024*2)
   VAR_6 /= 2;
 }
 FUNC_3();

 VAR_9 = FUNC_6(&VAR_8, VAR_6,
          VAR_5, VAR_4, VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_4();
 FUNC_1(&VAR_10);
 return VAR_11;
}
