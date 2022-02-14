
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int r_fds ;
struct TYPE_3__ {int fd; int * bp; } ;
typedef TYPE_1__ pcap_t ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int,int *,int,int ) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int FUNC_5(pcap_t *VAR_0, int VAR_1) {
 struct timeval VAR_2;
 int VAR_3, VAR_4;
 fd_set VAR_5;
 fd_set VAR_6;
 u_char *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;

 VAR_2.tv_sec = 5;
 VAR_2.tv_usec = 0;

 VAR_4 = VAR_0->fd;
 FUNC_1(&VAR_5);
 FUNC_0(VAR_4, &VAR_5);
 FUNC_2(&VAR_6, &VAR_5, sizeof(VAR_5));
 VAR_7 = VAR_0->bp;
 while (VAR_1) {
  VAR_3 = FUNC_4(VAR_4 + 1, &VAR_6, ((void*)0), ((void*)0), &VAR_2);
  if (VAR_3 == -1) {

   return -1;
  } else if (VAR_3 == 0) {

   return -1;
  } else {
   if ((VAR_8 = FUNC_3(VAR_4, (VAR_7 + VAR_9), VAR_1, 0)) <= 0) {

    return -1;
   }
   VAR_1 -= VAR_8;
   VAR_9 += VAR_8;
  }
 }
 return 0;
}
