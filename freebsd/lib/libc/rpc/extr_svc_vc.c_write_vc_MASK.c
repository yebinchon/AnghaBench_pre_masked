
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct cf_conn {void* strm_stat; scalar_t__ nonblock; } ;
struct TYPE_2__ {int xp_fd; scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct timeval*,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, void *VAR_4, int VAR_5)
{
 SVCXPRT *VAR_6;
 int VAR_7, VAR_8;
 struct cf_conn *VAR_9;
 struct timeval VAR_10, VAR_11;

 VAR_6 = (SVCXPRT *)VAR_3;
 FUNC_1(VAR_6 != ((void*)0));

 VAR_9 = (struct cf_conn *)VAR_6->xp_p1;

 if (VAR_9->nonblock)
  FUNC_2(&VAR_10, ((void*)0));

 for (VAR_8 = VAR_5; VAR_8 > 0; VAR_8 -= VAR_7, VAR_4 = (char *)VAR_4 + VAR_7) {
  VAR_7 = FUNC_0(VAR_6->xp_fd, VAR_4, (size_t)VAR_8);
  if (VAR_7 < 0) {
   if (VAR_2 != VAR_0 || !VAR_9->nonblock) {
    VAR_9->strm_stat = VAR_1;
    return (-1);
   }
   if (VAR_9->nonblock) {







    FUNC_2(&VAR_11, ((void*)0));
    if (VAR_11 - VAR_10 >= 2) {
     VAR_9->strm_stat = VAR_1;
     return (-1);
    }
   }
   VAR_7 = 0;
  }
 }

 return (VAR_5);
}
