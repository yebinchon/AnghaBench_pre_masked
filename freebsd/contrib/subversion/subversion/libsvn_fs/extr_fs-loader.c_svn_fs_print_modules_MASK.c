
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct fs_type_defn {struct fs_type_defn* next; int fsap_name; } ;
struct TYPE_9__ {int (* get_description ) () ;} ;
typedef TYPE_2__ fs_library_vtable_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_0 (int *,char*,int ,int ) ;
 struct fs_type_defn* VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_2__**,struct fs_type_defn*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;

svn_error_t *
FUNC_8(svn_stringbuf_t *VAR_3,
                     apr_pool_t *VAR_4)
{
  struct fs_type_defn *VAR_5 = VAR_2;
  fs_library_vtable_t *VAR_6;
  apr_pool_t *VAR_7 = FUNC_5(VAR_4);

  while (VAR_5)
    {
      char *VAR_8;
      svn_error_t *VAR_9;

      FUNC_4(VAR_7);

      VAR_9 = FUNC_1(&VAR_6, VAR_5, VAR_7);
      if (VAR_9)
        {
          if (VAR_9->apr_err == VAR_0)
            {
              FUNC_3(VAR_9);
              VAR_5 = VAR_5->next;
              continue;
            }
          else
            return VAR_9;
        }

      VAR_8 = FUNC_0(VAR_7, "* fs_%s : %s\n",
                          VAR_5->fsap_name, VAR_6->get_description());
      FUNC_7(VAR_3, VAR_8);
      VAR_5 = VAR_5->next;
    }

  FUNC_6(VAR_7);

  return VAR_1;
}
