
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct revision_report_t {struct replay_node_t* current_node; } ;
struct replay_node_t {scalar_t__ stream; int file; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (scalar_t__,char const*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_serf__xml_estate_t *VAR_4,
             void *VAR_5,
             int VAR_6,
             const char *VAR_7,
             apr_size_t VAR_8,
             apr_pool_t *VAR_9)
{
  struct revision_report_t *VAR_10 = VAR_5;

  if (VAR_6 == VAR_0)
    {
      struct replay_node_t *VAR_11 = VAR_10->current_node;

      if (! VAR_11 || ! VAR_11->file)
        return FUNC_2(VAR_2, ((void*)0), ((void*)0));

      if (VAR_11->stream)
        {
          apr_size_t VAR_12 = VAR_8;

          FUNC_0(FUNC_3(VAR_11->stream, VAR_7, &VAR_12));
          if (VAR_12 != VAR_8)
            return FUNC_2(VAR_1, ((void*)0),
                                    FUNC_1("Error writing stream: unexpected EOF"));
        }
    }

  return VAR_3;
}
