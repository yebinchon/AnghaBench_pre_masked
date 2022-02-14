
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delta_t; int tm_reconn; int tm_disconn; int status; } ;
typedef TYPE_1__ ANT_INFO ;


 int FUNC_0 (unsigned char**) ;
 int FUNC_1 (unsigned char**) ;
 int FUNC_2 (unsigned char**,int *) ;

void
FUNC_3(
 unsigned char **VAR_0,
 ANT_INFO *VAR_1
 )
{
  VAR_1->status = FUNC_0(VAR_0);
  FUNC_2(VAR_0, &VAR_1->tm_disconn);
  FUNC_2(VAR_0, &VAR_1->tm_reconn);
  VAR_1->delta_t = FUNC_1(VAR_0);
}
