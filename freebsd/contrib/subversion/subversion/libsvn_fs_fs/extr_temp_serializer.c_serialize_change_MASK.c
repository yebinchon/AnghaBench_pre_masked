
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_6__ {int copyfrom_path; int node_rev_id; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_7__ {TYPE_2__ info; TYPE_1__ path; } ;
typedef TYPE_3__ change_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void const* const*,int) ;

__attribute__((used)) static void
FUNC_4(svn_temp_serializer__context_t *VAR_0,
                 change_t * const *VAR_1)
{
  const change_t * VAR_2 = *VAR_1;
  if (VAR_2 == ((void*)0))
    return;


  FUNC_3(VAR_0,
                            (const void * const *)VAR_1,
                            sizeof(*VAR_2));


  FUNC_0(VAR_0, &VAR_2->info.node_rev_id);

  FUNC_1(VAR_0, &VAR_2->path.data);
  FUNC_1(VAR_0, &VAR_2->info.copyfrom_path);


  FUNC_2(VAR_0);
}
