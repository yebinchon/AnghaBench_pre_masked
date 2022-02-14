
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int revents; int fd; } ;
struct client {int flags; int fd; } ;
typedef int fds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 struct client** VAR_6 ;
 int FUNC_1 (struct pollfd*) ;
 int FUNC_2 (struct client*) ;
 int FUNC_3 (struct client*) ;
 struct pollfd* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct client*) ;
 int VAR_7 ;
 int FUNC_6 (struct pollfd*,unsigned int,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
    struct pollfd *VAR_8;
    unsigned VAR_9;
    unsigned VAR_10;

    while(VAR_7 > 0) {

 VAR_8 = FUNC_4(VAR_7 * sizeof(VAR_8[0]));
 if(VAR_8 == ((void*)0))
     FUNC_0();

 VAR_10 = VAR_7;

 for (VAR_9 = 0 ; VAR_9 < VAR_10; VAR_9++) {
     VAR_8[VAR_9].fd = VAR_6[VAR_9]->fd;
     VAR_8[VAR_9].events = 0;
     if (VAR_6[VAR_9]->flags & VAR_4)
  VAR_8[VAR_9].events |= VAR_1;
     if (VAR_6[VAR_9]->flags & VAR_5)
  VAR_8[VAR_9].events |= VAR_2;

     VAR_8[VAR_9].revents = 0;
 }

 FUNC_6(VAR_8, VAR_10, -1);

 for (VAR_9 = 0 ; VAR_9 < VAR_10; VAR_9++) {
     if (VAR_6[VAR_9] == ((void*)0))
  continue;
     if (VAR_8[VAR_9].revents & VAR_0) {
  VAR_6[VAR_9]->flags |= VAR_3;
  continue;
     }

     if (VAR_8[VAR_9].revents & VAR_1)
  FUNC_2(VAR_6[VAR_9]);
     if (VAR_8[VAR_9].revents & VAR_2)
  FUNC_3(VAR_6[VAR_9]);
 }

 VAR_9 = 0;
 while (VAR_9 < VAR_7) {
     struct client *VAR_11 = VAR_6[VAR_9];
     if (FUNC_5(VAR_11)) {
  if (VAR_9 < VAR_7 - 1)
      VAR_6[VAR_9] = VAR_6[VAR_7 - 1];
  VAR_7--;
     } else
  VAR_9++;
 }

 FUNC_1(VAR_8);
    }
}
