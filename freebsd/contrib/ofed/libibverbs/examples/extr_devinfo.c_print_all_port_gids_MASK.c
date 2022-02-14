
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ibv_gid {int* raw; } ;
typedef int uint8_t ;
struct ibv_context {int dummy; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct ibv_context*,int,int,union ibv_gid*) ;
 int FUNC_2 (union ibv_gid*) ;
 int FUNC_3 (char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct ibv_context *VAR_1, uint8_t VAR_2, int VAR_3)
{
 union ibv_gid VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_6, &VAR_4);
  if (VAR_5) {
   FUNC_0(VAR_0, "Failed to query gid to port %d, index %d\n",
          VAR_2, VAR_6);
   return VAR_5;
  }
  if (!FUNC_2(&VAR_4))
   FUNC_3("\t\t\tGID[%3d]:\t\t%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x\n",
          VAR_6,
          VAR_4.raw[ 0], VAR_4.raw[ 1],
          VAR_4.raw[ 2], VAR_4.raw[ 3],
          VAR_4.raw[ 4], VAR_4.raw[ 5],
          VAR_4.raw[ 6], VAR_4.raw[ 7],
          VAR_4.raw[ 8], VAR_4.raw[ 9],
          VAR_4.raw[10], VAR_4.raw[11],
          VAR_4.raw[12], VAR_4.raw[13],
          VAR_4.raw[14], VAR_4.raw[15]);
 }
 return VAR_5;
}
