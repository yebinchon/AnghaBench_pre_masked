
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* v; } ;
typedef TYPE_1__ fe25519 ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(unsigned char VAR_0[32], const fe25519 *VAR_1)
{
  int VAR_2;
  fe25519 VAR_3 = *VAR_1;
  FUNC_0(&VAR_3);
  for(VAR_2=0;VAR_2<32;VAR_2++)
    VAR_0[VAR_2] = VAR_3.v[VAR_2];
}
