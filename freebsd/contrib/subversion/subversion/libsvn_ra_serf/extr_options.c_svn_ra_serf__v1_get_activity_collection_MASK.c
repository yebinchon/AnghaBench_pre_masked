
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * pool; void* activity_collection_url; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
struct TYPE_12__ {void* activity_collection; TYPE_5__* handler; } ;
typedef TYPE_3__ options_context_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int code; } ;
struct TYPE_13__ {TYPE_1__ sline; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int *,void*) ;
 int FUNC_5 (TYPE_3__**,TYPE_2__*,int *) ;
 int * FUNC_6 (int ,int *,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*) ;

svn_error_t *
FUNC_10(const char **VAR_2,
                                        svn_ra_serf__session_t *VAR_3,
                                        apr_pool_t *VAR_4,
                                        apr_pool_t *VAR_5)
{
  options_context_t *VAR_6;

  FUNC_1(!FUNC_2(VAR_3));

  if (VAR_3->activity_collection_url)
    {
      *VAR_2 = FUNC_4(VAR_4,
                                  VAR_3->activity_collection_url);
      return VAR_1;
    }

  FUNC_0(FUNC_5(&VAR_6, VAR_3, VAR_5));
  FUNC_0(FUNC_8(VAR_6->handler, VAR_5));

  if (VAR_6->handler->sline.code != 200)
    return FUNC_7(FUNC_9(VAR_6->handler));


  if (VAR_6->activity_collection)
    {
      VAR_3->activity_collection_url =
                    FUNC_4(VAR_3->pool, VAR_6->activity_collection);
    }
  else
    {
      return FUNC_6(VAR_0, ((void*)0),
                              FUNC_3("The OPTIONS response did not include the "
                                "requested activity-collection-set value"));
    }

  *VAR_2 = FUNC_4(VAR_4, VAR_6->activity_collection);

  return VAR_1;

}
