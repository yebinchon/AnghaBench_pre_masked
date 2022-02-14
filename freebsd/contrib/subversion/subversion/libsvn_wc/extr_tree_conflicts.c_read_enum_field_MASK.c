
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_token_map_t ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int const*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(int *VAR_3,
                const svn_token_map_t *VAR_4,
                const svn_skel_t *VAR_5)
{
  int VAR_6 = FUNC_2(VAR_4, VAR_5->data, VAR_5->len);

  if (VAR_6 == VAR_2)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Unknown enumeration value in tree conflict "
                              "description"));

  *VAR_3 = VAR_6;

  return VAR_1;
}
