
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct ifaliasreq {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int * my_hostnam; int root_time; int * root_hostnam; int root_saddr; int * root_fh; int root_args; int mygateway; int myif; } ;
struct TYPE_4__ {int root_fhsize; int * my_hostnam; int root_time; int * root_hostnam; int root_saddr; int * root_fh; TYPE_3__ root_args; int mygateway; int myif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_0(&VAR_5.myif, &VAR_7.myif,
  sizeof(struct ifaliasreq));
 FUNC_0(&VAR_5.mygateway, &VAR_7.mygateway,
  sizeof(struct sockaddr_in));
 FUNC_1(&VAR_7.root_args,&VAR_5.root_args);
 if (VAR_7.root_args.flags & VAR_2) {
  VAR_7.root_fhsize = VAR_3;
  FUNC_0(VAR_5.root_fh, VAR_7.root_fh, VAR_3);
 } else {
  VAR_7.root_fhsize = VAR_4;
  FUNC_0(VAR_5.root_fh, VAR_7.root_fh, VAR_4);
 }
 FUNC_0(&VAR_5.root_saddr,&VAR_7.root_saddr,
  sizeof(struct sockaddr_in));
 FUNC_0(VAR_5.root_hostnam, VAR_7.root_hostnam, VAR_1);
 VAR_7.root_time = VAR_5.root_time;
 FUNC_0(VAR_5.my_hostnam, VAR_7.my_hostnam,
  VAR_0);
 VAR_6 = 3;
}
