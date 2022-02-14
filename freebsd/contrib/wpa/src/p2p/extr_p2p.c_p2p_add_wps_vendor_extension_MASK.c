
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct p2p_data {int ** wps_vendor_ext; } ;


 int VAR_0 ;
 int * FUNC_0 (struct wpabuf const*) ;

int FUNC_1(struct p2p_data *VAR_1,
     const struct wpabuf *VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return -1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->wps_vendor_ext[VAR_3] == ((void*)0))
   break;
 }
 if (VAR_3 >= VAR_0)
  return -1;

 VAR_1->wps_vendor_ext[VAR_3] = FUNC_0(VAR_2);
 if (VAR_1->wps_vendor_ext[VAR_3] == ((void*)0))
  return -1;

 return 0;
}
