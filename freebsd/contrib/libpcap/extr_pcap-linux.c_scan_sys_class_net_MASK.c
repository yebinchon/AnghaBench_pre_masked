
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct dirent {scalar_t__ d_type; int * d_name; } ;
typedef int pcap_if_list_t ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,scalar_t__,char*) ;
 int FUNC_6 (char*,int,char*,int *) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *,char*) ;

__attribute__((used)) static int
FUNC_10(pcap_if_list_t *VAR_7, char *VAR_8)
{
 DIR *VAR_9;
 int VAR_10;
 struct dirent *VAR_11;
 char VAR_12[VAR_2+1];
 struct stat VAR_13;
 int VAR_14 = 1;

 VAR_9 = FUNC_4("/sys/class/net");
 if (VAR_9 == ((void*)0)) {



  if (VAR_6 == VAR_1)
   return (0);




  FUNC_5(VAR_8, VAR_3,
      VAR_6, "Can't open /sys/class/net");
  return (-1);
 }




 VAR_10 = FUNC_8(VAR_4, VAR_5, 0);
 if (VAR_10 < 0) {
  FUNC_5(VAR_8, VAR_3,
      VAR_6, "socket");
  (void)FUNC_2(VAR_9);
  return (-1);
 }

 for (;;) {
  VAR_6 = 0;
  VAR_11 = FUNC_7(VAR_9);
  if (VAR_11 == ((void*)0)) {



   break;
  }




  if (FUNC_9(VAR_11->d_name, ".") == 0 ||
      FUNC_9(VAR_11->d_name, "..") == 0)
   continue;





  if (VAR_11->d_type == VAR_0)
   continue;
  FUNC_6(VAR_12, sizeof VAR_12,
      "/sys/class/net/%s/ifindex", VAR_11->d_name);
  if (FUNC_3(VAR_12, &VAR_13) != 0) {
   continue;
  }




  if (FUNC_0(VAR_7, &VAR_11->d_name[0], VAR_10, VAR_8) == -1) {

   VAR_14 = -1;
   break;
  }
 }
 if (VAR_14 != -1) {




  if (VAR_6 != 0) {
   FUNC_5(VAR_8, VAR_3,
       VAR_6, "Error reading /sys/class/net");
   VAR_14 = -1;
  }
 }

 (void)FUNC_1(VAR_10);
 (void)FUNC_2(VAR_9);
 return (VAR_14);
}
