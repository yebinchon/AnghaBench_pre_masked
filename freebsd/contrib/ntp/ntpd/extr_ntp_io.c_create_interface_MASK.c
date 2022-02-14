
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct interface {scalar_t__ fd; int flags; scalar_t__ bfd; scalar_t__ family; int sin; int ignore_packets; int ifnum; int name; int bcast; } ;
typedef int sockaddr_u ;
struct TYPE_3__ {int addr; struct TYPE_3__* link; } ;
typedef TYPE_1__ remaddr_t ;
typedef struct interface endpt ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,struct interface*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,struct interface*) ;
 int FUNC_6 (struct interface*) ;
 int FUNC_7 (struct interface*) ;
 int FUNC_8 (int ,int *,int *,int,int,int ,int ) ;
 int FUNC_9 (struct interface*) ;
 struct interface* VAR_12 ;
 int FUNC_10 (int ,char*,int ,int ,...) ;
 struct interface* FUNC_11 (struct interface*) ;
 scalar_t__ FUNC_12 (int *,int ,int ,struct interface*) ;
 TYPE_1__* VAR_13 ;
 scalar_t__ FUNC_13 (struct interface*,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static struct interface *
FUNC_15(
 u_short VAR_14,
 struct interface * VAR_15
 )
{
 sockaddr_u VAR_16;
 endpt * VAR_17;




 FUNC_1(2, ("create_interface(%s#%d)\n", FUNC_14(&VAR_15->sin),
      VAR_14));


 VAR_17 = FUNC_11(VAR_15);




 VAR_17->fd = FUNC_12(&VAR_17->sin, 0, 0, VAR_17);

 if (VAR_17->fd != VAR_5)
  FUNC_9(VAR_17);

 if ((VAR_1 & VAR_17->flags)
     && VAR_17->bfd != VAR_5)
  FUNC_10(VAR_7, "Listening on broadcast address %s#%d",
   FUNC_14((&VAR_17->bcast)), VAR_14);

 if (VAR_5 == VAR_17->fd
     && VAR_5 == VAR_17->bfd) {
  FUNC_10(VAR_6, "unable to create socket on %s (%d) for %s#%d",
   VAR_17->name,
   VAR_17->ifnum,
   FUNC_14((&VAR_17->sin)),
   VAR_14);
  FUNC_7(VAR_17);
  return ((void*)0);
 }




 FUNC_4(&VAR_16, FUNC_0(&VAR_17->sin));
 FUNC_8(VAR_10, &VAR_17->sin, &VAR_16,
        -4, VAR_9 | VAR_8, VAR_11, 0);





 if (((void*)0) == VAR_12 && VAR_0 == VAR_17->family
     && (VAR_2 & VAR_17->flags))
  VAR_12 = VAR_17;




 FUNC_5(&VAR_17->sin, VAR_17);
 FUNC_6(VAR_17);
 FUNC_2(2, (VAR_17, "created ", "\n"));
 return VAR_17;
}
