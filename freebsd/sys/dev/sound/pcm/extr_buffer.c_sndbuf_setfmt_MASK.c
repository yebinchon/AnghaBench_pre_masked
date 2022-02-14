
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_dbuf {int fmt; int bps; int align; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

int
FUNC_3(struct snd_dbuf *VAR_3, u_int32_t VAR_4)
{
 VAR_3->fmt = VAR_4;
 VAR_3->bps = FUNC_1(VAR_3->fmt);
 VAR_3->align = FUNC_0(VAR_3->fmt);
 return 0;
}
