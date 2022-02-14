
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txdelta_baton {TYPE_1__* checksum; int * context; scalar_t__ more; } ;
struct TYPE_2__ {unsigned char const* digest; } ;



__attribute__((used)) static const unsigned char *
FUNC_0(void *VAR_0)
{
  struct txdelta_baton *VAR_1 = VAR_0;


  if (VAR_1->more)
    return ((void*)0);


  if (VAR_1->context == ((void*)0))
    return ((void*)0);


  return VAR_1->checksum->digest;
}
