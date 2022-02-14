
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_2__* p2p_send_action_work; TYPE_1__* p2p_listen_work; } ;
struct TYPE_4__ {int freq; } ;
struct TYPE_3__ {int freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,unsigned int,int const*,int const*,int const*,int const*,size_t,unsigned int,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (struct wpa_supplicant*,unsigned int,int const*,int const*,int const*,int const*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, unsigned int VAR_3, const u8 *VAR_4,
       const u8 *VAR_5, const u8 *VAR_6, const u8 *VAR_7,
       size_t VAR_8, unsigned int VAR_9, int *VAR_10)
{
 struct wpa_supplicant *VAR_11 = VAR_2;
 int VAR_12 = -1, VAR_13 = -1;

 if (VAR_10)
  *VAR_10 = 0;
 if (VAR_11->p2p_listen_work)
  VAR_12 = VAR_11->p2p_listen_work->freq;
 if (VAR_11->p2p_send_action_work)
  VAR_13 = VAR_11->p2p_send_action_work->freq;
 if (VAR_12 != (int) VAR_3 && VAR_13 != (int) VAR_3) {
  int VAR_14;

  FUNC_1(VAR_0, "P2P: Schedule new radio work for Action frame TX (listen_freq=%d send_freq=%d freq=%u)",
      VAR_12, VAR_13, VAR_3);
  VAR_14 = FUNC_2(VAR_11, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9);
  if (VAR_14 == 0 && VAR_10)
   *VAR_10 = 1;
  return VAR_14;
 }

 FUNC_1(VAR_0, "P2P: Use ongoing radio work for Action frame TX");
 return FUNC_0(VAR_11, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
          VAR_9,
          VAR_1, 1);
}
