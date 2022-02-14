
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {unsigned char* data; size_t len; } ;
typedef TYPE_4__ svn_stringbuf_t ;
struct TYPE_12__ {int end; int start; int checksum; } ;
struct TYPE_11__ {int start; int end; int checksum; } ;
struct TYPE_10__ {int start_revision; } ;
struct TYPE_14__ {TYPE_3__ p2l_info; TYPE_2__ l2p_info; int pool; TYPE_1__ file_info; int file; int block_size; } ;
typedef TYPE_5__ svn_fs_x__revision_file_t ;
typedef int svn_error_t ;
typedef int footer_length ;
typedef int apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int*,int *,int *,int *,TYPE_4__*,int ,int,int ) ;
 int FUNC_3 (int ,int ,int *,int,int ) ;
 int FUNC_4 (int ,unsigned char*,unsigned char,size_t*,int *,int ) ;
 int FUNC_5 (int ,int ,int*,int ) ;
 TYPE_4__* FUNC_6 (unsigned char,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_x__revision_file_t *VAR_2)
{
  if (VAR_2->l2p_info.start == -1)
    {
      apr_off_t VAR_3 = 0;
      unsigned char VAR_4;
      svn_stringbuf_t *VAR_5;


      FUNC_0(FUNC_1(VAR_2));
      FUNC_0(FUNC_5(VAR_2->file, VAR_0, &VAR_3, VAR_2->pool));


      FUNC_0(FUNC_3(VAR_2->file, VAR_2->block_size, ((void*)0),
                                       VAR_3 - 1, VAR_2->pool));
      FUNC_0(FUNC_4(VAR_2->file, &VAR_4,
                                     sizeof(VAR_4), ((void*)0), ((void*)0),
                                     VAR_2->pool));


      VAR_5 = FUNC_6(VAR_4, VAR_2->pool);
      FUNC_0(FUNC_3(VAR_2->file, VAR_2->block_size, ((void*)0),
                                       VAR_3 - 1 - VAR_4,
                                       VAR_2->pool));
      FUNC_0(FUNC_4(VAR_2->file, VAR_5->data, VAR_4,
                                     &VAR_5->len, ((void*)0), VAR_2->pool));
      VAR_5->data[VAR_5->len] = '\0';


      FUNC_0(FUNC_2(&VAR_2->l2p_info.start,
                                     &VAR_2->l2p_info.checksum,
                                     &VAR_2->p2l_info.start,
                                     &VAR_2->p2l_info.checksum,
                                     VAR_5, VAR_2->file_info.start_revision,
                                     VAR_3 - VAR_4 - 1, VAR_2->pool));
      VAR_2->l2p_info.end = VAR_2->p2l_info.start;
      VAR_2->p2l_info.end = VAR_3 - VAR_4 - 1;
    }

  return VAR_1;
}
