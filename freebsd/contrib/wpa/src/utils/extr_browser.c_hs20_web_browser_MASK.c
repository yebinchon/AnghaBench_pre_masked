
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct browser_context {int success; int title; int hover_link; int * win; } ;
typedef int ctx ;
typedef int WebKitWebView ;
typedef int WebKitWebSettings ;
typedef int SoupSession ;
typedef int GtkWidget ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 char* VAR_3 ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*,int *) ;
 int FUNC_9 (int ,char*,int ,struct browser_context*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int * FUNC_15 (int *,int *) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int ) ;
 int FUNC_21 (int ,int,int) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (struct browser_context*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_24 () ;
 int * FUNC_25 (int *) ;
 int FUNC_26 (int *,char const*) ;
 int FUNC_27 () ;
 int VAR_11 ;

int FUNC_28(const char *VAR_12)
{
 GtkWidget *VAR_13;
 SoupSession *VAR_14;
 WebKitWebView *VAR_15;
 WebKitWebSettings *VAR_16;
 struct browser_context VAR_17;

 FUNC_23(&VAR_17, 0, sizeof(VAR_17));
 if (!FUNC_12(((void*)0), ((void*)0)))
  return -1;

 VAR_14 = FUNC_24();
 FUNC_8(FUNC_5(VAR_14), "ssl-ca-file",
       "/etc/ssl/certs/ca-certificates.crt", ((void*)0));
 FUNC_8(FUNC_5(VAR_14), "ssl-strict", VAR_0, ((void*)0));

 VAR_17.win = FUNC_20(VAR_2);
 FUNC_22(FUNC_3(VAR_17.win), "Hotspot 2.0 client");
 FUNC_21(FUNC_3(VAR_17.win), 800, 600);

 VAR_13 = FUNC_15(((void*)0), ((void*)0));
 FUNC_16(FUNC_1(VAR_13),
           VAR_1, VAR_1);

 FUNC_9(FUNC_5(VAR_17.win), "destroy",
    FUNC_4(VAR_11), &VAR_17);

 VAR_15 = FUNC_6(FUNC_27());
 FUNC_9(FUNC_5(VAR_15), "notify::progress",
    FUNC_4(VAR_8), &VAR_17);
 FUNC_9(FUNC_5(VAR_15), "notify::load-status",
    FUNC_4(VAR_7), &VAR_17);
 FUNC_9(FUNC_5(VAR_15), "resource-request-starting",
    FUNC_4(VAR_9), &VAR_17);
 FUNC_9(FUNC_5(VAR_15), "mime-type-policy-decision-requested",
    FUNC_4(VAR_6), &VAR_17);
 FUNC_9(FUNC_5(VAR_15), "download-requested",
    FUNC_4(VAR_4), &VAR_17);
 FUNC_9(FUNC_5(VAR_15), "hovering-over-link",
    FUNC_4(VAR_5), &VAR_17);
 FUNC_9(FUNC_5(VAR_15), "title-changed",
    FUNC_4(VAR_10), &VAR_17);

 FUNC_10(FUNC_0(VAR_13), FUNC_2(VAR_15));
 FUNC_10(FUNC_0(VAR_17.win), FUNC_2(VAR_13));

 FUNC_18(FUNC_2(VAR_15));
 FUNC_19(VAR_17.win);

 VAR_16 = FUNC_25(VAR_15);
 FUNC_8(FUNC_5(VAR_16), "user-agent",
       "Mozilla/5.0 (X11; U; Unix; en-US) "
       "AppleWebKit/537.15 (KHTML, like Gecko) "
       "hs20-client/1.0", ((void*)0));
 FUNC_8(FUNC_5(VAR_16), "auto-load-images", VAR_3, ((void*)0));

 FUNC_26(VAR_15, VAR_12);

 FUNC_13();
 FUNC_17(VAR_17.win);
 while (FUNC_11())
  FUNC_14();

 FUNC_7(VAR_17.hover_link);
 FUNC_7(VAR_17.title);
 return VAR_17.success;
}
