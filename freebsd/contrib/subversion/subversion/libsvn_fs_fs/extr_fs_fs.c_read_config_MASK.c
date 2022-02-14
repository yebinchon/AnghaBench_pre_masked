
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_config_t ;
struct TYPE_3__ {scalar_t__ format; int max_deltification_walk; int max_linear_deltification; int revprop_pack_size; int block_size; int l2p_page_size; int p2l_page_size; scalar_t__ delta_compression_type; void* fail_stop; int memcache; void* verify_before_commit; void* delta_compression_level; void* pack_after_commit; void* compress_packed_revprops; void* deltify_properties; void* deltify_directories; void* rep_sharing_allowed; } ;
typedef TYPE_1__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int FUNC_0 (void*,void*) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int FUNC_2 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int * VAR_36 ;
 void* VAR_37 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 void* VAR_40 ;
 int FUNC_4 (scalar_t__*,void**,char const*) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *,char const**,int ,int ,int *) ;
 int FUNC_7 (int *,void**,int ,int ,void*) ;
 int FUNC_8 (int *,int*,int ,int ,int) ;
 int FUNC_9 (int **,int ,void*,void*,void*,int *) ;
 int FUNC_10 (void**,char const*) ;
 int FUNC_11 (char const*,int ,int *) ;
 int * FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (int,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(fs_fs_data_t *VAR_41,
            const char *VAR_42,
            apr_pool_t *VAR_43,
            apr_pool_t *VAR_44)
{
  svn_config_t *VAR_45;

  FUNC_2(FUNC_9(&VAR_45,
                           FUNC_11(VAR_42, VAR_22, VAR_44),
                           VAR_21, VAR_21, VAR_21, VAR_44));


  if (VAR_41->format >= VAR_33)
    FUNC_2(FUNC_7(VAR_45, &VAR_41->rep_sharing_allowed,
                                VAR_20,
                                VAR_6, VAR_37));
  else
    VAR_41->rep_sharing_allowed = VAR_21;


  if (VAR_41->format >= VAR_29)
    {
      FUNC_2(FUNC_7(VAR_45, &VAR_41->deltify_directories,
                                  VAR_17,
                                  VAR_4,
                                  VAR_37));
      FUNC_2(FUNC_7(VAR_45, &VAR_41->deltify_properties,
                                  VAR_17,
                                  VAR_5,
                                  VAR_37));
      FUNC_2(FUNC_8(VAR_45, &VAR_41->max_deltification_walk,
                                   VAR_17,
                                   VAR_9,
                                   VAR_27));
      FUNC_2(FUNC_8(VAR_45, &VAR_41->max_linear_deltification,
                                   VAR_17,
                                   VAR_10,
                                   VAR_28));
    }
  else
    {
      VAR_41->deltify_directories = VAR_21;
      VAR_41->deltify_properties = VAR_21;
      VAR_41->max_deltification_walk = VAR_27;
      VAR_41->max_linear_deltification = VAR_28;
    }


  if (VAR_41->format >= VAR_32)
    {
      FUNC_2(FUNC_7(VAR_45, &VAR_41->compress_packed_revprops,
                                  VAR_19,
                                  VAR_3,
                                  VAR_21));
      FUNC_2(FUNC_8(VAR_45, &VAR_41->revprop_pack_size,
                                   VAR_19,
                                   VAR_13,
                                   VAR_41->compress_packed_revprops
                                       ? 0x40
                                       : 0x10));

      VAR_41->revprop_pack_size *= 1024;
    }
  else
    {
      VAR_41->revprop_pack_size = 0x10000;
      VAR_41->compress_packed_revprops = VAR_21;
    }

  if (VAR_41->format >= VAR_30)
    {
      FUNC_2(FUNC_8(VAR_45, &VAR_41->block_size,
                                   VAR_18,
                                   VAR_0,
                                   64));
      FUNC_2(FUNC_8(VAR_45, &VAR_41->l2p_page_size,
                                   VAR_18,
                                   VAR_8,
                                   0x2000));
      FUNC_2(FUNC_8(VAR_45, &VAR_41->p2l_page_size,
                                   VAR_18,
                                   VAR_11,
                                   0x400));




      FUNC_2(FUNC_13(VAR_41->block_size, 0x400,
                                VAR_0, VAR_44));
      FUNC_2(FUNC_13(VAR_41->p2l_page_size, 0x400,
                                VAR_11, VAR_44));
      FUNC_2(FUNC_13(VAR_41->l2p_page_size, sizeof(apr_off_t),
                                VAR_8, VAR_44));


      VAR_41->block_size *= 0x400;
      VAR_41->p2l_page_size *= 0x400;

    }
  else
    {

      VAR_41->block_size = 0x1000;
      VAR_41->l2p_page_size = 0x2000;
      VAR_41->p2l_page_size = 0x100000;
    }

  if (VAR_41->format >= VAR_31)
    {
      FUNC_2(FUNC_7(VAR_45, &VAR_41->pack_after_commit,
                                  VAR_16,
                                  VAR_12,
                                  VAR_21));
    }
  else
    {
      VAR_41->pack_after_commit = VAR_21;
    }


  if (VAR_41->format >= VAR_29)
    {
      const char *VAR_46;
      const char *VAR_47;

      FUNC_6(VAR_45, &VAR_46,
                     VAR_17,
                     VAR_1, ((void*)0));
      FUNC_6(VAR_45, &VAR_47,
                     VAR_17,
                     VAR_2, ((void*)0));
      if (VAR_46 && VAR_47)
        {
          return FUNC_12(VAR_26, ((void*)0),
                                  FUNC_3("The 'compression' and 'compression-level' "
                                    "config options are mutually exclusive"));
        }
      else if (VAR_46)
        {
          FUNC_2(FUNC_4(&VAR_41->delta_compression_type,
                                           &VAR_41->delta_compression_level,
                                           VAR_46));
          if (VAR_41->delta_compression_type == VAR_38 &&
              VAR_41->format < VAR_35)
            {
              return FUNC_12(VAR_26, ((void*)0),
                                      FUNC_3("Compression type 'lz4' requires "
                                        "filesystem format 8 or higher"));
            }
        }
      else if (VAR_47)
        {

          VAR_41->delta_compression_type = VAR_40;
          FUNC_2(FUNC_10(&VAR_41->delta_compression_level,
                                   VAR_47));
          VAR_41->delta_compression_level =
            FUNC_1(FUNC_0(VAR_25,
                    VAR_41->delta_compression_level),
                VAR_24);
        }
      else
        {


          if (VAR_41->format >= VAR_35)
            VAR_41->delta_compression_type = VAR_38;
          else
            VAR_41->delta_compression_type = VAR_40;

          VAR_41->delta_compression_level = VAR_23;
        }
    }
  else if (VAR_41->format >= VAR_34)
    {
      VAR_41->delta_compression_type = VAR_40;
      VAR_41->delta_compression_level = VAR_23;
    }
  else
    {
      VAR_41->delta_compression_type = VAR_39;
      VAR_41->delta_compression_level = VAR_25;
    }







  FUNC_2(FUNC_7(VAR_45, &VAR_41->verify_before_commit,
                              VAR_16,
                              VAR_14,
                              VAR_21));



  FUNC_2(FUNC_5(&VAR_41->memcache, VAR_45,
                                               VAR_43, VAR_44));

  FUNC_2(FUNC_7(VAR_45, &VAR_41->fail_stop,
                              VAR_15, VAR_7,
                              VAR_21));

  return VAR_36;
}
