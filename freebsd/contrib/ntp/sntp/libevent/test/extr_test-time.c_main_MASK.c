
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct event {int dummy; } ;
typedef int WSADATA ;
typedef int WORD ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct timeval*) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (int) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_11(int VAR_5, char **VAR_6)
{
 struct timeval VAR_7;
 int VAR_8;
 FUNC_7(&VAR_4, 0);


 FUNC_4();

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_2[VAR_8] = FUNC_8(sizeof(struct event));
  FUNC_2(VAR_2[VAR_8] != ((void*)0));


  FUNC_6(VAR_2[VAR_8], VAR_3, VAR_2[VAR_8]);
  VAR_7.tv_sec = 0;
  VAR_7.tv_usec = FUNC_10(50000);
  FUNC_5(VAR_2[VAR_8], &VAR_7);
 }

 FUNC_3();


 FUNC_9("%d, %d\n", VAR_1, VAR_0);
 return (VAR_1 < VAR_0);
}
