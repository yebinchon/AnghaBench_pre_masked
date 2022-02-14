
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_socket_t ;
struct TYPE_4__ {struct TYPE_4__* next; int family; } ;
typedef TYPE_1__ apr_sockaddr_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__**,char const*,int,unsigned short,int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int **,int ,int ,int ,...) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 int * FUNC_6 (scalar_t__,int *,int ,char const*) ;
 int * FUNC_7 (scalar_t__,int ,char const*) ;

__attribute__((used)) static svn_error_t *FUNC_8(const char *VAR_8, unsigned short VAR_9,
                                    apr_socket_t **VAR_10, apr_pool_t *VAR_11)
{
  apr_sockaddr_t *VAR_12;
  apr_status_t VAR_13;
  int VAR_14 = VAR_0;
  VAR_13 = FUNC_1(&VAR_12, VAR_8, VAR_14, VAR_9, 0, VAR_11);
  if (VAR_13)
    return FUNC_6(VAR_13, ((void*)0), FUNC_0("Unknown hostname '%s'"),
                             VAR_8);


  do
    {





      VAR_13 = FUNC_4(VAR_10, VAR_12->family, VAR_6, VAR_2,
                                 VAR_11);

      if (VAR_13 == VAR_4)
        {
          VAR_13 = FUNC_3(*VAR_10, VAR_12);
          if (VAR_13 != VAR_4)
            FUNC_2(*VAR_10);
        }
      VAR_12 = VAR_12->next;
    }
  while (VAR_13 != VAR_4 && VAR_12);

  if (VAR_13)
    return FUNC_7(VAR_13, FUNC_0("Can't connect to host '%s'"),
                              VAR_8);
  VAR_13 = FUNC_5(*VAR_10, VAR_3, 1);
  if (VAR_13)
    {

    }

  return VAR_7;
}
