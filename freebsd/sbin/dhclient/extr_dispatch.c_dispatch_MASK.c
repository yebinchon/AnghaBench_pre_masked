
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timeout {scalar_t__ when; struct timeout* next; int what; int (* func ) (int ) ;} ;
struct protocol {int (* handler ) (struct protocol*) ;struct interface_info* local; struct protocol* next; int fd; } ;
struct pollfd {int events; int revents; int fd; } ;
struct interface_info {scalar_t__ dead; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 struct timeout* VAR_7 ;
 int FUNC_1 (struct protocol*) ;
 scalar_t__ VAR_8 ;
 struct pollfd* FUNC_2 (int) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 struct protocol* VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct protocol*) ;
 int FUNC_6 (scalar_t__*) ;
 struct timeout* VAR_10 ;

void
FUNC_7(void)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 struct protocol *VAR_16;
 struct pollfd *VAR_17;
 time_t VAR_18;

 for (VAR_16 = VAR_9; VAR_16; VAR_16 = VAR_16->next)
  VAR_15++;

 VAR_17 = FUNC_2(VAR_15 * sizeof(struct pollfd));
 if (VAR_17 == ((void*)0))
  FUNC_0("Can't allocate poll structures.");

 do {




another:
  if (VAR_10) {
   struct timeout *VAR_19;

   if (VAR_10->when <= VAR_5) {
    VAR_19 = VAR_10;
    VAR_10 = VAR_10->next;
    (*(VAR_19->func))(VAR_19->what);
    VAR_19->next = VAR_7;
    VAR_7 = VAR_19;
    goto another;
   }







   VAR_18 = VAR_10->when - VAR_5;
   if (VAR_18 > VAR_2 / 1000)
    VAR_18 = VAR_2 / 1000;
   VAR_14 = VAR_18 * 1000;
  } else
   VAR_14 = -1;


  VAR_12 = 0;
  for (VAR_13 = 0, VAR_16 = VAR_9; VAR_16; VAR_16 = VAR_16->next) {
   struct interface_info *VAR_20 = VAR_16->local;

   if (VAR_20 == ((void*)0) || VAR_20->dead)
    continue;
   VAR_17[VAR_13].fd = VAR_16->fd;
   VAR_17[VAR_13].events = VAR_4;
   VAR_17[VAR_13].revents = 0;
   VAR_13++;
   if (VAR_16->handler == FUNC_1)
    VAR_12++;
  }
  if (VAR_12 == 0)
   FUNC_0("No live interfaces to poll on - exiting.");


  VAR_11 = FUNC_3(VAR_17, VAR_15, VAR_14);


  if (VAR_11 == -1) {
   if (VAR_6 == VAR_0 || VAR_6 == VAR_1) {
    FUNC_6(&VAR_5);
    continue;
   } else
    FUNC_0("poll: %m");
  }


  FUNC_6(&VAR_5);

  VAR_13 = 0;
  for (VAR_16 = VAR_9; VAR_16; VAR_16 = VAR_16->next) {
   struct interface_info *VAR_21;
   VAR_21 = VAR_16->local;
   if ((VAR_17[VAR_13].revents & (VAR_4 | VAR_3))) {
    VAR_17[VAR_13].revents = 0;
    if (VAR_21 && (VAR_16->handler != FUNC_1 ||
        !VAR_21->dead))
     (*(VAR_16->handler))(VAR_16);
    if (VAR_8)
     break;
   }
   VAR_13++;
  }
  VAR_8 = 0;
 } while (1);
}
