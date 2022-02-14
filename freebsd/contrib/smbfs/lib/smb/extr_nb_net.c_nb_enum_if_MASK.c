
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct nb_ifdesc {int id_flags; struct nb_ifdesc* id_next; int id_mask; int id_addr; int id_name; } ;
struct ifaddrs {int ifa_flags; scalar_t__ ifa_netmask; TYPE_1__* ifa_addr; int ifa_name; struct ifaddrs* ifa_next; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nb_ifdesc*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct ifaddrs*) ;
 scalar_t__ FUNC_2 (struct ifaddrs**) ;
 struct nb_ifdesc* FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct nb_ifdesc **VAR_5, int VAR_6)
{
 struct nb_ifdesc *VAR_7;
 struct ifaddrs *VAR_8, *VAR_9;
 int VAR_10;

 if (FUNC_2(&VAR_8) < 0)
  return VAR_4;

 *VAR_5 = ((void*)0);
 VAR_10 = 0;
 for (VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->ifa_next) {

  if (VAR_10 >= VAR_6)
   break;

  if ((VAR_9->ifa_addr->sa_family != VAR_0) ||
      ((VAR_9->ifa_flags & (VAR_3|VAR_2))
       != (VAR_3|VAR_2)))
   continue;
  if (FUNC_5(VAR_9->ifa_name) >= sizeof(VAR_7->id_name))
   continue;

  VAR_7 = FUNC_3(sizeof(struct nb_ifdesc));
  if (VAR_7 == ((void*)0)) {
   FUNC_1(VAR_8);

   return VAR_1;
  }
  FUNC_0(VAR_7, sizeof(struct nb_ifdesc));
  FUNC_4(VAR_7->id_name, VAR_9->ifa_name);
  VAR_7->id_flags = VAR_9->ifa_flags;
  VAR_7->id_addr = ((struct sockaddr_in *)VAR_9->ifa_addr)->sin_addr;
  VAR_7->id_mask = ((struct sockaddr_in *)VAR_9->ifa_netmask)->sin_addr;
  VAR_7->id_next = *VAR_5;
  *VAR_5 = VAR_7;
  VAR_10++;
 }

 FUNC_1(VAR_8);
 return 0;
}
