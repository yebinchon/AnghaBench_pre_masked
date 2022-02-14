
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_9__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_10__ {int format; int flush_to_disk; scalar_t__ use_log_addressing; scalar_t__ max_files_per_dir; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int *,char*,scalar_t__) ;
 char* FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (char const*,int ,int *) ;
 int * FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (char const*,int ,int ,int *,int ,int *) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_8 (int *,char*,int) ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_4,
                        svn_boolean_t VAR_5,
                        apr_pool_t *VAR_6)
{
  svn_stringbuf_t *VAR_7;
  fs_fs_data_t *VAR_8 = VAR_4->fsap_data;
  const char *VAR_9 = FUNC_3(VAR_4, VAR_6);

  FUNC_1(1 <= VAR_8->format
                 && VAR_8->format <= VAR_1);

  VAR_7 = FUNC_8(VAR_6, "%d\n", VAR_8->format);

  if (VAR_8->format >= VAR_2)
    {
      if (VAR_8->max_files_per_dir)
        FUNC_7(VAR_7, FUNC_2(VAR_6, "layout sharded %d\n",
                                                  VAR_8->max_files_per_dir));
      else
        FUNC_7(VAR_7, "layout linear\n");
    }

  if (VAR_8->format >= VAR_3)
    {
      if (VAR_8->use_log_addressing)
        FUNC_7(VAR_7, "addressing logical\n");
      else
        FUNC_7(VAR_7, "addressing physical\n");
    }




  if (! VAR_5)
    {

      FUNC_0(FUNC_4(VAR_9, VAR_7->data, VAR_6));
    }
  else
    {
      FUNC_0(FUNC_6(VAR_9, VAR_7->data, VAR_7->len,
                                   ((void*)0) ,
                                   VAR_8->flush_to_disk, VAR_6));
    }


  return FUNC_5(VAR_9, VAR_0, VAR_6);
}
