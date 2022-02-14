
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_clone {int typemask; int maxunit; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

int
FUNC_1(struct snd_clone *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1 != ((void*)0), ("NULL snd_clone"));
 FUNC_0(VAR_2 == -1 ||
     !(VAR_2 & ~(~VAR_1->typemask & VAR_0)),
     ("maxunit overflow: typemask=0x%08x maxunit=%d",
     VAR_1->typemask, VAR_2));

 VAR_1->maxunit = (VAR_2 == -1) ? (~VAR_1->typemask & VAR_0) :
     VAR_2;

 return (VAR_1->maxunit);
}
