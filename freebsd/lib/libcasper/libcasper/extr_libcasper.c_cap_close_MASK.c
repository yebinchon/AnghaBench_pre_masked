
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cch_magic; int cch_pd; int cch_sock; } ;
typedef TYPE_1__ cap_channel_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(cap_channel_t *VAR_1)
{

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_1->cch_magic == VAR_0);

 VAR_1->cch_magic = 0;
 if (VAR_1->cch_pd != -1)
  FUNC_1(VAR_1->cch_pd);
 FUNC_1(VAR_1->cch_sock);
 FUNC_2(VAR_1);
}
