
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_clone {int flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

uint32_t
FUNC_1(struct snd_clone *VAR_1, uint32_t VAR_2)
{
 FUNC_0(VAR_1 != ((void*)0), ("NULL snd_clone"));
 FUNC_0(!(VAR_2 & ~VAR_0),
     ("invalid clone flags=0x%08x", VAR_2));

 VAR_1->flags = VAR_2;

 return (VAR_1->flags);
}
