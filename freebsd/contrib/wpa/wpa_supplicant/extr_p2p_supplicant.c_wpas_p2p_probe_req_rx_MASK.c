
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int p2p_lo_started; TYPE_1__* global; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;







 int FUNC_0 (int *,int const*,int const*,int const*,int const*,size_t,unsigned int,int ) ;
 int FUNC_1 (struct wpa_supplicant*,int const*,int const*,int const*,int const*,size_t,int) ;

int FUNC_2(struct wpa_supplicant *VAR_0, const u8 *VAR_1,
     const u8 *VAR_2, const u8 *VAR_3,
     const u8 *VAR_4, size_t VAR_5,
     unsigned int VAR_6, int VAR_7)
{
 if (VAR_0->global->p2p_disabled)
  return 0;
 if (VAR_0->global->p2p == ((void*)0))
  return 0;

 switch (FUNC_0(VAR_0->global->p2p, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_0->p2p_lo_started)) {
 case 130:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_7);

 case 132:
 case 131:
 case 129:
 default:
  return 0;
 case 128:
  return 1;
 }
}
