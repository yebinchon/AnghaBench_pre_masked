
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int num_multichan_concurrent; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int*,int) ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_1)
{
 int *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_1(VAR_1->num_multichan_concurrent, sizeof(int));
 if (!VAR_2)
  return -1;

 VAR_3 = FUNC_0(VAR_1, VAR_2,
         VAR_1->num_multichan_concurrent);
 FUNC_2(VAR_2);

 VAR_4 = VAR_1->num_multichan_concurrent - VAR_3;
 FUNC_3(VAR_1, VAR_0, "P2P: num_unused_channels: %d", VAR_4);
 return VAR_4;
}
