
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr_dl {scalar_t__ sdl_index; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rt_addrinfo {int rti_flags; TYPE_2__* rti_ifa; int * rti_ifp; struct sockaddr** rti_info; } ;
struct epoch_tracker {int dummy; } ;
struct TYPE_5__ {int * ifa_ifp; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct sockaddr* VAR_4 ;
 int VAR_5 ;
 struct sockaddr* VAR_6 ;
 TYPE_2__* FUNC_2 (int *) ;
 void* FUNC_3 (int ,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int * VAR_7 ;
 void* FUNC_5 (struct sockaddr*,int *) ;
 int * FUNC_6 (scalar_t__) ;
 TYPE_1__* VAR_8 ;

int
FUNC_7(struct rt_addrinfo *VAR_9, u_int VAR_10)
{
 struct epoch_tracker VAR_11;
 int VAR_12, VAR_13;





 VAR_13 = 0;
 VAR_12 = (VAR_9->rti_ifa == ((void*)0));
 FUNC_0(VAR_11);


 if (VAR_9->rti_ifp == ((void*)0) && VAR_8 != ((void*)0) &&
     VAR_8->sa_family == VAR_0) {
     const struct sockaddr_dl *VAR_14 = (const struct sockaddr_dl *)VAR_8;
     if (VAR_14->sdl_index != 0)
      VAR_9->rti_ifp = FUNC_6(VAR_14->sdl_index);
 }




 if (VAR_9->rti_ifa == ((void*)0) && VAR_7 != ((void*)0))
  VAR_9->rti_ifa = FUNC_2(VAR_7);
 if (VAR_9->rti_ifa == ((void*)0)) {
  struct sockaddr *VAR_15;
  if (VAR_9->rti_info[VAR_2] != ((void*)0))
   VAR_15 = VAR_9->rti_info[VAR_2];
  else if ((VAR_9->rti_flags & VAR_3) != 0 &&
      VAR_6->sa_family == VAR_4->sa_family)
   VAR_15 = VAR_6;
  else
   VAR_15 = VAR_4;
  if (VAR_9->rti_ifp != ((void*)0)) {
   VAR_9->rti_ifa = FUNC_5(VAR_15, VAR_9->rti_ifp);

   if (VAR_9->rti_ifa == ((void*)0) && VAR_6 != ((void*)0))
    VAR_9->rti_ifa = FUNC_5(VAR_6, VAR_9->rti_ifp);
  } else if (VAR_4 != ((void*)0) && VAR_6 != ((void*)0))
   VAR_9->rti_ifa = FUNC_3(VAR_5, VAR_4, VAR_6,
       VAR_10);
  else if (VAR_15 != ((void*)0))
   VAR_9->rti_ifa = FUNC_3(VAR_5, VAR_15, VAR_15,
       VAR_10);
 }
 if (VAR_12 && VAR_9->rti_ifa != ((void*)0)) {
  if (VAR_9->rti_ifp == ((void*)0))
   VAR_9->rti_ifp = VAR_9->rti_ifa->ifa_ifp;
  FUNC_4(VAR_9->rti_ifa);
 } else
  VAR_13 = VAR_1;
 FUNC_1(VAR_11);
 return (VAR_13);
}
