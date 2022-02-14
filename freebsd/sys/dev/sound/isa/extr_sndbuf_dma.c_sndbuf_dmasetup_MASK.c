
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dmachan; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct resource*) ;
 int FUNC_1 (struct snd_dbuf*,int ,int) ;

int
FUNC_2(struct snd_dbuf *VAR_1, struct resource *VAR_2)
{

 if (VAR_2 == ((void*)0)) {
  VAR_1->dmachan = -1;
 } else {
  FUNC_1(VAR_1, VAR_0, 1);
  VAR_1->dmachan = FUNC_0(VAR_2);
 }
 return 0;
}
