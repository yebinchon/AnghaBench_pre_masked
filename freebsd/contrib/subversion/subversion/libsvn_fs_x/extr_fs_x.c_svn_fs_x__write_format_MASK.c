
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_9__ {int format; int flush_to_disk; int max_files_per_dir; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_10__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int ) ;
 char* FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (char const*,int ,int *) ;
 int * FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (char const*,int ,int ,int *,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_8 (int *,char*,int) ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_2,
                       svn_boolean_t VAR_3,
                       apr_pool_t *VAR_4)
{
  svn_stringbuf_t *VAR_5;
  const char *VAR_6 = FUNC_3(VAR_2, VAR_4);
  svn_fs_x__data_t *VAR_7 = VAR_2->fsap_data;

  FUNC_1(1 <= VAR_7->format && VAR_7->format <= VAR_1);

  VAR_5 = FUNC_8(VAR_4, "%d\n", VAR_7->format);
  FUNC_7(VAR_5, FUNC_2(VAR_4,
                                            "layout sharded %d\n",
                                            VAR_7->max_files_per_dir));




  if (! VAR_3)
    {

      FUNC_0(FUNC_4(VAR_6, VAR_5->data, VAR_4));
    }
  else
    {
      FUNC_0(FUNC_6(VAR_6, VAR_5->data, VAR_5->len,
                                   ((void*)0) ,
                                   VAR_7->flush_to_disk, VAR_4));
    }


  return FUNC_5(VAR_6, VAR_0, VAR_4);
}
