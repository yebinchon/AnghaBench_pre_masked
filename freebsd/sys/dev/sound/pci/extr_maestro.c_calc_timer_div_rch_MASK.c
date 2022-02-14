
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct agg_rchinfo {int speed; int blklen; int stereo; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static u_int
FUNC_1(struct agg_rchinfo *VAR_0)
{
 u_int VAR_1;

 VAR_1 = VAR_0->speed;






 return (48000 * (VAR_0->blklen << (!VAR_0->stereo))
  + VAR_1 - 1) / VAR_1;
}
