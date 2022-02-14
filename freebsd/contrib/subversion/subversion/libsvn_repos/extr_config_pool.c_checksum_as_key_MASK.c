
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; int size; } ;
typedef TYPE_1__ svn_membuf_t ;
struct TYPE_9__ {int digest; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static svn_membuf_t *
FUNC_4(svn_checksum_t *VAR_0,
                apr_pool_t *VAR_1)
{
  svn_membuf_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  apr_size_t VAR_3 = FUNC_2(VAR_0);

  FUNC_3(VAR_2, VAR_3, VAR_1);
  VAR_2->size = VAR_3;
  FUNC_1(VAR_2->data, VAR_0->digest, VAR_3);

  return VAR_2;
}
