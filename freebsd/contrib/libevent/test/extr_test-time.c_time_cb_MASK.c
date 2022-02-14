
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,struct timeval*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_3, short VAR_4, void *VAR_5)
{
 struct timeval VAR_6;
 int VAR_7, VAR_8;

 VAR_1++;

 if (VAR_1 < 10*VAR_0) {
  for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
   VAR_8 = FUNC_2(VAR_0);
   VAR_6.tv_sec = 0;
   VAR_6.tv_usec = FUNC_2(50000);
   if (VAR_6.tv_usec % 2 || VAR_1 < VAR_0)
    FUNC_0(VAR_2[VAR_8], &VAR_6);
   else
    FUNC_1(VAR_2[VAR_8]);
  }
 }
}
