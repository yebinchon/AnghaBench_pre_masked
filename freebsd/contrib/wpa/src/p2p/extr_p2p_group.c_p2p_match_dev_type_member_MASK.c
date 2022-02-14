
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_parse_attr {scalar_t__ num_req_dev_type; int req_dev_type; } ;
struct wpabuf {int dummy; } ;
struct p2p_group_member {int * client_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int ,scalar_t__) ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct wps_parse_attr*) ;

__attribute__((used)) static int FUNC_4(struct p2p_group_member *VAR_2,
         struct wpabuf *VAR_3)
{
 const u8 *VAR_4, *VAR_5;
 struct wps_parse_attr VAR_6;
 u8 VAR_7;

 if (VAR_2->client_info == ((void*)0) || VAR_3 == ((void*)0))
  return 0;

 VAR_4 = FUNC_1(VAR_2->client_info);
 VAR_5 = VAR_4 + FUNC_2(VAR_2->client_info);

 VAR_4 += 1 + 2 * VAR_0 + 1 + 2;
 if (VAR_5 - VAR_4 < VAR_1 + 1)
  return 0;

 if (FUNC_3(VAR_3, &VAR_6))
  return 1;

 if (VAR_6.num_req_dev_type == 0)
  return 1;

 if (FUNC_0(VAR_4, VAR_6.req_dev_type, VAR_6.num_req_dev_type))
  return 1;

 VAR_4 += VAR_1;
 VAR_7 = *VAR_4++;
 if (VAR_5 - VAR_4 < VAR_7 * VAR_1)
  return 0;
 while (VAR_7 > 0) {
  VAR_7--;
  if (FUNC_0(VAR_4, VAR_6.req_dev_type,
     VAR_6.num_req_dev_type))
   return 1;
  VAR_4 += VAR_1;
 }


 return 0;
}
