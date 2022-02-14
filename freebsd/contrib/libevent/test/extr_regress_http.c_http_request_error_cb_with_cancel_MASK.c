
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef enum evhttp_request_error { ____Placeholder_evhttp_request_error } evhttp_request_error ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timeval*) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(enum evhttp_request_error VAR_4, void *VAR_5)
{
 if (VAR_4 != VAR_0) {
  FUNC_3(VAR_2, "FAILED\n");
  FUNC_2(1);
 }
 VAR_3 = 1;

 {
  struct timeval VAR_6;
  FUNC_1(&VAR_6);
  VAR_6.tv_sec = 0;
  VAR_6.tv_usec = 500 * 1000;
  FUNC_0(VAR_1, &VAR_6);
 }
}
