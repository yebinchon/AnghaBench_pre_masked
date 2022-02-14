
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; } ;
struct rad_handle {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; } ;
typedef int hints ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct addrinfo*) ;
 scalar_t__ FUNC_1 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 int FUNC_4 (struct rad_handle*,int ) ;
 int FUNC_5 (struct rad_handle*,int ,int ) ;
 int FUNC_6 (struct rad_handle*,int ,void const*,size_t) ;
 int FUNC_7 (struct rad_handle*,int ,int ) ;
 int FUNC_8 (struct rad_handle*,int ,char const*) ;
 int FUNC_9 (struct rad_handle*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_12(struct rad_handle *VAR_12, const char *VAR_13,
    const char *VAR_14, const char *VAR_15, const char *VAR_16,
    const char *VAR_17, const void *VAR_18, size_t VAR_19)
{
 int VAR_20;
 char VAR_21[VAR_2];
 struct sockaddr_in *VAR_22;
 struct addrinfo VAR_23;
 struct addrinfo *VAR_24;

 if (FUNC_4(VAR_12, VAR_3) == -1) {
  FUNC_11(VAR_1, "rad_create_request: %s", FUNC_9(VAR_12));
  return (-1);
 }
 if (VAR_15 == ((void*)0) ||
     (VAR_16 != ((void*)0) && FUNC_10(VAR_16) == 0)) {
  if (FUNC_2(VAR_21, sizeof VAR_21) != -1) {
   if (VAR_15 == ((void*)0))
    VAR_15 = VAR_21;
   if (VAR_16 != ((void*)0) && FUNC_10(VAR_16) == 0)
    VAR_16 = VAR_21;
  }
 }
 if ((VAR_13 != ((void*)0) &&
     FUNC_8(VAR_12, VAR_10, VAR_13) == -1) ||
     (VAR_14 != ((void*)0) &&
     FUNC_8(VAR_12, VAR_11, VAR_14) == -1) ||
     (VAR_15 != ((void*)0) &&
     FUNC_8(VAR_12, VAR_6, VAR_15) == -1)) {
  FUNC_11(VAR_1, "rad_put_string: %s", FUNC_9(VAR_12));
  return (-1);
 }
 if (VAR_16 != ((void*)0)) {
  FUNC_3(&VAR_23, 0, sizeof(VAR_23));
  VAR_23.ai_family = VAR_0;
  if (FUNC_1(VAR_16, ((void*)0), &VAR_23, &VAR_24) == 0 &&
      VAR_24 != ((void*)0) && VAR_24->ai_family == VAR_0) {
   VAR_22 = (struct sockaddr_in *)VAR_24->ai_addr;
   VAR_20 = FUNC_5(VAR_12, VAR_7,
       VAR_22->sin_addr);
   FUNC_0(VAR_24);
   if (VAR_20 == -1) {
    FUNC_11(VAR_1, "rad_put_addr: %s",
        FUNC_9(VAR_12));
    return (-1);
   }
  }
 }
 if (VAR_17 != ((void*)0) &&
     FUNC_8(VAR_12, VAR_5, VAR_17) == -1) {
  FUNC_11(VAR_1, "rad_put_string: %s", FUNC_9(VAR_12));
  return (-1);
 }
 if (VAR_18 != ((void*)0) &&
     FUNC_6(VAR_12, VAR_9, VAR_18, VAR_19) == -1) {
  FUNC_11(VAR_1, "rad_put_attr: %s", FUNC_9(VAR_12));
  return (-1);
 }
 if (FUNC_7(VAR_12, VAR_8, VAR_4) == -1) {
  FUNC_11(VAR_1, "rad_put_int: %s", FUNC_9(VAR_12));
  return (-1);
 }
 return (0);
}
