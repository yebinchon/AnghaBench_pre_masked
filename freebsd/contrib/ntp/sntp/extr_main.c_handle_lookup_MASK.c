
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dns_ctx {char* name; int flags; int key_id; int * key; int timeout; } ;
struct addrinfo {int ai_flags; int ai_protocol; int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct addrinfo) ;
 int VAR_6 ;
 int VAR_7 ;
 struct dns_ctx* FUNC_4 (size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*,int,char*) ;
 int FUNC_7 (int,int **) ;
 int FUNC_8 (char const*,char*,struct addrinfo*,int ,int *,struct dns_ctx*) ;
 int FUNC_9 (char*,char const*,size_t) ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (char const*) ;

void
FUNC_11(
 const char *VAR_13,
 int VAR_14
 )
{
 struct addrinfo VAR_15;
 struct dns_ctx *VAR_16;
 char * VAR_17;
 size_t VAR_18;
 size_t VAR_19;

 FUNC_2(1, ("handle_lookup(%s,%#x)\n", VAR_13, VAR_14));

 FUNC_3(VAR_15);
 VAR_15.ai_family = VAR_7;
 VAR_15.ai_flags = VAR_0 | VAR_6;





 VAR_15.ai_socktype = VAR_5;
 VAR_15.ai_protocol = VAR_2;

 VAR_18 = 1 + FUNC_10(VAR_13);
 VAR_19 = sizeof(*VAR_16) + VAR_18;
 VAR_16 = FUNC_4(VAR_19);
 VAR_17 = (char *)(VAR_16 + 1);
 FUNC_9(VAR_17, VAR_13, VAR_18);
 VAR_16->name = VAR_17;
 VAR_16->flags = VAR_14;
 VAR_16->timeout = VAR_10;
 VAR_16->key = ((void*)0);


 if (FUNC_0(VAR_1)) {
  VAR_16->key_id = VAR_4;
  FUNC_7(VAR_16->key_id, &VAR_16->key);
  if (((void*)0) == VAR_16->key) {
   FUNC_6(VAR_12, "%s: Authentication with keyID %d requested, but no matching keyID found in <%s>!\n",
    VAR_9, VAR_16->key_id, FUNC_1(VAR_3));
   FUNC_5(1);
  }
 } else {
  VAR_16->key_id = -1;
 }

 ++VAR_8;
 FUNC_8(VAR_13, "123", &VAR_15, 0,
        &VAR_11, VAR_16);
}
