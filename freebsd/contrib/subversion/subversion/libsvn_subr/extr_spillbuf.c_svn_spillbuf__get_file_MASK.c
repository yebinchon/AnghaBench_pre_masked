
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * spill; } ;
typedef TYPE_1__ svn_spillbuf_t ;
typedef int apr_file_t ;



apr_file_t *
FUNC_0(const svn_spillbuf_t *VAR_0)
{
  return VAR_0->spill;
}
