
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zerobssid ;
typedef int uint8_t ;
struct sockaddr_dl {int sdl_len; scalar_t__ sdl_alen; } ;
struct afswtch {int dummy; } ;
typedef int sdl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,struct sockaddr_dl*) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int,int ,int ,scalar_t__,int *) ;
 int FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{

 if (!FUNC_3(VAR_2)) {
  char *VAR_6;
  struct sockaddr_dl VAR_7;

  VAR_6 = FUNC_5(FUNC_9(VAR_2) + 2);
  if (VAR_6 == ((void*)0))
   FUNC_1(1, "malloc failed");
  VAR_6[0] = ':';
  FUNC_8(VAR_6 + 1, VAR_2);
  VAR_7.sdl_len = sizeof(VAR_7);
  FUNC_4(VAR_6, &VAR_7);
  FUNC_2(VAR_6);
  if (VAR_7.sdl_alen != VAR_0)
   FUNC_1(1, "malformed link-level address");
  FUNC_7(VAR_4, VAR_1, 0,
   VAR_0, FUNC_0(&VAR_7));
 } else {
  uint8_t VAR_8[VAR_0];
  FUNC_6(VAR_8, 0, sizeof(VAR_8));
  FUNC_7(VAR_4, VAR_1, 0,
   VAR_0, VAR_8);
 }
}
