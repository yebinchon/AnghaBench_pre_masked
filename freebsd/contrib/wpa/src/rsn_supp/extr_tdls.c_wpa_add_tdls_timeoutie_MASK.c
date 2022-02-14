
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpa_tdls_timeoutie {int ie_len; int value; int interval_type; int ie_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (struct wpa_tdls_timeoutie*,int ,size_t) ;

__attribute__((used)) static u8 * FUNC_3(u8 *VAR_2, u8 *VAR_3, size_t VAR_4, u32 VAR_5)
{
 struct wpa_tdls_timeoutie *VAR_6 = (struct wpa_tdls_timeoutie *) VAR_3;

 FUNC_2(VAR_6, 0, VAR_4);
 VAR_6->ie_type = VAR_0;
 VAR_6->ie_len = sizeof(struct wpa_tdls_timeoutie) - 2;
 VAR_6->interval_type = VAR_1;
 FUNC_0(VAR_6->value, VAR_5);
 FUNC_1(VAR_2, VAR_3, VAR_4);
 return VAR_2 + VAR_4;
}
