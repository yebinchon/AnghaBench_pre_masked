
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
struct pollfd {int revents; int events; int fd; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *,int *,int ,struct timeval*) ;

int
FUNC_5(struct pollfd *VAR_3, int VAR_4, int VAR_5)
{
    fd_set VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11;
    struct timeval VAR_12, *VAR_13;
    long VAR_14;

    FUNC_2(&VAR_6);
    FUNC_2(&VAR_7);

    VAR_9 = -1;
    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
 VAR_3[VAR_8].revents = 0;

 if (VAR_3[VAR_8].events & VAR_1)
     FUNC_1(VAR_3[VAR_8].fd, &VAR_6);

 if (VAR_3[VAR_8].events & VAR_2)
     FUNC_1(VAR_3[VAR_8].fd, &VAR_7);

 if (VAR_3[VAR_8].fd > VAR_9)
     VAR_9 = VAR_3[VAR_8].fd;
    }

    if (VAR_9 >= VAR_0) {
 FUNC_3("Ran out of fd_set slots; "
      "recompile with a larger FD_SETSIZE.");
    }

    if (VAR_5 < 0) {
 VAR_13 = ((void*)0);
    } else {
 VAR_14 = VAR_5 * 1000;
 VAR_12.tv_sec = VAR_14 / 1000000;
 VAR_12.tv_usec = VAR_14 % 1000000;
        VAR_13 = &VAR_12;
    }

    VAR_10 = FUNC_4(VAR_9 + 1, &VAR_6, &VAR_7, 0, VAR_13);

    if (VAR_10 <= 0)
 return VAR_10;

    VAR_11 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
 if (FUNC_0(VAR_3[VAR_8].fd, &VAR_6))
     VAR_3[VAR_8].revents |= VAR_1;

 if (FUNC_0(VAR_3[VAR_8].fd, &VAR_7))
     VAR_3[VAR_8].revents |= VAR_2;

 if (VAR_3[VAR_8].revents)
     VAR_11++;
    }

    return VAR_11;
}
