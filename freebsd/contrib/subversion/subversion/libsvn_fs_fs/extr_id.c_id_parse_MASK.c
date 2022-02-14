
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_11__ {scalar_t__ number; void* revision; } ;
struct TYPE_8__ {scalar_t__ number; void* revision; } ;
struct TYPE_9__ {TYPE_5__ txn_id; TYPE_2__ rev_item; int copy_id; int node_id; } ;
struct TYPE_7__ {TYPE_4__* fsap_data; int * vtable; } ;
struct TYPE_10__ {TYPE_3__ private_id; TYPE_1__ generic_id; } ;
typedef TYPE_4__ fs_fs__id_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 void* VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (void**,char*,char const**) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (scalar_t__*,char*) ;
 char* FUNC_4 (char*,char**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,char*) ;

__attribute__((used)) static svn_fs_id_t *
FUNC_7(char *VAR_2,
         apr_pool_t *VAR_3)
{
  fs_fs__id_t *VAR_4;
  char *VAR_5;


  VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->generic_id.vtable = &VAR_1;
  VAR_4->generic_id.fsap_data = VAR_4;
  VAR_5 = FUNC_4(".", &VAR_2);
  if (VAR_5 == ((void*)0))
    return ((void*)0);
  if (! FUNC_2(&VAR_4->private_id.node_id, VAR_5))
    return ((void*)0);


  VAR_5 = FUNC_4(".", &VAR_2);
  if (VAR_5 == ((void*)0))
    return ((void*)0);
  if (! FUNC_2(&VAR_4->private_id.copy_id, VAR_5))
    return ((void*)0);


  VAR_5 = FUNC_4(".", &VAR_2);
  if (VAR_5 == ((void*)0))
    return ((void*)0);

  if (VAR_5[0] == 'r')
    {
      apr_int64_t VAR_6;
      const char *VAR_7;
      svn_error_t *VAR_8;


      VAR_4->private_id.txn_id.revision = VAR_0;
      VAR_4->private_id.txn_id.number = 0;

      VAR_2 = VAR_5 + 1;
      VAR_5 = FUNC_4("/", &VAR_2);
      if (VAR_5 == ((void*)0))
        return ((void*)0);
      if (!FUNC_1(&VAR_4->private_id.rev_item.revision,
                                     VAR_5, &VAR_7))
        return ((void*)0);

      VAR_8 = FUNC_3(&VAR_6, VAR_2);
      if (VAR_8)
        {
          FUNC_5(VAR_8);
          return ((void*)0);
        }
      VAR_4->private_id.rev_item.number = (apr_uint64_t)VAR_6;
    }
  else if (VAR_5[0] == 't')
    {

      VAR_4->private_id.rev_item.revision = VAR_0;
      VAR_4->private_id.rev_item.number = 0;

      if (! FUNC_6(&VAR_4->private_id.txn_id, VAR_5 + 1))
        return ((void*)0);
    }
  else
    return ((void*)0);

  return (svn_fs_id_t *)VAR_4;
}
