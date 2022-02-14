
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
struct ifreq {int ifr_flags; TYPE_5__ ifr_addr; } ;
struct ifconf {int ifc_len; char* ifc_buf; } ;
typedef int ifrpool ;
typedef char* caddr_t ;
typedef int buf ;
struct TYPE_7__ {char* ip_net_name; char* ip_net_num; struct TYPE_7__* ip_next; } ;
typedef TYPE_2__ addrlist ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ifreq*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (scalar_t__,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,char*) ;
 TYPE_2__* VAR_12 ;
 int FUNC_6 (struct ifreq*,char*,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (scalar_t__,int ,int ) ;

void
FUNC_10(char **VAR_13, char **VAR_14)
{
  struct ifconf VAR_15;
  struct ifreq *VAR_16, VAR_17;
  caddr_t VAR_18, VAR_19;
  int VAR_20 = -1;
  u_long VAR_21;
  addrlist *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
  char VAR_24[VAR_1];



  FUNC_8(VAR_11, "getwire unable to get interface flags");
  VAR_12 = ((void*)0);
  return;





  if ((VAR_20 = FUNC_9(VAR_0, VAR_10, 0)) < 0)
    goto out;




  FUNC_7(&VAR_24[0], 0, VAR_1);
  VAR_15.ifc_len = sizeof(VAR_24);
  VAR_15.ifc_buf = VAR_24;




  if (FUNC_5(VAR_20, VAR_7, (caddr_t) & VAR_15) < 0)
    goto out;




  VAR_19 = VAR_24 + VAR_15.ifc_len;
  for (VAR_18 = VAR_24; VAR_18 < VAR_19; ) {
    FUNC_6(&VAR_17, VAR_18, sizeof(VAR_17));
    VAR_16 = &VAR_17;
    VAR_18 += FUNC_1(VAR_16);

    if (VAR_16->ifr_addr.sa_family != VAR_0)
      continue;

    VAR_21 = ((struct sockaddr_in *) &VAR_16->ifr_addr)->sin_addr.s_addr;




    if (FUNC_5(VAR_20, VAR_8, (caddr_t) VAR_16) < 0)
      continue;





    if (VAR_21 == FUNC_4(VAR_5))
      continue;
    if ((VAR_16->ifr_flags & VAR_3) == 0 ||
 (VAR_16->ifr_flags & VAR_4) == 0)
      continue;

    if ((VAR_16->ifr_flags & VAR_2) == 0) {



      if (FUNC_5(VAR_20, VAR_9, (caddr_t) VAR_16) < 0)
 continue;

      VAR_22 = FUNC_3(VAR_21, FUNC_0(&VAR_16->ifr_addr), 0);
    } else
      VAR_22 = FUNC_3(VAR_21, 0xffffffff, 1);


    if (!VAR_12) {
      VAR_12 = VAR_23 = VAR_22;
      VAR_23->ip_next = ((void*)0);
    } else {
      VAR_23->ip_next = VAR_22;
      VAR_23 = VAR_22;
    }
  }

out:
  if (VAR_20 >= 0)
    FUNC_2(VAR_20);
  if (VAR_12) {
    *VAR_13 = VAR_12->ip_net_name;
    *VAR_14 = VAR_12->ip_net_num;
  } else {
    *VAR_13 = VAR_6;
    *VAR_14 = "0.0.0.0";
  }
}
