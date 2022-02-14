
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_9__ {char* data; scalar_t__ len; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_10__ {int (* delete_node_property ) (void*,char*) ;int (* set_revision_property ) (void*,char*,TYPE_2__*) ;int (* set_node_property ) (void*,char*,TYPE_2__*) ;} ;
typedef TYPE_3__ svn_repos_parse_fns3_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_uint64_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,scalar_t__*,int *,scalar_t__,int *) ;
 int FUNC_3 (char*,char*) ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (void*,char*,TYPE_2__*) ;
 int FUNC_7 (void*,char*,TYPE_2__*) ;
 int FUNC_8 (void*,char*) ;
 int FUNC_9 (scalar_t__*,char*) ;
 int FUNC_10 (scalar_t__*,char*,int ,int ,int) ;
 int * FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_stream_t *VAR_3,
                     svn_filesize_t VAR_4,
                     const svn_repos_parse_fns3_t *VAR_5,
                     void *VAR_6,
                     void *VAR_7,
                     svn_boolean_t VAR_8,
                     svn_filesize_t *VAR_9,
                     apr_pool_t *VAR_10)
{
  svn_stringbuf_t *VAR_11;
  apr_pool_t *VAR_12 = FUNC_13(VAR_10);

  *VAR_9 = 0;
  while (VAR_4 != *VAR_9)
    {
      char *VAR_13;
      svn_boolean_t VAR_14;

      FUNC_12(VAR_12);


      FUNC_0(FUNC_15(VAR_3, &VAR_11, "\n", &VAR_14, VAR_12));

      if (VAR_14)
        {


          return FUNC_11
            (VAR_1, ((void*)0),
             FUNC_1("Incomplete or unterminated property block"));
        }

      *VAR_9 += (VAR_11->len + 1);
      VAR_13 = VAR_11->data;

      if (! FUNC_3(VAR_13, "PROPS-END"))
        break;

      else if ((VAR_13[0] == 'K') && (VAR_13[1] == ' '))
        {
          char *VAR_15;
          apr_uint64_t VAR_16;

          FUNC_0(FUNC_10(&VAR_16, VAR_13 + 2, 0, VAR_0, 10));
          FUNC_0(FUNC_2(&VAR_15, VAR_9,
                                  VAR_3, (apr_size_t)VAR_16, VAR_12));


          FUNC_0(FUNC_15(VAR_3, &VAR_11, "\n", &VAR_14, VAR_12));
          if (VAR_14)
            return FUNC_5();

          *VAR_9 += (VAR_11->len + 1);
          VAR_13 = VAR_11->data;

          if ((VAR_13[0] == 'V') && (VAR_13[1] == ' '))
            {
              svn_string_t VAR_17;
              char *VAR_18;
              apr_int64_t VAR_19;

              FUNC_0(FUNC_9(&VAR_19, VAR_13 + 2));
              VAR_17.len = (apr_size_t)VAR_19;
              FUNC_0(FUNC_2(&VAR_18, VAR_9,
                                      VAR_3, VAR_17.len, VAR_12));
              VAR_17.data = VAR_18;


              if (VAR_8)
                {
                  FUNC_0(VAR_5->set_node_property(VAR_6,
                                                       VAR_15,
                                                       &VAR_17));
                }
              else
                {
                  FUNC_0(VAR_5->set_revision_property(VAR_6,
                                                           VAR_15,
                                                           &VAR_17));
                }
            }
          else
            return FUNC_4();
        }
      else if ((VAR_13[0] == 'D') && (VAR_13[1] == ' '))
        {
          char *VAR_20;
          apr_uint64_t VAR_21;

          FUNC_0(FUNC_10(&VAR_21, VAR_13 + 2, 0, VAR_0, 10));
          FUNC_0(FUNC_2(&VAR_20, VAR_9,
                                  VAR_3, (apr_size_t)VAR_21, VAR_12));




          if (!VAR_8 || !VAR_5->delete_node_property)
            return FUNC_4();

          FUNC_0(VAR_5->delete_node_property(VAR_6, VAR_20));
        }
      else
        return FUNC_4();

    }

  FUNC_14(VAR_12);
  return VAR_2;
}
