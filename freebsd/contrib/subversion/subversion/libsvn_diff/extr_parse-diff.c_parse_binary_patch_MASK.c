
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_9__ {TYPE_3__* binary_patch; int prop_patches; } ;
typedef TYPE_2__ svn_patch_t ;
typedef void* svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ src_end; scalar_t__ dst_end; scalar_t__ src_start; scalar_t__ dst_start; void* dst_filesize; void* src_filesize; int * apr_file; } ;
typedef TYPE_3__ svn_diff_binary_patch_t ;
typedef scalar_t__ svn_boolean_t ;
typedef void* apr_uint64_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char) ;
 int * FUNC_5 (void**,char*,int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *,int *) ;
 int FUNC_8 (int *,TYPE_1__**,int *,scalar_t__*,int ,int *,int *) ;
 int FUNC_9 (int *,int ,scalar_t__*,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_patch_t *VAR_6, apr_file_t *VAR_7,
                   svn_boolean_t VAR_8,
                   apr_pool_t *VAR_9, apr_pool_t *VAR_10)
{
  apr_pool_t *VAR_11 = FUNC_10(VAR_10);
  apr_off_t VAR_12, VAR_13;
  svn_stringbuf_t *VAR_14;
  svn_boolean_t VAR_15 = VAR_3;
  svn_diff_binary_patch_t *VAR_16 = FUNC_2(VAR_9, sizeof(*VAR_16));
  svn_boolean_t VAR_17 = VAR_3;
  svn_boolean_t VAR_18 = VAR_3;

  VAR_16->apr_file = VAR_7;

  VAR_6->prop_patches = FUNC_1(VAR_9);

  FUNC_0(FUNC_7(&VAR_12, VAR_7, VAR_10));

  while (!VAR_15)
    {
      VAR_13 = VAR_12;
      FUNC_0(FUNC_8(VAR_7, &VAR_14, ((void*)0), &VAR_15, VAR_1,
                               VAR_11, VAR_11));


      FUNC_0(FUNC_7(&VAR_12, VAR_7, VAR_11));

      if (VAR_17)
        {
          char VAR_19 = VAR_14->data[0];


          if (((VAR_19 >= 'A' && VAR_19 <= 'Z') || (VAR_19 >= 'a' && VAR_19 <= 'z'))
              && VAR_14->len <= 66
              && !FUNC_4(VAR_14->data, ':')
              && !FUNC_4(VAR_14->data, ' '))
            {

              if (VAR_18)
                VAR_16->src_end = VAR_12;
              else
                VAR_16->dst_end = VAR_12;
            }
          else if (FUNC_12(VAR_14) < VAR_14->len
                   && !(VAR_18 && VAR_16->src_start < VAR_13))
            {
              break;
            }
          else if (VAR_18)
            {
              VAR_6->binary_patch = VAR_16;
              break;
            }
          else
            {
              VAR_17 = VAR_3;
              VAR_18 = VAR_5;
            }
        }
      else if (FUNC_3(VAR_14->data, "literal "))
        {
          apr_uint64_t VAR_20;
          svn_error_t *VAR_21 = FUNC_5(&VAR_20,
                                                   &VAR_14->data[8],
                                                   0, VAR_2, 10);

          if (VAR_21)
            {
              FUNC_6(VAR_21);
              break;
            }

          if (VAR_18)
            {
              VAR_16->src_start = VAR_12;
              VAR_16->src_filesize = VAR_20;
            }
          else
            {
              VAR_16->dst_start = VAR_12;
              VAR_16->dst_filesize = VAR_20;
            }
          VAR_17 = VAR_5;
        }
      else
        break;
    }
  FUNC_11(VAR_11);

  if (!VAR_15)


    FUNC_0(FUNC_9(VAR_7, VAR_0, &VAR_13, VAR_10));
  else if (VAR_18
           && ((VAR_16->src_end > VAR_16->src_start) || !VAR_16->src_filesize))
    {
      VAR_6->binary_patch = VAR_16;
    }


  if (VAR_8 && VAR_6->binary_patch)
    {
      apr_off_t VAR_22 = VAR_16->src_start;
      apr_off_t VAR_23 = VAR_16->src_end;
      svn_filesize_t VAR_24 = VAR_16->src_filesize;

      VAR_16->src_start = VAR_16->dst_start;
      VAR_16->src_end = VAR_16->dst_end;
      VAR_16->src_filesize = VAR_16->dst_filesize;

      VAR_16->dst_start = VAR_22;
      VAR_16->dst_end = VAR_23;
      VAR_16->dst_filesize = VAR_24;
    }

  return VAR_4;
}
