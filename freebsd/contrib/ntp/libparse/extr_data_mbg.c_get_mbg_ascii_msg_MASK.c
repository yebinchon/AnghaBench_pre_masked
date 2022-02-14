
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s; int valid; scalar_t__ csum; } ;
typedef scalar_t__ CSUM ;
typedef TYPE_1__ ASCII_MSG ;


 int FUNC_0 (unsigned char**) ;
 scalar_t__ FUNC_1 (unsigned char**) ;
 int FUNC_2 (int ,unsigned char*,int) ;

void
FUNC_3(
 unsigned char **VAR_0,
 ASCII_MSG *VAR_1
 )
{
  VAR_1->csum = (CSUM) FUNC_1(VAR_0);
  VAR_1->valid = FUNC_0(VAR_0);
  FUNC_2(VAR_1->s, *VAR_0, sizeof(VAR_1->s));
  *VAR_0 += sizeof(VAR_1->s);
}
