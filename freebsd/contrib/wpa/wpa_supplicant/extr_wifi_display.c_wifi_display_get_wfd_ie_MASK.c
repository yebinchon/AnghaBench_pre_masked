
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_global {scalar_t__* wfd_subelem; int * p2p; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wpabuf*,scalar_t__) ;

struct wpabuf * FUNC_3(struct wpa_global *VAR_1)
{
 struct wpabuf *VAR_2;
 size_t VAR_3;
 int VAR_4;

 if (VAR_1->p2p == ((void*)0))
  return ((void*)0);

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->wfd_subelem[VAR_4])
   VAR_3 += FUNC_1(VAR_1->wfd_subelem[VAR_4]);
 }

 VAR_2 = FUNC_0(VAR_3);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->wfd_subelem[VAR_4])
   FUNC_2(VAR_2, VAR_1->wfd_subelem[VAR_4]);
 }

 return VAR_2;
}
