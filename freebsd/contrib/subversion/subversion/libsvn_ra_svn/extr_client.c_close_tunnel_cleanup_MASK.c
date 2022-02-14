
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tunnel_data_t {scalar_t__ request; scalar_t__ response; int tunnel_baton; int tunnel_context; int (* close_tunnel ) (int ,int ) ;} ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static apr_status_t FUNC_3(void *VAR_1)
{
  const struct tunnel_data_t *const VAR_2 = VAR_1;

  if (VAR_2->close_tunnel)
    VAR_2->close_tunnel(VAR_2->tunnel_context, VAR_2->tunnel_baton);

  FUNC_1(FUNC_2(VAR_2->request));


  if (VAR_2->request != VAR_2->response)
    FUNC_1(FUNC_2(VAR_2->response));

  return VAR_0;
}
