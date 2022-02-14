
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct sockaddr*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_4(int VAR_2,
      struct sockaddr *VAR_3,
      socklen_t *VAR_4,
      struct timeval *VAR_5)
{
    int VAR_6;
    fd_set VAR_7;
    FUNC_1(&VAR_7);
    FUNC_0(VAR_2, &VAR_7);
    VAR_6 = FUNC_3(VAR_2 + 1, &VAR_7, ((void*)0), ((void*)0), VAR_5);
    if(VAR_6 < 0)
 return VAR_6;
    if(VAR_6 == 0) {
 VAR_1 = VAR_0;
 return -1;
    }
    return FUNC_2(VAR_2, VAR_3, VAR_4);
}
