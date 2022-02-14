
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_dl {int sdl_len; int sdl_alen; int* sdl_data; void* sdl_family; scalar_t__ sdl_nlen; } ;
struct sockaddr {int sa_len; int sa_data; void* sa_family; } ;
typedef int sdl ;
struct TYPE_2__ {struct sockaddr ifr_addr; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int**,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,struct sockaddr_dl*) ;
 TYPE_1__ VAR_3 ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_4, int VAR_5)
{
 char *VAR_6;
 struct sockaddr_dl VAR_7;
 struct sockaddr *VAR_8 = &VAR_3.ifr_addr;

 if (VAR_5 != VAR_0)
  FUNC_3(1, "can't set link-level netmask or broadcast");
 if (!FUNC_7(VAR_4, "random")) {
  VAR_7.sdl_len = sizeof(VAR_7);
  VAR_7.sdl_alen = VAR_2;
  VAR_7.sdl_nlen = 0;
  VAR_7.sdl_family = VAR_1;
  FUNC_1(&VAR_7.sdl_data, VAR_2);

  VAR_7.sdl_data[0] &= 0xfc;
  VAR_7.sdl_data[0] |= 0x02;
 } else {
  if ((VAR_6 = FUNC_6(FUNC_9(VAR_4) + 2)) == ((void*)0))
   FUNC_3(1, "malloc failed");
  VAR_6[0] = ':';
  FUNC_8(VAR_6 + 1, VAR_4);
  VAR_7.sdl_len = sizeof(VAR_7);
  FUNC_5(VAR_6, &VAR_7);
  FUNC_4(VAR_6);
 }
 if (VAR_7.sdl_alen > sizeof(VAR_8->sa_data))
  FUNC_3(1, "malformed link-level address");
 VAR_8->sa_family = VAR_1;
 VAR_8->sa_len = VAR_7.sdl_alen;
 FUNC_2(FUNC_0(&VAR_7), VAR_8->sa_data, VAR_7.sdl_alen);
}
