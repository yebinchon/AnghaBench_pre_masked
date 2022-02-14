
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_name; } ;
struct hostent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hostent* FUNC_0 (void const*,size_t,int) ;
 struct servent* FUNC_1 (int,char const*) ;
 int FUNC_2 (struct hostent*) ;
 int * FUNC_3 (int,void const*,char*,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,size_t,char*,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_8 (int VAR_7,
      const void *VAR_8,
      size_t VAR_9,
      int VAR_10,
      char *VAR_11, size_t VAR_12,
      char *VAR_13, size_t VAR_14,
      int VAR_15)
{
    if (VAR_11 != ((void*)0)) {
 if (VAR_15 & VAR_5) {
     if (FUNC_3 (VAR_7, VAR_8, VAR_11, VAR_12) == ((void*)0))
  return VAR_1;
 } else {
     struct hostent *VAR_16 = FUNC_0 (VAR_8,
      VAR_9,
      VAR_7);
     if (VAR_16 != ((void*)0)) {
  FUNC_7 (VAR_11, FUNC_2(VAR_16), VAR_12);
  if (VAR_15 & VAR_4) {
      char *VAR_17 = FUNC_6 (VAR_11, '.');
      if (VAR_17 != ((void*)0))
   *VAR_17 = '\0';
  }
     } else if (VAR_15 & VAR_3) {
  return VAR_0;
     } else if (FUNC_3 (VAR_7, VAR_8, VAR_11, VAR_12) == ((void*)0))
  return VAR_1;
 }
    }

    if (VAR_13 != ((void*)0)) {
 if (VAR_15 & VAR_6) {
     FUNC_5 (VAR_13, VAR_14, "%u", FUNC_4(VAR_10));
 } else {
     const char *VAR_18 = "tcp";
     struct servent *VAR_19;

     if (VAR_15 & VAR_2)
  VAR_18 = "udp";

     VAR_19 = FUNC_1 (VAR_10, VAR_18);
     if (VAR_19 == ((void*)0)) {
  FUNC_5 (VAR_13, VAR_14, "%u", FUNC_4(VAR_10));
     } else {
  FUNC_7 (VAR_13, VAR_19->s_name, VAR_14);
     }
 }
    }
    return 0;
}
