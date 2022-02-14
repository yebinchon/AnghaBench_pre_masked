
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cch_sock; int cch_pd; int cch_flags; int cch_magic; } ;
typedef TYPE_1__ cap_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

cap_channel_t *
FUNC_2(int VAR_2, int VAR_3)
{
 cap_channel_t *VAR_4;

 if (!FUNC_0(VAR_2))
  return (((void*)0));

 if ((VAR_3 & VAR_1) != VAR_3)
  return (((void*)0));

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_4->cch_sock = VAR_2;
  VAR_4->cch_pd = -1;
  VAR_4->cch_flags = VAR_3;
  VAR_4->cch_magic = VAR_0;
 }

 return (VAR_4);
}
