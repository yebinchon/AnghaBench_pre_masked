
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct lifreq {char const* lifr_name; int lifr_flags; int lifr_addr; int lifr_dstaddr; int lifr_broadaddr; } ;
struct lifnum {int lifn_count; scalar_t__ lifn_flags; void* lifn_family; } ;
struct lifconf {unsigned int lifc_len; char* lifc_buf; scalar_t__ lifc_flags; void* lifc_family; } ;
typedef int pcap_if_list_t ;
typedef int get_if_flags_func ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int *,char const*,int,int ,struct sockaddr*,int,struct sockaddr*,int,struct sockaddr*,int,struct sockaddr*,int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,char*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 char* FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (char*,int ,unsigned int) ;
 int FUNC_8 (char*,int ,scalar_t__,char*,...) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 char* FUNC_10 (char const*,char) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;
 int FUNC_12 (char const*,char const*,int) ;
 int FUNC_13 (char const*) ;

int
FUNC_14(pcap_if_list_t *VAR_16, char *VAR_17,
    int (*VAR_18)(const char *), get_if_flags_func VAR_19)
{
 register int VAR_20, VAR_21, VAR_22;
 register struct lifreq *VAR_23, *VAR_24;
 struct lifnum VAR_25;
 struct lifconf VAR_26;
 char *VAR_27 = ((void*)0);
 unsigned VAR_28;



 struct lifreq VAR_29, VAR_30, VAR_31, VAR_32;
 struct sockaddr *VAR_33, *VAR_34, *VAR_35;
 int VAR_36 = 0;





 VAR_20 = FUNC_9(VAR_0, VAR_14, 0);
 if (VAR_20 < 0) {
  FUNC_8(VAR_17, VAR_7,
      VAR_15, "socket: AF_INET");
  return (-1);
 }




 VAR_21 = FUNC_9(VAR_1, VAR_14, 0);
 if (VAR_21 < 0) {
  FUNC_8(VAR_17, VAR_7,
      VAR_15, "socket: AF_INET6");
  (void)FUNC_1(VAR_20);
  return (-1);
 }




 VAR_25.lifn_family = VAR_2;
 VAR_25.lifn_flags = 0;
 VAR_25.lifn_count = 0;
 if (FUNC_3(VAR_20, VAR_13, (char *)&VAR_25) < 0) {
  FUNC_8(VAR_17, VAR_7,
      VAR_15, "SIOCGLIFNUM");
  (void)FUNC_1(VAR_21);
  (void)FUNC_1(VAR_20);
  return (-1);
 }




 VAR_28 = VAR_25.lifn_count * sizeof (struct lifreq);
 VAR_27 = FUNC_5(VAR_28);
 if (VAR_27 == ((void*)0)) {
  FUNC_8(VAR_17, VAR_7,
      VAR_15, "malloc");
  (void)FUNC_1(VAR_21);
  (void)FUNC_1(VAR_20);
  return (-1);
 }




 VAR_26.lifc_len = VAR_28;
 VAR_26.lifc_buf = VAR_27;
 VAR_26.lifc_family = VAR_2;
 VAR_26.lifc_flags = 0;
 FUNC_7(VAR_27, 0, VAR_28);
 if (FUNC_3(VAR_20, VAR_9, (char *)&VAR_26) < 0) {
  FUNC_8(VAR_17, VAR_7,
      VAR_15, "SIOCGLIFCONF");
  (void)FUNC_1(VAR_21);
  (void)FUNC_1(VAR_20);
  FUNC_2(VAR_27);
  return (-1);
 }




 VAR_23 = (struct lifreq *)VAR_27;
 VAR_24 = (struct lifreq *)(VAR_27 + VAR_26.lifc_len);

 for (; VAR_23 < VAR_24; VAR_23++) {





  if (FUNC_11(VAR_23->lifr_name, "dummy", 5) == 0)
   continue;




  if (!(*VAR_18)(VAR_23->lifr_name)) {



   continue;
  }




  if (((struct sockaddr *)&VAR_23->lifr_addr)->sa_family == VAR_1)
   VAR_22 = VAR_21;
  else
   VAR_22 = VAR_20;




  FUNC_12(VAR_29.lifr_name, VAR_23->lifr_name,
      sizeof(VAR_29.lifr_name));
  if (FUNC_3(VAR_22, VAR_11, (char *)&VAR_29) < 0) {
   if (VAR_15 == VAR_4)
    continue;
   FUNC_8(VAR_17, VAR_7,
       VAR_15, "SIOCGLIFFLAGS: %.*s",
       (int)sizeof(VAR_29.lifr_name),
       VAR_29.lifr_name);
   VAR_36 = -1;
   break;
  }




  FUNC_12(VAR_30.lifr_name, VAR_23->lifr_name,
      sizeof(VAR_30.lifr_name));
  FUNC_6(&VAR_30.lifr_addr, &VAR_23->lifr_addr,
      sizeof(VAR_30.lifr_addr));
  if (FUNC_3(VAR_22, VAR_12, (char *)&VAR_30) < 0) {
   if (VAR_15 == VAR_3) {



    VAR_33 = ((void*)0);
   } else {
    FUNC_8(VAR_17,
        VAR_7, VAR_15,
        "SIOCGLIFNETMASK: %.*s",
        (int)sizeof(VAR_30.lifr_name),
        VAR_30.lifr_name);
    VAR_36 = -1;
    break;
   }
  } else
   VAR_33 = (struct sockaddr *)&VAR_30.lifr_addr;





  if (VAR_29.lifr_flags & VAR_5) {
   FUNC_12(VAR_31.lifr_name, VAR_23->lifr_name,
       sizeof(VAR_31.lifr_name));
   FUNC_6(&VAR_31.lifr_addr, &VAR_23->lifr_addr,
       sizeof(VAR_31.lifr_addr));
   if (FUNC_3(VAR_22, VAR_8,
       (char *)&VAR_31) < 0) {
    if (VAR_15 == VAR_3) {



     VAR_34 = ((void*)0);
    } else {
     FUNC_8(VAR_17,
         VAR_7, VAR_15,
         "SIOCGLIFBRDADDR: %.*s",
         (int)sizeof(VAR_31.lifr_name),
         VAR_31.lifr_name);
     VAR_36 = -1;
     break;
    }
   } else
    VAR_34 = (struct sockaddr *)&VAR_31.lifr_broadaddr;
  } else {




   VAR_34 = ((void*)0);
  }





  if (VAR_29.lifr_flags & VAR_6) {
   FUNC_12(VAR_32.lifr_name, VAR_23->lifr_name,
       sizeof(VAR_32.lifr_name));
   FUNC_6(&VAR_32.lifr_addr, &VAR_23->lifr_addr,
       sizeof(VAR_32.lifr_addr));
   if (FUNC_3(VAR_22, VAR_10,
       (char *)&VAR_32) < 0) {
    if (VAR_15 == VAR_3) {



     VAR_35 = ((void*)0);
    } else {
     FUNC_8(VAR_17,
         VAR_7, VAR_15,
         "SIOCGLIFDSTADDR: %.*s",
         (int)sizeof(VAR_32.lifr_name),
         VAR_32.lifr_name);
     VAR_36 = -1;
     break;
    }
   } else
    VAR_35 = (struct sockaddr *)&VAR_32.lifr_dstaddr;
  } else
   VAR_35 = ((void*)0);
  if (FUNC_0(VAR_16, VAR_23->lifr_name,
      VAR_29.lifr_flags, VAR_19,
      (struct sockaddr *)&VAR_23->lifr_addr,
      sizeof (struct sockaddr_storage),
      VAR_33, sizeof (struct sockaddr_storage),
      VAR_34, sizeof (struct sockaddr_storage),
      VAR_35, sizeof (struct sockaddr_storage), VAR_17) < 0) {
   VAR_36 = -1;
   break;
  }
 }
 FUNC_2(VAR_27);
 (void)FUNC_1(VAR_21);
 (void)FUNC_1(VAR_20);

 return (VAR_36);
}
