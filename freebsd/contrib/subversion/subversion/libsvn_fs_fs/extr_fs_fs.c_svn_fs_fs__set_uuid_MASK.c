
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_10__ {void* uuid; int pool; TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_11__ {scalar_t__ format; void* instance_id; int flush_to_disk; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 void* FUNC_1 (int ,char const*) ;
 char* FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (char const*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_2,
                    const char *VAR_3,
                    const char *VAR_4,
                    apr_pool_t *VAR_5)
{
  fs_fs_data_t *VAR_6 = VAR_2->fsap_data;
  const char *VAR_7 = FUNC_2(VAR_2, VAR_5);
  svn_stringbuf_t *VAR_8 = FUNC_6(VAR_5);

  if (! VAR_3)
    VAR_3 = FUNC_7(VAR_5);

  if (! VAR_4)
    VAR_4 = FUNC_7(VAR_5);

  FUNC_5(VAR_8, VAR_3);
  FUNC_5(VAR_8, "\n");

  if (VAR_6->format >= VAR_0)
    {
      FUNC_5(VAR_8, VAR_4);
      FUNC_5(VAR_8, "\n");
    }



  FUNC_0(FUNC_4(VAR_7, VAR_8->data, VAR_8->len,
                               FUNC_3(VAR_2, VAR_5) ,
                               VAR_6->flush_to_disk, VAR_5));

  VAR_2->uuid = FUNC_1(VAR_2->pool, VAR_3);

  if (VAR_6->format >= VAR_0)
    VAR_6->instance_id = FUNC_1(VAR_2->pool, VAR_4);
  else
    VAR_6->instance_id = VAR_2->uuid;

  return VAR_1;
}
