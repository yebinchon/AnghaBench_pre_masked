
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_3__ {scalar_t__ h_nelems; } ;
typedef TYPE_1__ ctf_hash_t ;



uint_t
FUNC_0(const ctf_hash_t *VAR_0)
{
 return (VAR_0->h_nelems ? VAR_0->h_nelems - 1 : 0);
}
