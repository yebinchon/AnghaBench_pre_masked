
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_if_list_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (char*,int ,scalar_t__,char*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(pcap_if_list_t *VAR_5, char *VAR_6)
{
 FILE *VAR_7;
 int VAR_8;
 char VAR_9[512];
 int VAR_10;
 char *VAR_11;
 int VAR_12 = 0;

 VAR_7 = FUNC_5("/proc/net/dev", "r");
 if (VAR_7 == ((void*)0)) {



  if (VAR_4 == VAR_0)
   return (0);




  FUNC_8(VAR_6, VAR_1,
      VAR_4, "Can't open /proc/net/dev");
  return (-1);
 }




 VAR_8 = FUNC_9(VAR_2, VAR_3, 0);
 if (VAR_8 < 0) {
  FUNC_8(VAR_6, VAR_1,
      VAR_4, "socket");
  (void)FUNC_2(VAR_7);
  return (-1);
 }

 for (VAR_10 = 1;
     FUNC_4(VAR_9, sizeof VAR_9, VAR_7) != ((void*)0); VAR_10++) {



  if (VAR_10 <= 2)
   continue;

  VAR_11 = &VAR_9[0];




  while (*VAR_11 != '\0' && FUNC_6(*VAR_11) && FUNC_7(*VAR_11))
   VAR_11++;
  if (*VAR_11 == '\0' || *VAR_11 == '\n')
   continue;




  if (FUNC_0(VAR_5, VAR_11, VAR_8, VAR_6) == -1) {

   VAR_12 = -1;
   break;
  }
 }
 if (VAR_12 != -1) {




  if (FUNC_3(VAR_7)) {
   FUNC_8(VAR_6, VAR_1,
       VAR_4, "Error reading /proc/net/dev");
   VAR_12 = -1;
  }
 }

 (void)FUNC_1(VAR_8);
 (void)FUNC_2(VAR_7);
 return (VAR_12);
}
