
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {size_t used; } ;
struct wpa_global {int * p2p; int ** wfd_subelem; int wifi_display; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct wpabuf*) ;
 int FUNC_4 (int *,struct wpabuf*) ;
 int FUNC_5 (int *,struct wpabuf*) ;
 int FUNC_6 (int *,struct wpabuf*) ;
 int FUNC_7 (int *,struct wpabuf*) ;
 int FUNC_8 (int *,struct wpabuf*) ;
 int FUNC_9 (int *,struct wpabuf*) ;
 int FUNC_10 (int *,struct wpabuf*) ;
 int FUNC_11 (int *,int *) ;
 struct wpabuf* FUNC_12 (struct wpabuf*) ;
 int FUNC_13 (int ,char*,struct wpabuf*) ;
 int FUNC_14 (int ,char*) ;
 struct wpabuf* FUNC_15 (size_t) ;
 int FUNC_16 (struct wpabuf*) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (struct wpabuf*,int *) ;

__attribute__((used)) static int FUNC_19(struct wpa_global *VAR_7)
{
 struct wpabuf *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11;

 if (VAR_7->p2p == ((void*)0))
  return 0;

 FUNC_14(VAR_0, "WFD: Update WFD IE");

 if (!VAR_7->wifi_display) {
  FUNC_14(VAR_0, "WFD: Wi-Fi Display disabled - do not "
      "include WFD IE");
  FUNC_4(VAR_7->p2p, ((void*)0));
  FUNC_7(VAR_7->p2p, ((void*)0));
  FUNC_8(VAR_7->p2p, ((void*)0));
  FUNC_3(VAR_7->p2p, ((void*)0));
  FUNC_6(VAR_7->p2p, ((void*)0));
  FUNC_9(VAR_7->p2p, ((void*)0));
  FUNC_10(VAR_7->p2p, ((void*)0));
  FUNC_5(VAR_7->p2p, ((void*)0));
  FUNC_2(VAR_7->p2p, ((void*)0));
  FUNC_11(VAR_7->p2p, ((void*)0));
  FUNC_0(VAR_7->p2p, ((void*)0));
  FUNC_1(VAR_7->p2p, ((void*)0));
  return 0;
 }

 FUNC_2(VAR_7->p2p,
        VAR_7->wfd_subelem[VAR_3]);
 FUNC_11(
  VAR_7->p2p, VAR_7->wfd_subelem[VAR_5]);
 FUNC_0(
  VAR_7->p2p,
  VAR_7->wfd_subelem[VAR_1]);
 FUNC_1(
  VAR_7->p2p, VAR_7->wfd_subelem[VAR_2]);
 VAR_10 = 0;
 if (VAR_7->wfd_subelem[VAR_3])
  VAR_10 += FUNC_17(VAR_7->wfd_subelem[
       VAR_3]);

 if (VAR_7->wfd_subelem[VAR_5])
  VAR_10 += FUNC_17(VAR_7->wfd_subelem[
       VAR_5]);

 if (VAR_7->wfd_subelem[VAR_1])
  VAR_10 += FUNC_17(VAR_7->wfd_subelem[
       VAR_1]);
 if (VAR_7->wfd_subelem[VAR_2])
  VAR_10 += FUNC_17(VAR_7->wfd_subelem[
       VAR_2]);
 if (VAR_7->wfd_subelem[VAR_6])
  VAR_10 += FUNC_17(VAR_7->wfd_subelem[
       VAR_6]);
 if (VAR_7->wfd_subelem[VAR_4])
  VAR_10 += FUNC_17(VAR_7->wfd_subelem[VAR_4]);
 VAR_9 = FUNC_15(VAR_10);
 if (VAR_9 == ((void*)0))
  return -1;

 if (VAR_7->wfd_subelem[VAR_3])
  FUNC_18(VAR_9,
          VAR_7->wfd_subelem[VAR_3]);

 if (VAR_7->wfd_subelem[VAR_5])
  FUNC_18(VAR_9,
          VAR_7->wfd_subelem[VAR_5]);

 if (VAR_7->wfd_subelem[VAR_1])
  FUNC_18(VAR_9, VAR_7->wfd_subelem[
           VAR_1]);
 if (VAR_7->wfd_subelem[VAR_2])
  FUNC_18(VAR_9,
          VAR_7->wfd_subelem[VAR_2]);

 VAR_8 = FUNC_12(VAR_9);
 FUNC_13(VAR_0, "WFD: WFD IE for Beacon", VAR_8);
 FUNC_4(VAR_7->p2p, VAR_8);

 VAR_8 = FUNC_12(VAR_9);
 FUNC_13(VAR_0, "WFD: WFD IE for (Re)Association Request",
   VAR_8);
 FUNC_3(VAR_7->p2p, VAR_8);

 VAR_8 = FUNC_12(VAR_9);
 FUNC_13(VAR_0, "WFD: WFD IE for GO Negotiation", VAR_8);
 FUNC_5(VAR_7->p2p, VAR_8);

 VAR_8 = FUNC_12(VAR_9);
 FUNC_13(VAR_0, "WFD: WFD IE for Provision Discovery "
   "Request", VAR_8);
 FUNC_9(VAR_7->p2p, VAR_8);

 VAR_11 = VAR_9->used;
 if (VAR_7->wfd_subelem[VAR_4])
  FUNC_18(VAR_9,
          VAR_7->wfd_subelem[VAR_4]);

 VAR_8 = FUNC_12(VAR_9);
 FUNC_13(VAR_0, "WFD: WFD IE for Probe Request", VAR_8);
 FUNC_7(VAR_7->p2p, VAR_8);

 if (VAR_7->wfd_subelem[VAR_6])
  FUNC_18(VAR_9,
          VAR_7->wfd_subelem[VAR_6]);
 VAR_8 = FUNC_12(VAR_9);
 FUNC_13(VAR_0, "WFD: WFD IE for Probe Response", VAR_8);
 FUNC_8(VAR_7->p2p, VAR_8);


 VAR_9->used = VAR_11;
 if (VAR_7->wfd_subelem[VAR_6])
  FUNC_18(VAR_9,
          VAR_7->wfd_subelem[VAR_6]);

 VAR_8 = FUNC_12(VAR_9);
 FUNC_13(VAR_0, "WFD: WFD IE for P2P Invitation", VAR_8);
 FUNC_6(VAR_7->p2p, VAR_8);

 VAR_8 = FUNC_12(VAR_9);
 FUNC_13(VAR_0, "WFD: WFD IE for Provision Discovery "
   "Response", VAR_8);
 FUNC_10(VAR_7->p2p, VAR_8);

 FUNC_16(VAR_9);

 return 0;
}
