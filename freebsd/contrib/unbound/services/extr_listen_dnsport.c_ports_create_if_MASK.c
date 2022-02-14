
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listen_port {int dummy; } ;
struct config_strlist {int dummy; } ;
struct addrinfo {int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char const*,int,struct config_strlist*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char const*,char const*,struct addrinfo*,int,int*,size_t,size_t,int*,int,int,int,int) ;
 int FUNC_6 (struct listen_port**,int,int ) ;
 int FUNC_7 (int,int ) ;
 char const* FUNC_8 (char const*,char) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10(const char* VAR_10, int VAR_11, int VAR_12, int VAR_13,
 struct addrinfo *VAR_14, const char* VAR_15, struct listen_port** VAR_16,
 size_t VAR_17, size_t VAR_18, int VAR_19,
 struct config_strlist* VAR_20, int* VAR_21,
 int VAR_22, int VAR_23, int VAR_24, int VAR_25,
 int VAR_26)
{
 int VAR_27, VAR_28=0;





 int VAR_29 = 0;
 (void)VAR_26;


 if(!VAR_12 && !VAR_13)
  return 0;
 if(VAR_11) {
  if((VAR_27 = FUNC_5(VAR_0, VAR_10, VAR_15, VAR_14, 1,
   &VAR_28, VAR_17, VAR_18, VAR_21, VAR_22,
   VAR_23, VAR_24, VAR_25)) == -1) {
   if(VAR_28) {
    FUNC_4("IPv6 protocol not available");
    return 1;
   }
   return 0;
  }

  if(!FUNC_7(VAR_27, VAR_14->ai_family)) {

   FUNC_1(VAR_27);



   return 0;
  }
  if(!FUNC_6(VAR_16, VAR_27,
     VAR_29?VAR_9:VAR_8)) {

   FUNC_1(VAR_27);



   return 0;
  }
 } else if(VAR_12) {

  if((VAR_27 = FUNC_5(VAR_0, VAR_10, VAR_15, VAR_14, 1,
   &VAR_28, VAR_17, VAR_18, VAR_21, VAR_22,
   VAR_23, VAR_24, VAR_25)) == -1) {
   if(VAR_28) {
    FUNC_4("IPv6 protocol not available");
    return 1;
   }
   return 0;
  }
  if(!FUNC_6(VAR_16, VAR_27,
     VAR_29?VAR_7:VAR_6)) {

   FUNC_1(VAR_27);



   return 0;
  }
 }
 if(VAR_13) {
  int VAR_30 = FUNC_3(VAR_10, VAR_15, VAR_19,
   VAR_20);
  if((VAR_27 = FUNC_5(VAR_1, VAR_10, VAR_15, VAR_14, 1,
   &VAR_28, 0, 0, VAR_21, VAR_22, VAR_23,
   VAR_24, VAR_25)) == -1) {
   if(VAR_28) {

    return 1;
   }
   return 0;
  }
  if(VAR_30)
   FUNC_9(VAR_2, "setup TCP for SSL service");
  if(!FUNC_6(VAR_16, VAR_27, VAR_30?VAR_3:
   (VAR_29?VAR_5:VAR_4))) {

   FUNC_1(VAR_27);



   return 0;
  }
 }
 return 1;
}
