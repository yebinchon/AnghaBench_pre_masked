
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cch_magic; int cch_sock; int cch_pd; int cch_flags; } ;
typedef TYPE_1__ cap_channel_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(cap_channel_t *VAR_1, int *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_1->cch_magic == VAR_0);

 VAR_3 = VAR_1->cch_sock;
 if (VAR_1->cch_pd != -1)
  FUNC_1(VAR_1->cch_pd);
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_1->cch_flags;
 VAR_1->cch_magic = 0;
 FUNC_2(VAR_1);

 return (VAR_3);
}
