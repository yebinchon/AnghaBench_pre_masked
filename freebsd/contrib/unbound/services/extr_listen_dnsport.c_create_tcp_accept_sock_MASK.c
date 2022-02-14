
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; scalar_t__ ai_addr; int ai_socktype; } ;
typedef int socklen_t ;
typedef int qlen ;
typedef int on ;
typedef int mss ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
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
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_24 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,struct sockaddr_storage*,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,int ,int ,int*,int) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ,int,scalar_t__,int ,int *) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (struct addrinfo*) ;
 int VAR_25 ;
 int FUNC_15 (scalar_t__) ;

int
FUNC_16(struct addrinfo *VAR_26, int VAR_27, int* VAR_28,
 int* VAR_29, int VAR_30, int VAR_31, int VAR_32, int VAR_33)
{
 int VAR_34;
 (void)VAR_30;


 (void)VAR_32;

 FUNC_14(VAR_26);
 *VAR_28 = 0;







 (void)VAR_33;

 if((VAR_34 = FUNC_10(VAR_26->ai_family, VAR_26->ai_socktype, 0)) == -1) {

  if(VAR_24 == VAR_1 || VAR_24 == VAR_5) {
   *VAR_28 = 1;
   return -1;
  }
  FUNC_6("can't create socket: %s", FUNC_11(VAR_24));
  return -1;
 }
 if (VAR_31 > 0) {
  FUNC_8(" setsockopt(TCP_MAXSEG) unsupported");

 }
 (void)VAR_29;
 (void)VAR_27;
 if(



        FUNC_1(VAR_34, VAR_26->ai_addr, VAR_26->ai_addrlen) != 0) {


  if(VAR_26->ai_family==VAR_0 && VAR_24==VAR_2)
   *VAR_28 = 1;
  else {
   FUNC_7("can't bind socket", FUNC_11(VAR_24),
    (struct sockaddr_storage*)VAR_26->ai_addr,
    VAR_26->ai_addrlen);
  }
  FUNC_2(VAR_34);







  return -1;
 }
 if(!FUNC_4(VAR_34)) {

  FUNC_2(VAR_34);



  return -1;
 }
 if(FUNC_5(VAR_34, VAR_18) == -1) {

  FUNC_6("can't listen: %s", FUNC_11(VAR_24));
  FUNC_2(VAR_34);




  return -1;
 }
 return VAR_34;
}
