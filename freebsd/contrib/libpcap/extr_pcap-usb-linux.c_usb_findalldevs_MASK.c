
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int pcap_if_list_t ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char) ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int*) ;
 int FUNC_6 (char*,int ,int) ;
 size_t FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (int *,int,char*) ;

int
FUNC_11(pcap_if_list_t *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_1];
 char *VAR_7;
 size_t VAR_8;
 struct dirent* VAR_9;
 int VAR_10 = 0;
 DIR* VAR_11;
 int VAR_12;
 char* VAR_13;
 size_t VAR_14;

 if (FUNC_1()) {






  FUNC_6(VAR_6, VAR_0, sizeof VAR_6);
  VAR_7 = FUNC_9(VAR_6, '/');
  if (VAR_7 == ((void*)0)) {




   return 0;
  }
  *VAR_7++ = '\0';
  VAR_8 = FUNC_7(VAR_7);




  VAR_11 = FUNC_3(VAR_6);
  if (VAR_11 != ((void*)0)) {
   while ((VAR_10 == 0) && ((VAR_9 = FUNC_4(VAR_11)) != 0)) {
    VAR_13 = VAR_9->d_name;




    if (FUNC_8(VAR_13, VAR_7, VAR_8) != 0)
     continue;




    if (FUNC_5(&VAR_13[VAR_8], "%d", &VAR_12) == 0)
     continue;

    VAR_10 = FUNC_10(VAR_4, VAR_12, VAR_5);
   }

   FUNC_0(VAR_11);
  }
  return 0;
 } else {
  VAR_11 = FUNC_3(VAR_3);
  if (VAR_11 != ((void*)0)) {
   while ((VAR_10 == 0) && ((VAR_9 = FUNC_4(VAR_11)) != 0)) {
    VAR_13 = VAR_9->d_name;

    if (FUNC_8(VAR_13, "usb", 3) != 0)
     continue;

    if (FUNC_5(&VAR_13[3], "%d", &VAR_12) == 0)
     continue;

    VAR_10 = FUNC_10(VAR_4, VAR_12, VAR_5);
   }

   FUNC_0(VAR_11);
   return 0;
  }


  VAR_11 = FUNC_3(VAR_2);
  if (VAR_11 != ((void*)0)) {
   while ((VAR_10 == 0) && ((VAR_9 = FUNC_4(VAR_11)) != 0)) {
    VAR_13 = VAR_9->d_name;
    VAR_14 = FUNC_7(VAR_13);


    if ((VAR_14 < 1) || !FUNC_2(VAR_13[--VAR_14]))
     continue;
    while (FUNC_2(VAR_13[--VAR_14]));
    if (FUNC_5(&VAR_13[VAR_14+1], "%d", &VAR_12) != 1)
     continue;

    VAR_10 = FUNC_10(VAR_4, VAR_12, VAR_5);
   }

   FUNC_0(VAR_11);
   return VAR_10;
  }


  return 0;
 }
}
