
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int ** vendor_elem; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct wpa_supplicant* FUNC_4 (struct wpa_supplicant*,int) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_1, char *VAR_2,
         char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2);

 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return -1;
 VAR_1 = FUNC_4(VAR_1, VAR_5);

 if (VAR_1->vendor_elem[VAR_5] == ((void*)0))
  return 0;

 return FUNC_1(VAR_3, VAR_4,
    FUNC_2(VAR_1->vendor_elem[VAR_5]),
    FUNC_3(VAR_1->vendor_elem[VAR_5]));
}
