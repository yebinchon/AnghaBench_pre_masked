
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* fsap_data; int * vtable; } ;
typedef TYPE_1__ svn_fs_id_t ;
struct TYPE_5__ {char* node_id; char* copy_id; char* txn_id; } ;
typedef TYPE_2__ id_private_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,char const*,int ) ;
 int VAR_0 ;
 char* FUNC_2 (char*,char**) ;

svn_fs_id_t *
FUNC_3(const char *VAR_1,
                      apr_size_t VAR_2,
                      apr_pool_t *VAR_3)
{
  svn_fs_id_t *VAR_4;
  id_private_t *VAR_5;
  char *VAR_6, *VAR_7;



  VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_2);


  VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5));
  VAR_4->vtable = &VAR_0;
  VAR_4->fsap_data = VAR_5;
  VAR_7 = FUNC_2(".", &VAR_6);
  if (VAR_7 == ((void*)0))
    return ((void*)0);
  VAR_5->node_id = VAR_7;


  VAR_7 = FUNC_2(".", &VAR_6);
  if (VAR_7 == ((void*)0))
    return ((void*)0);
  VAR_5->copy_id = VAR_7;


  VAR_7 = FUNC_2(".", &VAR_6);
  if (VAR_7 == ((void*)0))
    return ((void*)0);
  VAR_5->txn_id = VAR_7;

  return VAR_4;
}
