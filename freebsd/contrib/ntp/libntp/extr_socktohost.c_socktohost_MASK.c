
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct addrinfo {int ai_addr; int ai_addrlen; struct addrinfo* ai_next; int ai_flags; int ai_socktype; int ai_protocol; int ai_family; } ;
struct TYPE_10__ {int sa; } ;
typedef TYPE_1__ sockaddr_u ;
typedef int addr ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__ const*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (struct addrinfo) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_8 (struct addrinfo*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,char const*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_11 (int *,int ,char*,int ,int *,int ,int) ;
 int FUNC_12 (TYPE_1__*,int ,size_t) ;
 size_t FUNC_13 (int,int ) ;
 int FUNC_14 (char*,int ,char*,char*,char*) ;
 int FUNC_15 () ;
 char* FUNC_16 (TYPE_1__ const*) ;

const char *
FUNC_17(
 const sockaddr_u *VAR_11
 )
{
 const char VAR_12[] = "ntp";
 char * VAR_13;
 char * VAR_14;
 int VAR_15;
 struct addrinfo VAR_16;
 struct addrinfo * VAR_17;
 struct addrinfo * VAR_18;
 sockaddr_u VAR_19;
 size_t VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_22 = FUNC_15();


 FUNC_2(VAR_13);
 VAR_15 = VAR_7 | VAR_8;
 if (FUNC_11(&VAR_11->sa, FUNC_3(VAR_11), VAR_13, VAR_6,
   ((void*)0), 0, VAR_15)) {
  VAR_10 = VAR_22;
  return FUNC_16(VAR_11);
 }

 FUNC_5(1, ("%s reversed to %s\n", FUNC_16(VAR_11), VAR_13));





 FUNC_6(VAR_16);
 VAR_16.ai_family = FUNC_0(VAR_11);
 VAR_16.ai_protocol = VAR_5;
 VAR_16.ai_socktype = VAR_9;
 VAR_16.ai_flags = 0;
 VAR_17 = ((void*)0);

 VAR_21 = FUNC_10(VAR_13, VAR_12, &VAR_16, &VAR_17);
 if (VAR_21 == VAR_4



    ) {
  VAR_16.ai_flags = VAR_1;



  VAR_21 = FUNC_10(VAR_13, VAR_12, &VAR_16, &VAR_17);
 }







 if (VAR_21)
  goto forward_fail;

 FUNC_1(VAR_17 != ((void*)0));

 for (VAR_18 = VAR_17; VAR_18 != ((void*)0); VAR_18 = VAR_18->ai_next) {







  FUNC_7(&VAR_19);
  VAR_20 = FUNC_13(sizeof(VAR_19), VAR_18->ai_addrlen);
  FUNC_12(&VAR_19, VAR_18->ai_addr, VAR_20);
  if (FUNC_4(VAR_11, &VAR_19))
   break;
 }
 FUNC_8(VAR_17);

 if (VAR_18 != ((void*)0)) {
  VAR_10 = VAR_22;
  return VAR_13;
 }

    forward_fail:
 FUNC_5(1, ("%s forward check lookup fail: %s\n", VAR_13,
    FUNC_9(VAR_21)));
 FUNC_2(VAR_14);
 FUNC_14(VAR_14, VAR_6, "%s (%s)", FUNC_16(VAR_11), VAR_13);

 VAR_10 = VAR_22;
 return VAR_14;
}
