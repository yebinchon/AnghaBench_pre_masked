
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* oid; int oid_len; } ;
typedef TYPE_1__ svn_x509_name_attr_t ;
typedef int apr_size_t ;



const unsigned char *
FUNC_0(const svn_x509_name_attr_t *VAR_0, apr_size_t *VAR_1)
{
  *VAR_1 = VAR_0->oid_len;
  return VAR_0->oid;
}
