
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct event_base {int dummy; } ;
typedef int latest ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 struct timeval FUNC_1 (struct timeval,struct timeval) ;
 int FUNC_2 (int ,struct timespec*) ;
 int VAR_3 ;
 int FUNC_3 (struct event_base*,struct timeval*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 (long) ;
 int FUNC_7 (struct timeval*,struct timeval*,int) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (char*,long,long) ;
 int VAR_4 ;
 struct timeval FUNC_10 (struct timeval,struct timeval) ;

int
FUNC_11(
 struct event_base * VAR_5,
 struct timeval * VAR_6
 )
{
 return FUNC_3(VAR_5, VAR_6);

}
