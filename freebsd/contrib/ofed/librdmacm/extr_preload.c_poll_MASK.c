
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pollfd {scalar_t__ revents; int events; int fd; } ;
typedef int nfds_t ;
struct TYPE_2__ {int (* poll ) (struct pollfd*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 struct pollfd* FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (struct pollfd*,int,int) ;
 int FUNC_6 (struct pollfd*,int,int) ;

int FUNC_7(struct pollfd *VAR_3, nfds_t VAR_4, int VAR_5)
{
 struct pollfd *VAR_6;
 int VAR_7, VAR_8;

 FUNC_4();
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (FUNC_2(VAR_3[VAR_7].fd) == VAR_1)
   goto use_rpoll;
 }

 return VAR_2.poll(VAR_3, VAR_4, VAR_5);

use_rpoll:
 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6)
  return FUNC_0(VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6[VAR_7].fd = FUNC_1(VAR_3[VAR_7].fd);
  VAR_6[VAR_7].events = VAR_3[VAR_7].events;
  VAR_6[VAR_7].revents = 0;
 }

 VAR_8 = FUNC_5(VAR_6, VAR_4, VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  VAR_3[VAR_7].revents = VAR_6[VAR_7].revents;

 return VAR_8;
}
