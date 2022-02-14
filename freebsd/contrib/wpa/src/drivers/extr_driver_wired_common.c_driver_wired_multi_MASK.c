
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr_dl {int sdl_len; scalar_t__ sdl_slen; int sdl_alen; scalar_t__ sdl_nlen; scalar_t__ sdl_index; int sdl_family; } ;
struct sockaddr {int sa_len; int sa_data; void* sa_family; } ;
struct TYPE_2__ {int sa_data; void* sa_family; } ;
struct ifreq {int ifr_addr; TYPE_1__ ifr_hwaddr; int ifr_name; } ;
typedef int ifr ;
typedef int caddr_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (struct ifreq*,int ,int) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(const char *VAR_10, const u8 *VAR_11, int VAR_12)
{
 struct ifreq VAR_13;
 int VAR_14;





 VAR_14 = FUNC_6(VAR_5, VAR_8, 0);
 if (VAR_14 < 0) {
  FUNC_8(VAR_4, "socket: %s", FUNC_7(VAR_9));
  return -1;
 }

 FUNC_4(&VAR_13, 0, sizeof(VAR_13));
 FUNC_5(VAR_13.ifr_name, VAR_10, VAR_3);

 VAR_13.ifr_hwaddr.sa_family = VAR_1;
 FUNC_3(VAR_13.ifr_hwaddr.sa_data, VAR_11, VAR_2);
 if (FUNC_2(VAR_14, VAR_12 ? VAR_6 : VAR_7, (caddr_t) &VAR_13) < 0) {
  FUNC_8(VAR_4, "ioctl[SIOC{ADD/DEL}MULTI]: %s",
      FUNC_7(VAR_9));
  FUNC_1(VAR_14);
  return -1;
 }
 FUNC_1(VAR_14);
 return 0;
}
