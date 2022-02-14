
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct snd_dbuf {int total; int blksz; } ;


 int FUNC_0 (struct snd_dbuf*) ;

u_int64_t
FUNC_1(struct snd_dbuf *VAR_0)
{
 FUNC_0(VAR_0);

 return VAR_0->total / VAR_0->blksz;
}
