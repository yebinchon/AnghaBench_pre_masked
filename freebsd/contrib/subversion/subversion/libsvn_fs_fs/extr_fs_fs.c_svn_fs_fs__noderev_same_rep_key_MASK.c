
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_4__ {scalar_t__ item_index; scalar_t__ revision; int uniquifier; } ;
typedef TYPE_1__ representation_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;

svn_boolean_t
FUNC_1(representation_t *VAR_2,
                                representation_t *VAR_3)
{
  if (VAR_2 == VAR_3)
    return VAR_1;

  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
    return VAR_0;

  if (VAR_2->item_index != VAR_3->item_index)
    return VAR_0;

  if (VAR_2->revision != VAR_3->revision)
    return VAR_0;

  return FUNC_0(&VAR_2->uniquifier, &VAR_3->uniquifier, sizeof(VAR_2->uniquifier)) == 0;
}
