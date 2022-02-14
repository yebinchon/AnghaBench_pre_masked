
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct get_and_increment_txn_key_baton {scalar_t__ txn_number; int pool; TYPE_4__* fs; } ;
struct TYPE_6__ {int flush_to_disk; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {TYPE_2__* fsap_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 size_t FUNC_2 (char*,scalar_t__) ;
 char* FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_1__**,char const*,int ) ;
 int FUNC_5 (char const*,char*,size_t,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_2, apr_pool_t *VAR_3)
{
  struct get_and_increment_txn_key_baton *VAR_4 = VAR_2;
  fs_fs_data_t *VAR_5 = VAR_4->fs->fsap_data;
  const char *VAR_6
    = FUNC_3(VAR_4->fs, VAR_3);
  char VAR_7[VAR_0 + 1];
  apr_size_t VAR_8;

  svn_stringbuf_t *VAR_9;
  FUNC_0(FUNC_4(&VAR_9, VAR_6, VAR_4->pool));


  VAR_4->txn_number = FUNC_1(((void*)0), VAR_9->data);


  VAR_8 = FUNC_2(VAR_7, VAR_4->txn_number+1);
  VAR_7[VAR_8] = '\n';



  FUNC_0(FUNC_5(VAR_6, VAR_7,
                               VAR_8 + 1,
                               VAR_6 ,
                               VAR_5->flush_to_disk, VAR_3));

  return VAR_1;
}
