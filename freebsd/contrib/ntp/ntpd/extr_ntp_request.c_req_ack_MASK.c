
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct req_pkt {int request; int implementation; } ;
struct pkt {int dummy; } ;
typedef int sockaddr_u ;
typedef int endpt ;
struct TYPE_2__ {int mbz_itemsize; int err_nitems; int request; int implementation; int auth_seq; int rm_vn_mode; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int *,int *,int,struct pkt*,int ) ;

__attribute__((used)) static void
FUNC_5(
 sockaddr_u *VAR_5,
 endpt *VAR_6,
 struct req_pkt *VAR_7,
 int VAR_8
 )
{



 VAR_4.rm_vn_mode = FUNC_3(VAR_0, 0, VAR_3);
 VAR_4.auth_seq = FUNC_0(0, 0);
 VAR_4.implementation = VAR_7->implementation;
 VAR_4.request = VAR_7->request;
 VAR_4.err_nitems = FUNC_1(VAR_8, 0);
 VAR_4.mbz_itemsize = FUNC_2(0);




 FUNC_4(VAR_5, VAR_6, -1, (struct pkt *)&VAR_4, VAR_1);
 VAR_2[VAR_8]++;
}
