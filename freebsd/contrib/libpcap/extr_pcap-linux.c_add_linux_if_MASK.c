
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_name; } ;
typedef int pcap_if_list_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int *,char*,int ,int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int ,char*) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const) ;
 int FUNC_5 (char*,int ,scalar_t__,char*,int,int ) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(pcap_if_list_t *VAR_6, const char *VAR_7, int VAR_8, char *VAR_9)
{
 const char *VAR_10;
 char VAR_11[512];
 char *VAR_12, *VAR_13;
 struct ifreq VAR_14;




 VAR_10 = VAR_7;
 VAR_12 = &VAR_11[0];
 while (*VAR_10 != '\0' && FUNC_2(*VAR_10) && !FUNC_4(*VAR_10)) {
  if (*VAR_10 == ':') {
   VAR_13 = VAR_12;
   while (FUNC_2(*VAR_10) && FUNC_3(*VAR_10))
    *VAR_12++ = *VAR_10++;
   if (*VAR_10 != ':') {




    VAR_12 = VAR_13;
   }
   break;
  } else
   *VAR_12++ = *VAR_10++;
 }
 *VAR_12 = '\0';




 FUNC_6(VAR_14.ifr_name, VAR_11, sizeof(VAR_14.ifr_name));
 if (FUNC_1(VAR_8, VAR_3, (char *)&VAR_14) < 0) {
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
   return (0);
  FUNC_5(VAR_9, VAR_2,
      VAR_4, "SIOCGIFFLAGS: %.*s",
      (int)sizeof(VAR_14.ifr_name),
      VAR_14.ifr_name);
  return (-1);
 }





 if (FUNC_0(VAR_6, VAR_11, VAR_14.ifr_flags,
     VAR_5, VAR_9) == ((void*)0)) {



  return (-1);
 }

 return (0);
}
