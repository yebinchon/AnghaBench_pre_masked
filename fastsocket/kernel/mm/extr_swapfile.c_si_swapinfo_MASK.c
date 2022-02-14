
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {scalar_t__ totalswap; scalar_t__ freeswap; } ;
struct swap_info_struct {int flags; scalar_t__ inuse_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct swap_info_struct** VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_2(struct sysinfo *VAR_7)
{
 unsigned int VAR_8;
 unsigned long VAR_9 = 0;

 FUNC_0(&VAR_5);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct swap_info_struct *VAR_10 = VAR_4[VAR_8];

  if ((VAR_10->flags & VAR_0) && !(VAR_10->flags & VAR_1))
   VAR_9 += VAR_10->inuse_pages;
 }
 VAR_7->freeswap = VAR_2 + VAR_9;
 VAR_7->totalswap = VAR_6 + VAR_9;
 FUNC_1(&VAR_5);
}
