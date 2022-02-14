
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_privsep_data {int ctx; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int from ;
typedef enum privsep_event { ____Placeholder_privsep_event } privsep_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t const) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int,int *,size_t const,int ,struct sockaddr*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,size_t) ;
 int FUNC_6 (int ,int *,size_t) ;
 int FUNC_7 (int ,int *,size_t) ;
 int FUNC_8 (int ,int *,size_t) ;
 int FUNC_9 (int ,int *,size_t) ;
 int FUNC_10 (int ,int *,size_t) ;
 int FUNC_11 (int ,int *,size_t) ;
 int FUNC_12 (int ,char*,int,...) ;
 int FUNC_13 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_14(int VAR_8, void *VAR_9,
           void *VAR_10)
{
 struct wpa_driver_privsep_data *VAR_11 = VAR_9;
 u8 *VAR_12, *VAR_13;
 size_t VAR_14;
 int VAR_15, VAR_16;
 enum privsep_event VAR_17;
 struct sockaddr_un VAR_18;
 socklen_t VAR_19 = sizeof(VAR_18);
 const size_t VAR_20 = 2000;

 VAR_12 = FUNC_1(VAR_20);
 if (VAR_12 == ((void*)0))
  return;
 VAR_15 = FUNC_3(VAR_8, VAR_12, VAR_20, 0,
         (struct sockaddr *) &VAR_18, &VAR_19);
 if (VAR_15 < 0) {
  FUNC_12(VAR_6, "recvfrom(priv_socket): %s",
      FUNC_4(VAR_7));
  FUNC_0(VAR_12);
  return;
 }

 FUNC_12(VAR_5, "privsep_driver: received %u bytes", VAR_15);

 if (VAR_15 < (int) sizeof(int)) {
  FUNC_12(VAR_5, "Too short event message (len=%d)", VAR_15);
  return;
 }

 FUNC_2(&VAR_16, VAR_12, sizeof(int));
 VAR_13 = &VAR_12[sizeof(int)];
 VAR_14 = VAR_15 - sizeof(int);
 FUNC_12(VAR_5, "privsep: Event %d received (len=%lu)",
     VAR_16, (unsigned long) VAR_14);

 VAR_17 = VAR_16;
 switch (VAR_17) {
 case 129:
  FUNC_13(VAR_11->ctx, VAR_3, ((void*)0));
  break;
 case 128:
  FUNC_13(VAR_11->ctx, VAR_4, ((void*)0));
  break;
 case 138:
  FUNC_5(VAR_11->ctx, VAR_0,
            VAR_13, VAR_14);
  break;
 case 135:
  FUNC_13(VAR_11->ctx, VAR_2, ((void*)0));
  break;
 case 137:
  FUNC_5(VAR_11->ctx, VAR_1,
            VAR_13, VAR_14);
  break;
 case 132:
  FUNC_9(
   VAR_11->ctx, VAR_13, VAR_14);
  break;
 case 133:
  FUNC_8(VAR_11->ctx, VAR_13,
         VAR_14);
  break;
 case 131:
  FUNC_10(VAR_11->ctx, VAR_13,
        VAR_14);
  break;
 case 134:
  FUNC_7(VAR_11->ctx, VAR_13,
           VAR_14);
  break;
 case 130:
  FUNC_11(VAR_11->ctx, VAR_13,
        VAR_14);
  break;
 case 136:
  FUNC_6(VAR_11->ctx, VAR_13, VAR_14);
  break;
 }

 FUNC_0(VAR_12);
}
