
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef enum regress_openssl_type { ____Placeholder_regress_openssl_type } regress_openssl_type ;
typedef int X509 ;
typedef int SSL ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*,int) ;
 int FUNC_5 (struct bufferevent*) ;
 int * FUNC_6 (struct bufferevent*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct bufferevent *VAR_17, short VAR_18, void *VAR_19)
{
 enum regress_openssl_type VAR_20;
 VAR_20 = (enum regress_openssl_type)VAR_19;

 FUNC_1(("Got event %d", (int)VAR_18));
 if (VAR_18 & VAR_0) {
  SSL *VAR_21;
  X509 *VAR_22;
  ++VAR_14;
  VAR_21 = FUNC_6(VAR_17);
  FUNC_9(VAR_21);
  VAR_22 = FUNC_0(VAR_21);
  if (VAR_20 & VAR_9) {
   FUNC_9(VAR_22 == ((void*)0));
  } else {
   FUNC_9(VAR_22 != ((void*)0));
  }
  if (VAR_16) {
   if (--VAR_15 == 0)
    FUNC_8(VAR_10, ((void*)0));
  }

  if ((VAR_20 & VAR_5) && (VAR_20 & VAR_4))
   FUNC_7(FUNC_3(VAR_17), "1\n");
 } else if (VAR_18 & VAR_1) {
  FUNC_1(("Got a good EOF"));
  ++VAR_11;
  if (VAR_20 & VAR_6) {
   FUNC_4(VAR_17, VAR_20 & VAR_7);
  }
  if (VAR_20 & VAR_8) {
   FUNC_5(VAR_17);
  }
  FUNC_2(VAR_17);
 } else if (VAR_18 & VAR_2) {
  FUNC_1(("Got an error."));
  ++VAR_12;
  if (VAR_20 & VAR_6) {
   FUNC_4(VAR_17, VAR_20 & VAR_7);
  }
  if (VAR_20 & VAR_8) {
   FUNC_5(VAR_17);
  }
  FUNC_2(VAR_17);
 } else if (VAR_18 & VAR_3) {
  FUNC_1(("Got timeout."));
  ++VAR_13;
  if (VAR_20 & VAR_6) {
   FUNC_4(VAR_17, VAR_20 & VAR_7);
  }
  if (VAR_20 & VAR_8) {
   FUNC_5(VAR_17);
  }
  FUNC_2(VAR_17);
 }
end:
 ;
}
