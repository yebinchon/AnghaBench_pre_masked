
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int data; } ;
struct iwreq {TYPE_1__ u; } ;
struct iw_request_info {int dummy; } ;
struct iw_ioctl_description {scalar_t__ header_type; int flags; } ;
typedef int (* iw_handler ) (struct net_device*,struct iw_request_info*,TYPE_1__*,int *) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned int,struct iw_ioctl_description const*,int (*) (struct net_device*,struct iw_request_info*,TYPE_1__*,int *),struct net_device*,struct iw_request_info*) ;
 struct iw_ioctl_description* VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (struct net_device*,unsigned int,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device * VAR_7,
          struct iwreq *VAR_8,
          unsigned int VAR_9,
          struct iw_request_info *VAR_10,
          iw_handler VAR_11)
{
 const struct iw_ioctl_description * VAR_12;
 int VAR_13 = -VAR_0;


 if (FUNC_0(VAR_9) >= VAR_6)
  return -VAR_2;
 VAR_12 = &(VAR_5[FUNC_0(VAR_9)]);


 if (VAR_12->header_type != VAR_4) {


  VAR_13 = VAR_11(VAR_7, VAR_10, &(VAR_8->u), ((void*)0));


  if ((VAR_12->flags & VAR_3) &&
     ((VAR_13 == 0) || (VAR_13 == -VAR_1)))
   FUNC_3(VAR_7, VAR_9, &(VAR_8->u), ((void*)0));
 } else {
  VAR_13 = FUNC_2(&VAR_8->u.data, VAR_9, VAR_12,
           VAR_11, VAR_7, VAR_10);
 }


 if (VAR_13 == -VAR_1)
  VAR_13 = FUNC_1(VAR_7);



 return VAR_13;
}
