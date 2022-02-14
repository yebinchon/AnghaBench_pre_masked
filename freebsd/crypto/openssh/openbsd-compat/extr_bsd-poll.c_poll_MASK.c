
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct pollfd {int fd; int events; int revents; } ;
typedef size_t nfds_t ;
typedef int fd_set ;
typedef int fd_mask ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_3 (size_t,int) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int,int ) ;
 int FUNC_6 (int,int *,int *,int *,struct timeval*) ;

int
FUNC_7(struct pollfd *VAR_8, nfds_t VAR_9, int VAR_10)
{
 nfds_t VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 fd_set *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 size_t VAR_19;
 struct timeval VAR_20, *VAR_21 = ((void*)0);

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_14 = VAR_8[VAR_11].fd;
  if (VAR_14 >= VAR_2) {
   VAR_7 = VAR_0;
   return -1;
  }
  VAR_15 = FUNC_2(VAR_15, VAR_14);
 }

 VAR_19 = FUNC_5(VAR_15 + 1 , VAR_3);
 if ((VAR_16 = FUNC_3(VAR_19, sizeof(fd_mask))) == ((void*)0) ||
     (VAR_17 = FUNC_3(VAR_19, sizeof(fd_mask))) == ((void*)0) ||
     (VAR_18 = FUNC_3(VAR_19, sizeof(fd_mask))) == ((void*)0)) {
  VAR_12 = VAR_1;
  VAR_13 = -1;
  goto out;
 }


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_14 = VAR_8[VAR_11].fd;
  if (VAR_14 == -1)
   continue;
  if (VAR_8[VAR_11].events & VAR_5) {
   FUNC_1(VAR_14, VAR_16);
   FUNC_1(VAR_14, VAR_18);
  }
  if (VAR_8[VAR_11].events & VAR_6) {
   FUNC_1(VAR_14, VAR_17);
   FUNC_1(VAR_14, VAR_18);
  }
 }


 if (VAR_10 >= 0) {
  VAR_20.tv_sec = VAR_10 / 1000;
  VAR_20.tv_usec = (VAR_10 % 1000) * 1000;
  VAR_21 = &VAR_20;
 }

 VAR_13 = FUNC_6(VAR_15 + 1, VAR_16, VAR_17, VAR_18, VAR_21);
 VAR_12 = VAR_7;


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_14 = VAR_8[VAR_11].fd;
  VAR_8[VAR_11].revents = 0;
  if (VAR_14 == -1)
   continue;
  if (FUNC_0(VAR_14, VAR_16)) {
   VAR_8[VAR_11].revents |= VAR_5;
  }
  if (FUNC_0(VAR_14, VAR_17)) {
   VAR_8[VAR_11].revents |= VAR_6;
  }
  if (FUNC_0(VAR_14, VAR_18)) {
   VAR_8[VAR_11].revents |= VAR_4;
  }
 }

out:
 FUNC_4(VAR_16);
 FUNC_4(VAR_17);
 FUNC_4(VAR_18);
 if (VAR_13 == -1)
  VAR_7 = VAR_12;
 return VAR_13;
}
