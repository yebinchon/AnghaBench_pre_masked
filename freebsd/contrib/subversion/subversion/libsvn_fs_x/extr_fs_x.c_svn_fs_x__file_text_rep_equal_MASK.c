
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expanded_size; int sha1_digest; int md5_digest; int id; } ;
typedef TYPE_1__ svn_fs_x__representation_t ;
typedef scalar_t__ svn_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;

svn_boolean_t
FUNC_2(svn_fs_x__representation_t *VAR_2,
                              svn_fs_x__representation_t *VAR_3)
{
  svn_boolean_t VAR_4 = VAR_2 == ((void*)0) || VAR_2->expanded_size == 0;
  svn_boolean_t VAR_5 = VAR_3 == ((void*)0) || VAR_3->expanded_size == 0;


  if (VAR_4 && VAR_5)
    return VAR_1;

  if (VAR_4 != VAR_5)
    return VAR_0;



  if (FUNC_1(&VAR_2->id, &VAR_3->id))
    return VAR_1;



  return FUNC_0(VAR_2->md5_digest, VAR_3->md5_digest, sizeof(VAR_2->md5_digest)) == 0
      && FUNC_0(VAR_2->sha1_digest, VAR_3->sha1_digest, sizeof(VAR_2->sha1_digest)) == 0;
}
