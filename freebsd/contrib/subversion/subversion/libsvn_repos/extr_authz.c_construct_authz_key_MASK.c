
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; char* data; } ;
typedef TYPE_1__ svn_membuf_t ;
struct TYPE_10__ {int digest; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;

__attribute__((used)) static svn_membuf_t *
FUNC_4(const svn_checksum_t *VAR_0,
                    const svn_checksum_t *VAR_1,
                    apr_pool_t *VAR_2)
{
  svn_membuf_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));
  if (VAR_1)
    {
      apr_size_t VAR_4 = FUNC_2(VAR_0);
      apr_size_t VAR_5 = FUNC_2(VAR_1);

      FUNC_3(VAR_3, VAR_4 + VAR_5, VAR_2);
      VAR_3->size = VAR_4 + VAR_5;

      FUNC_1(VAR_3->data, VAR_0->digest, VAR_4);
      FUNC_1((char *)VAR_3->data + VAR_4,
             VAR_1->digest, VAR_5);
    }
  else
    {
      apr_size_t VAR_6 = FUNC_2(VAR_0);
      FUNC_3(VAR_3, VAR_6, VAR_2);
      VAR_3->size = VAR_6;
      FUNC_1(VAR_3->data, VAR_0->digest, VAR_6);
    }

  return VAR_3;
}
