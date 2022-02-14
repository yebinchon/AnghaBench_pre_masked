
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hostnames; int digest; int valid_to; int valid_from; void* issuer; void* subject; } ;
typedef TYPE_1__ svn_x509_certinfo_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int *) ;
 void* FUNC_2 (void*,int *) ;
 int FUNC_3 (int ,int *) ;

svn_x509_certinfo_t *
FUNC_4(const svn_x509_certinfo_t *VAR_0,
                      apr_pool_t *VAR_1,
                      apr_pool_t *VAR_2)
{
  svn_x509_certinfo_t *VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_3));
  VAR_3->subject = FUNC_2(VAR_0->subject, VAR_1);
  VAR_3->issuer = FUNC_2(VAR_0->issuer, VAR_1);
  VAR_3->valid_from = VAR_0->valid_from;
  VAR_3->valid_to = VAR_0->valid_to;
  VAR_3->digest = FUNC_3(VAR_0->digest, VAR_1);
  VAR_3->hostnames = FUNC_1(VAR_0->hostnames, VAR_1);

  return VAR_3;
}
