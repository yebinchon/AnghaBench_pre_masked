
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vr_hash_maddr_cam_ctx {scalar_t__ error; int mask; int sc; } ;
struct sockaddr_dl {int dummy; } ;


 int FUNC_0 (struct sockaddr_dl*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct vr_hash_maddr_cam_ctx *VAR_4 = VAR_1;

 if (VAR_4->error != 0)
  return (0);
 VAR_4->error = FUNC_1(VAR_4->sc, VAR_0, VAR_3, FUNC_0(VAR_2));
 if (VAR_4->error != 0) {
  VAR_4->mask = 0;
  return (0);
 }
 VAR_4->mask |= 1 << VAR_3;

 return (1);
}
