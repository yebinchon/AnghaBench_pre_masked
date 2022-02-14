
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct reset_flags {int flags; } ;
struct reset_entry {int flag; int (* handler ) () ;} ;
struct req_pkt {int u; int err_nitems; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,struct req_pkt*,int ) ;
 struct reset_entry* VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(
 sockaddr_u *VAR_5,
 endpt *VAR_6,
 struct req_pkt *VAR_7
 )
{
 struct reset_flags *VAR_8;
 u_long VAR_9;
 struct reset_entry *VAR_10;

 if (FUNC_0(VAR_7->err_nitems) > 1) {
  FUNC_1(VAR_2, "reset_stats: err_nitems > 1");
  FUNC_3(VAR_5, VAR_6, VAR_7, VAR_0);
  return;
 }

 VAR_8 = (struct reset_flags *)&VAR_7->u;
 VAR_9 = FUNC_2(VAR_8->flags);

 if (VAR_9 & ~VAR_3) {
  FUNC_1(VAR_2, "reset_stats: reset leaves %#lx",
   VAR_9 & ~VAR_3);
  FUNC_3(VAR_5, VAR_6, VAR_7, VAR_0);
  return;
 }

 for (VAR_10 = VAR_4; VAR_10->flag != 0; VAR_10++) {
  if (VAR_9 & VAR_10->flag)
   (*VAR_10->handler)();
 }
 FUNC_3(VAR_5, VAR_6, VAR_7, VAR_1);
}
