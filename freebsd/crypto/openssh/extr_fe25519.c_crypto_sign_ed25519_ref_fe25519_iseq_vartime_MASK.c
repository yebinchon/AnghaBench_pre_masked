
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* v; } ;
typedef TYPE_1__ fe25519 ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(const fe25519 *VAR_0, const fe25519 *VAR_1)
{
  int VAR_2;
  fe25519 VAR_3 = *VAR_0;
  fe25519 VAR_4 = *VAR_1;
  FUNC_0(&VAR_3);
  FUNC_0(&VAR_4);
  for(VAR_2=0;VAR_2<32;VAR_2++)
    if(VAR_3[VAR_2] != VAR_4[VAR_2]) return 0;
  return 1;
}
