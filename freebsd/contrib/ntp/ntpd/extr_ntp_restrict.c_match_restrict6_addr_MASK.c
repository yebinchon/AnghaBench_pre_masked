
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct in6_addr {int dummy; } ;
struct TYPE_7__ {int addr; int mask; } ;
struct TYPE_8__ {TYPE_1__ v6; } ;
struct TYPE_9__ {scalar_t__ expire; int mflags; TYPE_2__ u; struct TYPE_9__* link; } ;
typedef TYPE_3__ restrict_u ;


 scalar_t__ FUNC_0 (struct in6_addr*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct in6_addr*,struct in6_addr const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_3__*,int const) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static restrict_u *
FUNC_4(
 const struct in6_addr * VAR_4,
 u_short VAR_5
 )
{
 const int VAR_6 = 1;
 restrict_u * VAR_7;
 restrict_u * VAR_8;
 struct in6_addr VAR_9;

 for (VAR_7 = VAR_3; VAR_7 != ((void*)0); VAR_7 = VAR_8) {
  VAR_8 = VAR_7->link;
  FUNC_1(VAR_8 != VAR_7);
  if (VAR_7->expire &&
      VAR_7->expire <= VAR_2)
   FUNC_3(VAR_7, VAR_6);
  FUNC_2(&VAR_9, VAR_4, &VAR_7->u.v6.mask);
  if (FUNC_0(&VAR_9, &VAR_7->u.v6.addr)
      && (!(VAR_1 & VAR_7->mflags)
   || VAR_0 == (int)VAR_5))
   break;
 }
 return VAR_7;
}
