
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {scalar_t__ ifr_data; int ifr_name; } ;
struct ethtool_value {scalar_t__ data; int cmd; } ;
typedef int ifr ;
typedef scalar_t__ caddr_t ;
typedef int bpf_u_int32 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,unsigned int*) ;
 int FUNC_6 (int,int ,struct ifreq*) ;
 scalar_t__ FUNC_7 (int,char const*) ;
 int FUNC_8 (struct ifreq*,int ,int) ;
 int FUNC_9 (char*,int ,int,char*,char const*) ;
 int FUNC_10 (char*,int ,char*,char const*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_13(const char *VAR_11, bpf_u_int32 *VAR_12, char *VAR_13)
{
 int VAR_14;
 FILE *VAR_15;
 unsigned int VAR_16;
 struct ifreq VAR_17;
 struct ethtool_value VAR_18;

 if (*VAR_12 & VAR_6) {




  *VAR_12 |= VAR_5;
  return 0;
 }

 VAR_14 = FUNC_11(VAR_0, VAR_9, 0);
 if (VAR_14 == -1) {
  FUNC_9(VAR_13, VAR_2, VAR_10,
      "Can't create socket to get ethtool information for %s",
      VAR_11);
  return -1;
 }





 if (FUNC_7(VAR_14, VAR_11)) {



  *VAR_12 |= VAR_7;
 } else {






  char *VAR_19;

  if (FUNC_0(&VAR_19, "/sys/class/net/%s/type", VAR_11) == -1) {
   FUNC_10(VAR_13, VAR_2,
       "%s: Can't generate path name string for /sys/class/net device",
       VAR_11);
   FUNC_1(VAR_14);
   return -1;
  }
  VAR_15 = FUNC_3(VAR_19, "r");
  if (VAR_15 != ((void*)0)) {
   if (FUNC_5(VAR_15, "%u", &VAR_16) == 1) {



    switch (VAR_16) {


    case 131:
     FUNC_1(VAR_14);
     FUNC_2(VAR_15);
     FUNC_4(VAR_19);
     return 0;


    case 132:
    case 137:
    case 136:
    case 135:

    case 134:


    case 133:


    case 138:




     *VAR_12 |= VAR_7;
     break;
    }
   }
   FUNC_2(VAR_15);
   FUNC_4(VAR_19);
  }
 }
 FUNC_1(VAR_14);
 return 0;
}
