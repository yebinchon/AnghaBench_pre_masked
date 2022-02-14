
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; char* gr_passwd; scalar_t__ gr_gid; int ** gr_mem; } ;
typedef scalar_t__ gid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static unsigned int
FUNC_0(const struct group *VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = 0;

 if (VAR_4->gr_name != ((void*)0) && VAR_4->gr_name[0] != '\0')
  VAR_5 |= VAR_2;

 if (VAR_4->gr_passwd != ((void*)0) && VAR_4->gr_passwd[0] != '\0')
  VAR_5 |= VAR_3;

 if (VAR_4->gr_gid != (gid_t)-1)
  VAR_5 |= VAR_0;

 if (VAR_4->gr_mem != ((void*)0) && VAR_4->gr_mem[0] != ((void*)0))
  VAR_5 |= VAR_1;

 return (VAR_5);
}
