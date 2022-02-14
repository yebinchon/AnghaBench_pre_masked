
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; scalar_t__ url; scalar_t__ author; scalar_t__ date; scalar_t__ revision; } ;
typedef TYPE_1__ svn_subst_keywords_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static apr_hash_t *
FUNC_2(const svn_subst_keywords_t *VAR_10,
                   apr_pool_t *VAR_11)
{
  apr_hash_t *VAR_12;

  if (VAR_10 == ((void*)0))
    return ((void*)0);

  VAR_12 = FUNC_0(VAR_11);

  if (VAR_10->revision)
    {
      FUNC_1(VAR_12, VAR_5, VAR_10->revision);
      FUNC_1(VAR_12, VAR_6, VAR_10->revision);
      FUNC_1(VAR_12, VAR_7, VAR_10->revision);
    }
  if (VAR_10->date)
    {
      FUNC_1(VAR_12, VAR_2, VAR_10->date);
      FUNC_1(VAR_12, VAR_3, VAR_10->date);
    }
  if (VAR_10->author)
    {
      FUNC_1(VAR_12, VAR_0, VAR_10->author);
      FUNC_1(VAR_12, VAR_1, VAR_10->author);
    }
  if (VAR_10->url)
    {
      FUNC_1(VAR_12, VAR_8, VAR_10->url);
      FUNC_1(VAR_12, VAR_9, VAR_10->url);
    }
  if (VAR_10->id)
    {
      FUNC_1(VAR_12, VAR_4, VAR_10->id);
    }

  return VAR_12;
}
