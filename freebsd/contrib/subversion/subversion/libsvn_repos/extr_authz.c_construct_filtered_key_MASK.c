
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t size; char* data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,size_t,int *) ;

__attribute__((used)) static svn_membuf_t *
FUNC_4(const char *VAR_0,
                       const char *VAR_1,
                       const svn_membuf_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  svn_membuf_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  size_t VAR_5 = FUNC_2(VAR_0);
  size_t VAR_6 = VAR_1 ? FUNC_2(VAR_1) : 1;
  const char *VAR_7 = VAR_1 ? VAR_1 : "\0";
  size_t VAR_8 = VAR_2->size + VAR_5 + 1 + VAR_6 + 1;

  FUNC_3(VAR_4, VAR_8, VAR_3);
  VAR_4->size = VAR_8;

  FUNC_1(VAR_4->data, VAR_0, VAR_5 + 1);
  VAR_8 = VAR_5 + 1;
  FUNC_1((char *)VAR_4->data + VAR_8, VAR_7, VAR_6 + 1);
  VAR_8 += VAR_6 + 1;
  FUNC_1((char *)VAR_4->data + VAR_8, VAR_2->data, VAR_2->size);

  return VAR_4;
}
