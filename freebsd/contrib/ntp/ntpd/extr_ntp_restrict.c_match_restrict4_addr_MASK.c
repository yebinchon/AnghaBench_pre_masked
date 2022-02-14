
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int32 ;
struct in_addr {int member_0; } ;
struct TYPE_7__ {int addr; int mask; } ;
struct TYPE_8__ {TYPE_1__ v4; } ;
struct TYPE_9__ {scalar_t__ expire; int mflags; int ippeerlimit; TYPE_2__ u; struct TYPE_9__* link; } ;
typedef TYPE_3__ restrict_u ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct in_addr) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static restrict_u *
FUNC_4(
 u_int32 VAR_4,
 u_short VAR_5
 )
{
 const int VAR_6 = 0;
 restrict_u * VAR_7;
 restrict_u * VAR_8;

 for (VAR_7 = VAR_3; VAR_7 != ((void*)0); VAR_7 = VAR_8) {
  struct in_addr VAR_9 = { FUNC_2(VAR_7->u.v4.addr) };

  VAR_8 = VAR_7->link;
  FUNC_0(2, ("match_restrict4_addr: Checking %s, port %d ... ",
       FUNC_3(VAR_9), VAR_5));
  if ( VAR_7->expire
      && VAR_7->expire <= VAR_2)
   FUNC_1(VAR_7, VAR_6);
  if ( VAR_7->u.v4.addr == (VAR_4 & VAR_7->u.v4.mask)
      && ( !(VAR_1 & VAR_7->mflags)
   || VAR_0 == VAR_5)) {
   FUNC_0(2, ("MATCH: ippeerlimit %d\n", VAR_7->ippeerlimit));
   break;
  }
  FUNC_0(2, ("doesn't match: ippeerlimit %d\n", VAR_7->ippeerlimit));
 }
 return VAR_7;
}
