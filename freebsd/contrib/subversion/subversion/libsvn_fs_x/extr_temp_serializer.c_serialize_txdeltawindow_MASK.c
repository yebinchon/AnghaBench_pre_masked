
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int new_data; int num_ops; int ops; } ;
typedef TYPE_1__ svn_txdelta_window_t ;
typedef int svn_temp_serializer__context_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void const* const*,int) ;

__attribute__((used)) static void
FUNC_4(svn_temp_serializer__context_t *VAR_0,
                        svn_txdelta_window_t * const * VAR_1)
{
  svn_txdelta_window_t *VAR_2 = *VAR_1;


  FUNC_3(VAR_0,
                            (const void * const *)VAR_1,
                            sizeof(svn_txdelta_window_t));


  FUNC_1(VAR_0, &VAR_2->ops, VAR_2->num_ops);
  FUNC_0(VAR_0, &VAR_2->new_data);

  FUNC_2(VAR_0);
}
