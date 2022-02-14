
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct in_addr {void* s_addr; } ;
struct alias_link {int dummy; } ;
typedef int port_range ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int ,struct alias_link*,struct in_addr,int ) ;
 struct alias_link* FUNC_3 (int ,struct in_addr,int ,struct in_addr,int ,struct in_addr,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,struct in_addr*) ;
 scalar_t__ FUNC_7 (char*,struct in_addr*,char*,int *) ;
 scalar_t__ FUNC_8 (char*,char*,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int) ;
 int VAR_2 ;
 char* FUNC_13 (char*,char) ;
 char* FUNC_14 (char const*) ;
 char* FUNC_15 (char*,char*) ;

void FUNC_16 (const char* VAR_3)
{
 char *VAR_4;
 char* VAR_5;
 char* VAR_6;
 struct in_addr VAR_7;
 struct in_addr VAR_8;
 struct in_addr VAR_9;
 port_range VAR_10;
 u_short VAR_11 = 0;
 u_short VAR_12 = 0;
 u_short VAR_13 = 0;
 u_short VAR_14 = 0;
 u_short VAR_15 = 0;
 u_short VAR_16 = 0;
 int VAR_17;
 char* VAR_18;
 char* VAR_19;
 int VAR_20;
 struct alias_link *VAR_21 = ((void*)0);

 VAR_4 = FUNC_14 (VAR_3);
 if (!VAR_4)
  FUNC_10 (1, "redirect_port: strdup() failed");



 VAR_18 = FUNC_15 (VAR_4, " \t");
 if (!VAR_18)
  FUNC_10 (1, "redirect_port: missing protocol");

 VAR_17 = FUNC_9 (VAR_18);



 VAR_5 = FUNC_15 (((void*)0), " \t");
 if (!VAR_5)
  FUNC_10 (1, "redirect_port: missing local address");

 VAR_19 = FUNC_13(VAR_5, ',');
 if (VAR_19) {
  VAR_7.s_addr = VAR_1;
  VAR_11 = ~0;
  VAR_14 = 1;
  VAR_6 = VAR_5;
 } else {
  if ( FUNC_7 (VAR_5, &VAR_7, VAR_18, &VAR_10) != 0 )
   FUNC_10 (1, "redirect_port: invalid local port range");

  VAR_11 = FUNC_0(VAR_10);
  VAR_14 = FUNC_1(VAR_10);
  VAR_6 = ((void*)0);
 }




 VAR_5 = FUNC_15 (((void*)0), " \t");
 if (!VAR_5)
  FUNC_10 (1, "redirect_port: missing public port");

 VAR_19 = FUNC_13 (VAR_5, ':');
 if (VAR_19) {
         if (FUNC_7 (VAR_5, &VAR_8, VAR_18, &VAR_10) != 0 )
          FUNC_10 (1, "redirect_port: invalid public port range");
 }
 else {
  VAR_8.s_addr = VAR_0;
  if (FUNC_8 (VAR_5, VAR_18, &VAR_10) != 0)
          FUNC_10 (1, "redirect_port: invalid public port range");
 }

 VAR_12 = FUNC_0(VAR_10);
 VAR_15 = FUNC_1(VAR_10);




 VAR_5 = FUNC_15 (((void*)0), " \t");
 if (VAR_5) {
  VAR_19 = FUNC_13 (VAR_5, ':');
  if (VAR_19) {
          if (FUNC_7 (VAR_5, &VAR_9, VAR_18, &VAR_10) != 0)
           FUNC_10 (1, "redirect_port: invalid remote port range");
  } else {
          FUNC_4(VAR_10, 0);
   FUNC_5(VAR_10, 1);
   FUNC_6 (VAR_5, &VAR_9);
  }
 }
 else {
         FUNC_4(VAR_10, 0);
  FUNC_5(VAR_10, 1);
  VAR_9.s_addr = VAR_0;
 }

 VAR_13 = FUNC_0(VAR_10);
 VAR_16 = FUNC_1(VAR_10);




 if (VAR_14 != VAR_15)
         FUNC_10 (1, "redirect_port: port ranges must be equal in size");


 if (VAR_16 != VAR_14 && (VAR_16 != 1 || VAR_13 != 0))
         FUNC_10 (1, "redirect_port: remote port must be 0 or equal to local port range in size");

 for (VAR_20 = 0 ; VAR_20 < VAR_15 ; ++VAR_20) {

         u_short VAR_22 = VAR_13 + VAR_20;
         if (VAR_16 == 1 && VAR_13 == 0)
          VAR_22 = 0;

  VAR_21 = FUNC_3 (VAR_2, VAR_7,
      FUNC_12(VAR_11 + VAR_20),
      VAR_9,
      FUNC_12(VAR_22),
      VAR_8,
      FUNC_12(VAR_12 + VAR_20),
      VAR_17);
 }




 if (VAR_6 != ((void*)0) && VAR_21 != ((void*)0)) {
  VAR_5 = FUNC_15(VAR_6, ",");
  while (VAR_5 != ((void*)0)) {
   if (FUNC_7(VAR_5, &VAR_7, VAR_18, &VAR_10) != 0)
    FUNC_10(1, "redirect_port: invalid local port range");

   VAR_11 = FUNC_0(VAR_10);
   if (FUNC_1(VAR_10) != 1)
    FUNC_10(1, "redirect_port: local port must be single in this context");
   FUNC_2(VAR_2, VAR_21, VAR_7, FUNC_12(VAR_11));
   VAR_5 = FUNC_15(((void*)0), ",");
  }
 }

 FUNC_11 (VAR_4);
}
