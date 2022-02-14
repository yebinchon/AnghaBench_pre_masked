
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* v; } ;
typedef TYPE_1__ fe25519 ;


 int FUNC_0 (TYPE_1__*) ;

unsigned char FUNC_1(const fe25519 *VAR_0)
{
  fe25519 VAR_1 = *VAR_0;
  FUNC_0(&VAR_1);
  return VAR_1.v[0] & 1;
}
