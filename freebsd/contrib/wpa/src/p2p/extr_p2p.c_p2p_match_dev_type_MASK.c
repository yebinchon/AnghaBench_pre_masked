
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {scalar_t__ num_req_dev_type; int req_dev_type; } ;
struct wpabuf {int dummy; } ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {size_t num_sec_dev_types; int * sec_dev_type; int pri_dev_type; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct wpabuf*,struct wps_parse_attr*) ;

int FUNC_2(struct p2p_data *VAR_0, struct wpabuf *VAR_1)
{
 struct wps_parse_attr VAR_2;
 size_t VAR_3;

 if (FUNC_1(VAR_1, &VAR_2))
  return 1;

 if (VAR_2.num_req_dev_type == 0)
  return 1;

 if (FUNC_0(VAR_0->cfg->pri_dev_type, VAR_2.req_dev_type,
    VAR_2.num_req_dev_type))
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_0->cfg->num_sec_dev_types; VAR_3++) {
  if (FUNC_0(VAR_0->cfg->sec_dev_type[VAR_3],
     VAR_2.req_dev_type,
     VAR_2.num_req_dev_type))
   return 1;
 }


 return 0;
}
