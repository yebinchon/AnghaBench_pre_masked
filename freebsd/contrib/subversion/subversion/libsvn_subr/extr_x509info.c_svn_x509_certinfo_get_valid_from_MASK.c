
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valid_from; } ;
typedef TYPE_1__ svn_x509_certinfo_t ;
typedef int apr_time_t ;



apr_time_t
FUNC_0(const svn_x509_certinfo_t *VAR_0)
{
  return VAR_0->valid_from;
}
