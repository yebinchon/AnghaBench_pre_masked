
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* data; size_t len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_7__ {int l2p_offset; int footer_offset; int pool; int start_revision; int p2l_checksum; int p2l_offset; int l2p_checksum; int file; int block_size; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef int footer_length ;
typedef int apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int*,int *,int *,int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_2 (int ,int ,int *,int,int ) ;
 int FUNC_3 (int ,unsigned char*,unsigned char,size_t*,int *,int ) ;
 int FUNC_4 (int ,int ,int*,int ) ;
 TYPE_1__* FUNC_5 (unsigned char,int ) ;

svn_error_t *
FUNC_6(svn_fs_fs__revision_file_t *VAR_2)
{
  if (VAR_2->l2p_offset == -1)
    {
      apr_off_t VAR_3 = 0;
      unsigned char VAR_4;
      svn_stringbuf_t *VAR_5;


      FUNC_0(FUNC_4(VAR_2->file, VAR_0, &VAR_3, VAR_2->pool));


      FUNC_0(FUNC_2(VAR_2->file, VAR_2->block_size, ((void*)0),
                                       VAR_3 - 1, VAR_2->pool));
      FUNC_0(FUNC_3(VAR_2->file, &VAR_4,
                                     sizeof(VAR_4), ((void*)0), ((void*)0),
                                     VAR_2->pool));


      VAR_5 = FUNC_5(VAR_4, VAR_2->pool);
      FUNC_0(FUNC_2(VAR_2->file, VAR_2->block_size, ((void*)0),
                                       VAR_3 - 1 - VAR_4,
                                       VAR_2->pool));
      FUNC_0(FUNC_3(VAR_2->file, VAR_5->data, VAR_4,
                                     &VAR_5->len, ((void*)0), VAR_2->pool));
      VAR_5->data[VAR_5->len] = '\0';


      FUNC_0(FUNC_1(&VAR_2->l2p_offset, &VAR_2->l2p_checksum,
                                      &VAR_2->p2l_offset, &VAR_2->p2l_checksum,
                                      VAR_5, VAR_2->start_revision,
                                      VAR_3 - VAR_4 - 1,
                                      VAR_2->pool));
      VAR_2->footer_offset = VAR_3 - VAR_4 - 1;
    }

  return VAR_1;
}
