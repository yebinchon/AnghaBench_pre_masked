
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int X509 ;
typedef int SSL ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct bufferevent*) ;
 int * FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (void*,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bufferevent *VAR_9, short VAR_10, void *VAR_11)
{
 FUNC_1(("Got event %d", (int)VAR_10));
 if (VAR_10 & VAR_0) {
  SSL *VAR_12;
  X509 *VAR_13;
  ++VAR_6;
  VAR_12 = FUNC_3(VAR_9);
  FUNC_6(VAR_12);
  VAR_13 = FUNC_0(VAR_12);
  if (0==FUNC_5(VAR_11, "server")) {
   FUNC_6(VAR_13 == ((void*)0));
  } else {
   FUNC_6(VAR_13 != ((void*)0));
  }
  if (VAR_8) {
   if (--VAR_7 == 0)
    FUNC_4(VAR_3, ((void*)0));
  }
 } else if (VAR_10 & VAR_1) {
  FUNC_1(("Got a good EOF"));
  ++VAR_4;
  FUNC_2(VAR_9);
 } else if (VAR_10 & VAR_2) {
  FUNC_1(("Got an error."));
  ++VAR_5;
  FUNC_2(VAR_9);
 }
end:
 ;
}
