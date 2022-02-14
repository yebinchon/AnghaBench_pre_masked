
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int utf8_value; int oid_len; int oid; } ;
typedef TYPE_1__ svn_x509_name_attr_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;

svn_x509_name_attr_t *
FUNC_3(const svn_x509_name_attr_t *VAR_0,
                       apr_pool_t *VAR_1,
                       apr_pool_t *VAR_2)
{
  svn_x509_name_attr_t *VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_3));
  VAR_3->oid_len = VAR_0->oid_len;
  VAR_3->oid = FUNC_1(VAR_1, VAR_0->oid, VAR_0->oid_len);
  VAR_3->utf8_value = FUNC_2(VAR_1, VAR_0->utf8_value);

  return VAR_3;
}
