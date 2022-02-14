
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_clone {int typemask; int maxunit; int deadline; int flags; int head; int tsp; scalar_t__ size; scalar_t__ refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct snd_clone* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;

struct snd_clone *
FUNC_4(int VAR_5, int VAR_6, int VAR_7, uint32_t VAR_8)
{
 struct snd_clone *VAR_9;

 FUNC_0(!(VAR_5 & ~VAR_4),
     ("invalid typemask: 0x%08x", VAR_5));
 FUNC_0(VAR_6 == -1 ||
     !(VAR_6 & ~(~VAR_5 & VAR_4)),
     ("maxunit overflow: typemask=0x%08x maxunit=%d",
     VAR_5, VAR_6));
 FUNC_0(!(VAR_8 & ~VAR_3),
     ("invalid clone flags=0x%08x", VAR_8));

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0, VAR_1 | VAR_2);
 VAR_9->refcount = 0;
 VAR_9->size = 0;
 VAR_9->typemask = VAR_5;
 VAR_9->maxunit = (VAR_6 == -1) ? (~VAR_5 & VAR_4) :
     VAR_6;
 VAR_9->deadline = VAR_7;
 VAR_9->flags = VAR_8;
 FUNC_3(&VAR_9->tsp);
 FUNC_1(&VAR_9->head);

 return (VAR_9);
}
