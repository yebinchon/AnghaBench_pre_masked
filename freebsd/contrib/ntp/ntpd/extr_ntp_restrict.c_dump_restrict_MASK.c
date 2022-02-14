
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct in_addr {int member_0; } ;
struct TYPE_8__ {int mask; int addr; } ;
struct TYPE_7__ {struct in_addr mask; struct in_addr addr; } ;
struct TYPE_9__ {TYPE_2__ v4; TYPE_1__ v6; } ;
struct TYPE_10__ {int link; int expire; int ippeerlimit; int mflags; int rflags; int count; TYPE_3__ u; } ;
typedef TYPE_4__ restrict_u ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct in_addr*,char*,int) ;
 int FUNC_2 (char*,TYPE_4__*,char*,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(
 restrict_u * VAR_3,
 int VAR_4
 )
{
 char VAR_5[VAR_2];
 char VAR_6[VAR_2];

 if (VAR_4) {
  FUNC_1(VAR_1, &VAR_3->u.v6.addr, VAR_5, sizeof VAR_5);
  FUNC_1(VAR_1, &VAR_3->u.v6.mask, VAR_6, sizeof VAR_6);
 } else {
  struct in_addr VAR_7 = { FUNC_0(VAR_3->u.v4.addr) };
  struct in_addr VAR_8 = { FUNC_0(VAR_3->u.v4.mask) };

  FUNC_1(VAR_0, &VAR_7, VAR_5, sizeof VAR_5);
  FUNC_1(VAR_0, &VAR_8, VAR_6, sizeof VAR_6);
 }
 FUNC_2("restrict node at %p: %s/%s count %d, rflags %05x, mflags %05x, ippeerlimit %d, expire %lu, next %p\n",
  VAR_3, VAR_5, VAR_6, VAR_3->count, VAR_3->rflags, VAR_3->mflags,
  VAR_3->ippeerlimit, VAR_3->expire, VAR_3->link);
 return;
}
