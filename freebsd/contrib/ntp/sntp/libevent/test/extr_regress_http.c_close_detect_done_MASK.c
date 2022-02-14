
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct evhttp_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,struct timeval*) ;
 scalar_t__ FUNC_1 (struct evhttp_request*) ;
 int FUNC_2 (struct timeval*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct evhttp_request *VAR_2, void *VAR_3)
{
 struct timeval VAR_4;
 FUNC_3(VAR_2);
 FUNC_3(FUNC_1(VAR_2) == VAR_0);

 VAR_1 = 1;

 end:
 FUNC_2(&VAR_4);
 VAR_4.tv_usec = 150000;
 FUNC_0(VAR_3, &VAR_4);
}
