
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int pcap_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,int ,int ,char*,char const*) ;
 int * FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (char*,int ,char*) ;
 int * VAR_2 ;

pcap_t *
FUNC_6(const char *VAR_3, u_int VAR_4,
     char *VAR_5)
{
 FILE *VAR_6;
 pcap_t *VAR_7;

 if (VAR_3 == ((void*)0)) {
  FUNC_5(VAR_5, VAR_0,
      "A null pointer was supplied as the file name");
  return (((void*)0));
 }
 if (VAR_3[0] == '-' && VAR_3[1] == '\0')
 {
  VAR_6 = VAR_2;







 }
 else {






  VAR_6 = FUNC_2(VAR_3, "rb");
  if (VAR_6 == ((void*)0)) {
   FUNC_3(VAR_5, VAR_0,
       VAR_1, "%s", VAR_3);
   return (((void*)0));
  }
 }
 VAR_7 = FUNC_4(VAR_6, VAR_4, VAR_5);
 if (VAR_7 == ((void*)0)) {
  if (VAR_6 != VAR_2)
   FUNC_1(VAR_6);
 }
 return (VAR_7);
}
