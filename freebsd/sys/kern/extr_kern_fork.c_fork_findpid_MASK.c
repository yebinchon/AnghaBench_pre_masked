
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,int,int*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_8(int VAR_9)
{
 pid_t VAR_10;
 int VAR_11, VAR_12;




 VAR_12 = 0;
 if (FUNC_1(VAR_8))
  VAR_12 = FUNC_2() % VAR_8;

 FUNC_6(&VAR_7);

 VAR_11 = VAR_1 + 1;
 if (VAR_9 & VAR_0) {
  if (VAR_11 < 10)
   VAR_11 = 10;
 } else {
  VAR_11 += VAR_12;
 }
retry:
 if (VAR_11 >= VAR_2)
  VAR_11 = 2;

 FUNC_3(&VAR_4, VAR_11, VAR_2, &VAR_10);
 if (VAR_10 == -1) {
  FUNC_0(VAR_11 != 2, ("unexpectedly ran out of IDs"));
  VAR_11 = 2;
  goto retry;
 }
 if (FUNC_5(&VAR_3, VAR_10) ||
     FUNC_5(&VAR_6, VAR_10) ||
     FUNC_5(&VAR_5, VAR_10)) {
  VAR_11 = VAR_10 + 1;
  goto retry;
 }




 if ((VAR_9 & VAR_0) == 0)
  VAR_1 = VAR_10;

 FUNC_4(&VAR_4, VAR_10);
 FUNC_7(&VAR_7);

 return (VAR_10);
}
