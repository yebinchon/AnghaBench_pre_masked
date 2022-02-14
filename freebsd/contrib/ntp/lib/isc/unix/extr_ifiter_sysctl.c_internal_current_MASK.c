
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr_dl {unsigned int sdl_nlen; int sdl_data; int sdl_index; } ;
struct sockaddr {int sa_family; int sa_len; } ;
struct ifa_msghdr {scalar_t__ ifam_version; scalar_t__ ifam_type; int ifam_flags; int ifam_addrs; } ;
struct if_msghdr {int dummy; } ;
typedef scalar_t__ sa ;
typedef int isc_result_t ;
struct TYPE_8__ {int flags; int af; struct TYPE_8__* name; int broadcast; int dstaddress; int netmask; int address; int ifindex; } ;
struct TYPE_7__ {unsigned int pos; int bufused; TYPE_2__ current; scalar_t__ buf; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;


 int VAR_16 ;

 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sockaddr*) ;
 int FUNC_5 (int,int *,struct sockaddr*,TYPE_2__*) ;
 int VAR_20 ;
 char* FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (TYPE_2__*,int ,unsigned int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static isc_result_t
FUNC_10(isc_interfaceiter_t *VAR_21) {
 struct ifa_msghdr *VAR_22, *VAR_23;

 FUNC_1(FUNC_3(VAR_21));
 FUNC_1 (VAR_21->pos < (unsigned int) VAR_21->bufused);

 VAR_22 = (struct ifa_msghdr *) ((char *) VAR_21->buf + VAR_21->pos);
 VAR_23 = (struct ifa_msghdr *) ((char *) VAR_21->buf + VAR_21->bufused);


 if (VAR_22->ifam_version != VAR_19)
  return (VAR_14);

 if (VAR_22->ifam_type == VAR_17) {
  struct if_msghdr *VAR_24 = (struct if_msghdr *) VAR_22;
  struct sockaddr_dl *VAR_25 = (struct sockaddr_dl *) (VAR_24 + 1);
  unsigned int VAR_26;

  FUNC_8(&VAR_21->current, 0, sizeof(VAR_21->current));

  VAR_21->current.ifindex = VAR_25->sdl_index;
  VAR_26 = VAR_25->sdl_nlen;
  if (VAR_26 > sizeof(VAR_21->current.name) - 1)
   VAR_26 = sizeof(VAR_21->current.name) - 1;

  FUNC_8(VAR_21->current.name, 0, sizeof(VAR_21->current.name));
  FUNC_7(VAR_21->current.name, VAR_25->sdl_data, VAR_26);

  VAR_21->current.flags = 0;

  if ((VAR_22->ifam_flags & VAR_6) != 0)
   VAR_21->current.flags |= VAR_11;

  if ((VAR_22->ifam_flags & VAR_5) != 0)
   VAR_21->current.flags |= VAR_10;

  if ((VAR_22->ifam_flags & VAR_3) != 0)
   VAR_21->current.flags |= VAR_8;

  if ((VAR_22->ifam_flags & VAR_2) != 0)
   VAR_21->current.flags |= VAR_7;
  return (VAR_14);
 } else if (VAR_22->ifam_type == VAR_18) {
  int VAR_27;
  int VAR_28;
  struct sockaddr *VAR_29 = ((void*)0);
  struct sockaddr *VAR_30 = ((void*)0);
  struct sockaddr *VAR_31 = ((void*)0);

  struct sockaddr *VAR_32 = (struct sockaddr *)(VAR_22 + 1);
  VAR_28 = VAR_32->sa_family;

  for (VAR_27 = 0; VAR_27 < VAR_16; VAR_27++)
  {
   if ((VAR_22->ifam_addrs & (1 << VAR_27)) == 0)
    continue;

   FUNC_0(VAR_32 < (struct sockaddr *) VAR_23);

   switch (VAR_27) {
   case 128:
    VAR_29 = VAR_32;
    break;
   case 129:
    VAR_30 = VAR_32;
    break;
   case 130:
    VAR_31 = VAR_32;
    break;
   }
   VAR_32 = (struct sockaddr *)((char*)(VAR_32)
      + FUNC_2(sizeof(struct sockaddr)));


  }

  if (VAR_30 == ((void*)0))
   return (VAR_14);

  VAR_28 = VAR_30->sa_family;
  if (VAR_28 != VAR_0 && VAR_28 != VAR_1)
   return (VAR_14);

  VAR_21->current.af = VAR_28;

  FUNC_5(VAR_28, &VAR_21->current.address, VAR_30,
    VAR_21->current.name);

  if (VAR_29 != ((void*)0))
   FUNC_5(VAR_28, &VAR_21->current.netmask, VAR_29,
     VAR_21->current.name);

  if (VAR_31 != ((void*)0) &&
      (VAR_21->current.flags & VAR_10) != 0)
   FUNC_5(VAR_28, &VAR_21->current.dstaddress, VAR_31,
     VAR_21->current.name);

  if (VAR_31 != ((void*)0) &&
      (VAR_21->current.flags & VAR_7) != 0)
   FUNC_5(VAR_28, &VAR_21->current.broadcast, VAR_31,
     VAR_21->current.name);

  return (VAR_15);
 } else {
  FUNC_9("%s", FUNC_6(VAR_20,
         VAR_12,
         VAR_13,
         "warning: unexpected interface "
         "list message type\n"));
  return (VAR_14);
 }
}
