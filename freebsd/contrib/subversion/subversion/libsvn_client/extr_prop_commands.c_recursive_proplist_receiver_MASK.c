
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct recursive_proplist_receiver_baton {char const* anchor_abspath; char const* anchor; int wrapped_receiver_baton; int (* wrapped_receiver ) (int ,char const*,int *,int *,int *) ;int * iprops; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ,char const*,int *,int *,int *) ;
 int FUNC_3 (int ,char const*,int *,int *,int *) ;
 char* FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (char const*,char const*) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_0,
                            const char *VAR_1,
                            apr_hash_t *VAR_2,
                            apr_pool_t *VAR_3)
{
  struct recursive_proplist_receiver_baton *VAR_4 = VAR_0;
  const char *VAR_5;
  apr_array_header_t *VAR_6 = ((void*)0);

  if (VAR_4->iprops
      && ! FUNC_1(VAR_1, VAR_4->anchor_abspath))
    {

      VAR_6 = VAR_4->iprops;
      VAR_4->iprops = ((void*)0);
    }
  else if (VAR_4->iprops)
    {



      FUNC_0(VAR_4->wrapped_receiver(VAR_4->wrapped_receiver_baton,
                                  VAR_4->anchor ? VAR_4->anchor : VAR_4->anchor_abspath,
                                  ((void*)0) ,
                                  VAR_4->iprops,
                                  VAR_3));
      VAR_4->iprops = ((void*)0);
    }



  if (VAR_4->anchor && VAR_4->anchor_abspath)
    {
      VAR_5 = FUNC_4(VAR_4->anchor,
                             FUNC_5(VAR_4->anchor_abspath,
                                                      VAR_1),
                             VAR_3);
    }
  else
    VAR_5 = VAR_1;

  return FUNC_6(VAR_4->wrapped_receiver(VAR_4->wrapped_receiver_baton,
                                             VAR_5, VAR_2, VAR_6,
                                             VAR_3));
}
