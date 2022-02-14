
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_10__ {void* instance_id; int flush_to_disk; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_11__ {int pool; void* uuid; TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 char* FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (char const*,int ,int ,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_1,
                   const char *VAR_2,
                   const char *VAR_3,
                   svn_boolean_t VAR_4,
                   apr_pool_t *VAR_5)
{
  svn_fs_x__data_t *VAR_6 = VAR_1->fsap_data;
  const char *VAR_7 = FUNC_3(VAR_1, VAR_5);
  svn_stringbuf_t *VAR_8 = FUNC_7(VAR_5);

  if (! VAR_2)
    VAR_2 = FUNC_8(VAR_5);

  if (! VAR_3)
    VAR_3 = FUNC_8(VAR_5);

  FUNC_6(VAR_8, VAR_2);
  FUNC_6(VAR_8, "\n");
  FUNC_6(VAR_8, VAR_3);
  FUNC_6(VAR_8, "\n");







  if (! VAR_4)
    {

      FUNC_0(FUNC_4(VAR_7, VAR_8->data, VAR_5));
    }
  else
    {
      FUNC_0(FUNC_5(VAR_7, VAR_8->data, VAR_8->len,

                                   FUNC_2(VAR_1, VAR_5),
                                   VAR_6->flush_to_disk, VAR_5));
    }

  VAR_1->uuid = FUNC_1(VAR_1->pool, VAR_2);
  VAR_6->instance_id = FUNC_1(VAR_1->pool, VAR_3);

  return VAR_0;
}
