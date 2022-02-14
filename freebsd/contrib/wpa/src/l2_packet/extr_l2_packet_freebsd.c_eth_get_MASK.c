
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u8 ;
typedef int u32 ;
struct sockaddr_dl {int sdl_family; scalar_t__ sdl_nlen; int sdl_alen; int sdl_data; } ;
struct if_msghdr {scalar_t__ ifm_type; int ifm_addrs; int ifm_msglen; } ;
typedef int dlpi_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (struct sockaddr_dl*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int*) ;
 int FUNC_3 (char const*,int *,int ) ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (int ,char const*,scalar_t__) ;
 int FUNC_8 (int *,int *,int ) ;
 scalar_t__ FUNC_9 (int*,int,int *,size_t*,int *,int ) ;
 int FUNC_10 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_11(const char *VAR_13, u8 VAR_14[VAR_7])
{
 struct if_msghdr *VAR_15;
 struct sockaddr_dl *VAR_16;
 u_char *VAR_17, *VAR_18;
 size_t VAR_19;
 int VAR_20[] = { VAR_2, VAR_1, 0, VAR_0, VAR_9, 0 };

 if (FUNC_9(VAR_20, 6, ((void*)0), &VAR_19, ((void*)0), 0) < 0)
  return -1;
 if ((VAR_18 = FUNC_6(VAR_19)) == ((void*)0))
  return -1;
 if (FUNC_9(VAR_20, 6, VAR_18, &VAR_19, ((void*)0), 0) < 0) {
  FUNC_5(VAR_18);
  return -1;
 }
 for (VAR_17 = VAR_18; VAR_17 < VAR_18 + VAR_19; VAR_17 += VAR_15->ifm_msglen) {
  VAR_15 = (struct if_msghdr *)VAR_17;
  VAR_16 = (struct sockaddr_dl *)(VAR_15 + 1);
  if (VAR_15->ifm_type != VAR_11 ||
      (VAR_15->ifm_addrs & VAR_10) == 0)
   continue;
  if (VAR_16->sdl_family != VAR_0 || VAR_16->sdl_nlen == 0 ||
      FUNC_7(VAR_16->sdl_data, VAR_13, VAR_16->sdl_nlen) != 0)
   continue;
  FUNC_8(VAR_14, FUNC_0(VAR_16), VAR_16->sdl_alen);
  break;
 }
 FUNC_5(VAR_18);

 if (VAR_17 >= VAR_18 + VAR_19) {
  VAR_12 = VAR_6;
  return -1;
 }

 return 0;
}
