
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct ev2_edit_baton {int editor; int unlock_baton; int (* do_unlock ) (int ,char const*,int *) ;} ;
struct change_node {scalar_t__ action; scalar_t__ kind; int changing; int * contents_abspath; int copyfrom_rev; int * copyfrom_path; int deleting; int * props; scalar_t__ contents_changed; scalar_t__ unlock; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * VAR_3 ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (struct ev2_edit_baton*,char const*,int *) ;
 int FUNC_5 (int ,char const*,int *) ;
 int * FUNC_6 (int ,int *) ;
 int VAR_4 ;
 int FUNC_7 (int ,char const*,scalar_t__,int ) ;
 int FUNC_8 (int ,char const*,int const*,int *,int ) ;
 int FUNC_9 (int ,char const*,int *,int *,int *,int ) ;
 int FUNC_10 (int ,char const*,int ,int *,int *) ;
 int FUNC_11 (int ,char const*,int ,int *,int *,int *) ;
 int FUNC_12 (int ,int *,int ,char const*,int ) ;
 int FUNC_13 (int ,char const*,int ) ;
 int FUNC_14 (int **,int *,int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(struct ev2_edit_baton *VAR_8,
                const char *VAR_9,
                const struct change_node *VAR_10,
                apr_pool_t *VAR_11)
{
  apr_hash_t *VAR_12 = ((void*)0);
  svn_stream_t *VAR_13 = ((void*)0);
  svn_checksum_t *VAR_14 = ((void*)0);
  svn_node_kind_t VAR_15 = VAR_7;

  FUNC_1(VAR_10 != ((void*)0));

  if (VAR_10->unlock)
    FUNC_0(VAR_8->do_unlock(VAR_8->unlock_baton, VAR_9, VAR_11));

  if (VAR_10->action == VAR_2)
    {


      FUNC_0(FUNC_13(VAR_8->editor, VAR_9,
                                VAR_10->deleting));


      return VAR_3;
    }
  if (VAR_10->action == VAR_1)
    {
      FUNC_0(FUNC_7(VAR_8->editor, VAR_9,
                                    VAR_10->kind, VAR_10->deleting));


      return VAR_3;
    }

  if (VAR_10->contents_changed)
    {


      VAR_15 = VAR_6;

      if (VAR_10->contents_abspath)
        {

          FUNC_0(FUNC_14(&VAR_14, VAR_10->contents_abspath,
                                        VAR_4, VAR_11));
          FUNC_0(FUNC_16(&VAR_13, VAR_10->contents_abspath,
                                           VAR_11, VAR_11));
        }
      else
        {
          VAR_13 = FUNC_15(VAR_11);
          VAR_14 = FUNC_6(VAR_4,
                                                 VAR_11);
        }
    }

  if (VAR_10->props != ((void*)0))
    {

      VAR_15 = VAR_10->kind;
      VAR_12 = VAR_10->props;
    }

  if (VAR_10->action == VAR_0)
    {

      svn_revnum_t VAR_16 = VAR_10->deleting;

      VAR_15 = VAR_10->kind;

      if (VAR_10->copyfrom_path != ((void*)0))
        {
          FUNC_0(FUNC_12(VAR_8->editor, VAR_10->copyfrom_path,
                                  VAR_10->copyfrom_rev,
                                  VAR_9, VAR_16));

        }
      else
        {

          if (VAR_12 == ((void*)0))
            VAR_12 = FUNC_3(VAR_11);

          if (VAR_15 == VAR_5)
            {
              const apr_array_header_t *VAR_17;

              VAR_17 = FUNC_4(VAR_8, VAR_9, VAR_11);
              FUNC_0(FUNC_8(VAR_8->editor, VAR_9,
                                               VAR_17, VAR_12,
                                               VAR_16));
            }
          else
            {



              if (VAR_10->contents_abspath == ((void*)0))
                {
                  VAR_13 = FUNC_15(VAR_11);
                  VAR_14 = FUNC_6(VAR_4,
                                                         VAR_11);
                }

              FUNC_0(FUNC_9(VAR_8->editor, VAR_9,
                                          VAR_14, VAR_13, VAR_12,
                                          VAR_16));
            }


          return VAR_3;
        }
    }






  if (VAR_12 || VAR_13)
    {
      if (VAR_15 == VAR_5)
        FUNC_0(FUNC_10(VAR_8->editor, VAR_9,
                                           VAR_10->changing, ((void*)0), VAR_12));
      else
        FUNC_0(FUNC_11(VAR_8->editor, VAR_9,
                                      VAR_10->changing,
                                      VAR_14, VAR_13, VAR_12));
    }

  return VAR_3;
}
