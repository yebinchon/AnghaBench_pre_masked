
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef void* svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_1__* cur_dir; TYPE_3__* cur_file; void* send_all_mode; void* add_props_included; } ;
typedef TYPE_2__ report_context_t ;
struct TYPE_12__ {char const* copyfrom_path; void* fetch_props; int pool; int txdelta_stream; int txdelta_baton; int txdelta; int base_md5_checksum; void* fetch_file; int final_sha1_checksum; void* copyfrom_rev; void* base_rev; } ;
typedef TYPE_3__ file_baton_t ;
struct TYPE_13__ {char const* copyfrom_path; void* fetch_props; void* copyfrom_rev; int pool; void* base_rev; } ;
typedef TYPE_4__ dir_baton_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
struct TYPE_10__ {void* fetch_props; } ;




 void* VAR_0 ;



 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;


 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__**,TYPE_2__*,char const*,int *) ;
 int FUNC_3 (TYPE_3__**,TYPE_2__*,char const*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,int ) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ,char const*,int ) ;
 int VAR_5 ;
 int FUNC_8 (int *,char const*) ;
 int VAR_6 ;
 int * FUNC_9 (int ,int *,int ,char*) ;
 void* FUNC_10 (char const*,int ) ;
 char const* FUNC_11 (int *,char*) ;
 int * FUNC_12 (int *,int const) ;
 int * FUNC_13 (int ,int ,void*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_ra_serf__xml_estate_t *VAR_7,
              void *VAR_8,
              int VAR_9,
              const svn_ra_serf__dav_props_t *VAR_10,
              apr_pool_t *VAR_11)
{
  report_context_t *VAR_12 = VAR_8;
  apr_hash_t *VAR_13;

  switch (VAR_9)
    {
      case 128:
        {
          const char *VAR_14;

          VAR_13 = FUNC_12(VAR_7, 128);
          VAR_14 = FUNC_11(VAR_13, "inline-props");

          if (VAR_14 && (FUNC_5(VAR_14, "true") == 0))
            VAR_12->add_props_included = VAR_3;

          VAR_14 = FUNC_11(VAR_13, "send-all");

          if (VAR_14 && (FUNC_5(VAR_14, "true") == 0))
            {
              VAR_12->send_all_mode = VAR_3;


              VAR_12->add_props_included = VAR_3;
            }
        }
        break;

      case 131:
      case 134:
        {
          dir_baton_t *VAR_15;
          const char *VAR_16;
          VAR_13 = FUNC_12(VAR_7, VAR_9);

          VAR_16 = FUNC_11(VAR_13, "name");
          if (!VAR_16)
            VAR_16 = "";

          FUNC_0(FUNC_2(&VAR_15, VAR_12, VAR_16, VAR_11));

          if (VAR_9 == 131)
            {
              apr_int64_t VAR_17;

              FUNC_0(FUNC_8(&VAR_17,
                                         FUNC_11(VAR_13, "rev")));
              VAR_15->base_rev = (svn_revnum_t)VAR_17;
            }
          else
            {
              VAR_15->copyfrom_path = FUNC_11(VAR_13, "copyfrom-path");

              if (VAR_15->copyfrom_path)
                {
                  apr_int64_t VAR_18;
                  const char *VAR_19;
                  VAR_15->copyfrom_path = FUNC_10(
                                                        VAR_15->copyfrom_path,
                                                        VAR_15->pool);

                  VAR_19 = FUNC_11(VAR_13, "copyfrom-rev");

                  if (!VAR_19)
                    return FUNC_9(VAR_1,
                                             ((void*)0),
                                            FUNC_1("Missing '%s' attribute"),
                                            "copyfrom-rev");

                  FUNC_0(FUNC_8(&VAR_18, VAR_19));

                  VAR_15->copyfrom_rev = (svn_revnum_t)VAR_18;
                }

              if (! VAR_12->add_props_included)
                VAR_15->fetch_props = VAR_3;
            }
        }
        break;
      case 130:
      case 133:
        {
          file_baton_t *VAR_20;

          VAR_13 = FUNC_12(VAR_7, VAR_9);

          FUNC_0(FUNC_3(&VAR_20, VAR_12, FUNC_11(VAR_13, "name"),
                                    VAR_11));

          if (VAR_9 == 130)
            {
              apr_int64_t VAR_21;

              FUNC_0(FUNC_8(&VAR_21,
                                         FUNC_11(VAR_13, "rev")));
              VAR_20->base_rev = (svn_revnum_t)VAR_21;
            }
          else
            {
              const char *VAR_22;
              VAR_20->copyfrom_path = FUNC_11(VAR_13, "copyfrom-path");

              if (VAR_20->copyfrom_path)
                {
                  apr_int64_t VAR_23;
                  const char *VAR_24;

                  VAR_20->copyfrom_path = FUNC_10(
                                                        VAR_20->copyfrom_path,
                                                        VAR_20->pool);

                  VAR_24 = FUNC_11(VAR_13, "copyfrom-rev");

                  if (!VAR_24)
                    return FUNC_9(VAR_1,
                                             ((void*)0),
                                            FUNC_1("Missing '%s' attribute"),
                                            "copyfrom-rev");

                  FUNC_0(FUNC_8(&VAR_23, VAR_24));

                  VAR_20->copyfrom_rev = (svn_revnum_t)VAR_23;
                }

              VAR_22 = FUNC_11(VAR_13, "sha1-checksum");
              if (VAR_22)
                {
                  FUNC_0(FUNC_7(&VAR_20->final_sha1_checksum,
                                                 VAR_5,
                                                 VAR_22,
                                                 VAR_20->pool));
                }



              if (! VAR_12->send_all_mode)
                VAR_20->fetch_file = VAR_3;



              if (! VAR_12->add_props_included)
                VAR_20->fetch_props = VAR_3;
            }
        }
        break;

      case 129:
        {
          file_baton_t *VAR_25 = VAR_12->cur_file;
          const char *VAR_26;





          if (! VAR_12->send_all_mode)
            break;

          VAR_25->fetch_file = VAR_0;

          VAR_13 = FUNC_12(VAR_7, VAR_9);
          VAR_26 = FUNC_11(VAR_13, "base-checksum");

          if (VAR_26)
            FUNC_0(FUNC_7(&VAR_25->base_md5_checksum,
                                           VAR_4, VAR_26,
                                           VAR_25->pool));

          FUNC_0(FUNC_4(VAR_12->cur_file, VAR_11));

          if (VAR_12->cur_file->txdelta != VAR_6)
            {
              svn_stream_t *VAR_27;

              VAR_27 = FUNC_13(VAR_25->txdelta,
                                                  VAR_25->txdelta_baton,
                                                  VAR_3 ,
                                                  VAR_25->pool);

              VAR_25->txdelta_stream = FUNC_6(VAR_27, VAR_25->pool);
            }
        }
        break;

      case 132:
        {
          if (VAR_12->cur_file)
            VAR_12->cur_file->fetch_props = VAR_3;
          else if (VAR_12->cur_dir)
            VAR_12->cur_dir->fetch_props = VAR_3;
        }
        break;
    }

  return VAR_2;
}
