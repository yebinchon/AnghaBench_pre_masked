
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int snd ;
typedef int rcv ;
typedef int on ;
typedef int off ;
typedef int mtu ;
typedef int got ;
typedef int action ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_39 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ,int ,void*,int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,struct sockaddr_storage*,int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int,int ,int ,int*,int ) ;
 int FUNC_10 (int,int,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,int,int,struct sockaddr*,int ,int *) ;
 int VAR_40 ;
 int FUNC_13 (scalar_t__) ;

int
FUNC_14(int VAR_41, int VAR_42, struct sockaddr* VAR_43,
        socklen_t VAR_44, int VAR_45, int* VAR_46, int* VAR_47,
 int VAR_48, int VAR_49, int VAR_50, int* VAR_51, int VAR_52,
 int VAR_53, int VAR_54)
{
 int VAR_55;







 (void)VAR_48;


 (void)VAR_49;


 (void)VAR_45;


 (void)VAR_52;


 (void)VAR_53;
 (void)VAR_54;

 if((VAR_55 = FUNC_10(VAR_41, VAR_42, 0)) == -1) {
  *VAR_46 = 0;

  if(VAR_39 == VAR_5 || VAR_39 == VAR_10) {
   *VAR_47 = 1;
   return -1;
  }
  FUNC_6("can't create socket: %s", FUNC_11(VAR_39));
  *VAR_47 = 0;
  return -1;
 }





 if(VAR_50) {
  (void)VAR_51;
 }
 if(VAR_48) {
 }

 if(VAR_49) {
 }
 if(VAR_41 == VAR_1) {
 } else if(VAR_41 == VAR_0) {
 }
 if(



  FUNC_1(VAR_55, (struct sockaddr*)VAR_43, VAR_44) != 0) {
  *VAR_47 = 0;
  *VAR_46 = 0;
  FUNC_2(VAR_55);
  return -1;
 }
 if(!FUNC_4(VAR_55)) {
  *VAR_47 = 0;
  *VAR_46 = 0;

  FUNC_2(VAR_55);



  return -1;
 }
 return VAR_55;
}
