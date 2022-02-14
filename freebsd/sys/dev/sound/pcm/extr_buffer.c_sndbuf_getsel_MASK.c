
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinfo {int dummy; } ;
struct snd_dbuf {struct selinfo sel; } ;



struct selinfo *
FUNC_0(struct snd_dbuf *VAR_0)
{
 return &VAR_0->sel;
}
