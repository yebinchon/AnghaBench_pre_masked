
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffered; int buffer; int hashes; } ;
typedef TYPE_1__ svn_fnv1a_32x4__context_t ;
typedef int apr_uint32_t ;


 int FUNC_0 (int ,int ,int ) ;

apr_uint32_t
FUNC_1(svn_fnv1a_32x4__context_t *VAR_0)
{
  return FUNC_0(VAR_0->hashes,
                             VAR_0->buffer,
                             VAR_0->buffered);
}
