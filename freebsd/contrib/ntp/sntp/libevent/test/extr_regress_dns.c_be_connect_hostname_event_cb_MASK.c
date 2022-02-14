
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
struct be_conn_hostname_result {short what; int dnserr; } ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_5, short VAR_6, void *VAR_7)
{
 struct be_conn_hostname_result *VAR_8 = VAR_7;
 if (!VAR_8->what) {
  FUNC_0(("Got a bufferevent event %d", VAR_6));
  VAR_8->what = VAR_6;

  if ((VAR_6 & VAR_0) || (VAR_6 & VAR_1)) {
   int VAR_9;
   if ((VAR_9 = FUNC_2(VAR_5))) {
    VAR_8->dnserr = VAR_9;
    FUNC_0(("DNS error %d: %s", VAR_9,
        FUNC_4(VAR_9)));
   } ++VAR_3;
   FUNC_0(("Got %d connections or errors.", VAR_3));

   if (VAR_4 >= 3 && VAR_3 >= 5)
    FUNC_3(VAR_2,
        ((void*)0));
  }
 } else {
  FUNC_1(("Two events on one bufferevent. %d,%d",
   VAR_8->what, (int)VAR_6));
 }
}
