
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hEvent; } ;
struct wpa_global_dst {scalar_t__ pipe; struct wpa_global_dst* prev; struct wpa_global_dst* next; TYPE_1__ overlap; struct ctrl_iface_global_priv* priv; } ;
struct ctrl_iface_global_priv {struct wpa_global_dst* ctrl_dst; } ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_1__*) ;
 int * FUNC_2 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int,int,int,int ,int ,int,int *) ;


 int VAR_0 ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *) ;
 int VAR_11 ;
 int FUNC_6 (int *,int,int ,struct wpa_global_dst*,int *) ;
 int FUNC_7 (struct wpa_global_dst*) ;
 int FUNC_8 (struct wpa_global_dst*) ;
 struct wpa_global_dst* FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_11(struct ctrl_iface_global_priv *VAR_13)
{
 struct wpa_global_dst *VAR_14;
 DWORD VAR_15;

 VAR_14 = FUNC_9(sizeof(*VAR_14));
 if (VAR_14 == ((void*)0))
  return -1;
 FUNC_10(VAR_2, "CTRL: Open pipe %p", VAR_14);

 VAR_14->priv = VAR_13;
 VAR_14->pipe = VAR_1;

 VAR_14->overlap.hEvent = FUNC_2(((void*)0), VAR_11, VAR_11, ((void*)0));
 if (VAR_14->overlap.hEvent == ((void*)0)) {
  FUNC_10(VAR_3, "CTRL: CreateEvent failed: %d",
      (int) FUNC_4());
  goto fail;
 }

 FUNC_6(VAR_14->overlap.hEvent,
        sizeof(VAR_14->overlap.hEvent),
        VAR_12, VAR_14, ((void*)0));


 VAR_14->pipe = FUNC_3(VAR_4,
        VAR_5 | VAR_0,
        VAR_7 |
        VAR_6 |
        VAR_8,
        10, VAR_9, VAR_10,
        1000, ((void*)0));
 if (VAR_14->pipe == VAR_1) {
  FUNC_10(VAR_3, "CTRL: CreateNamedPipe failed: %d",
      (int) FUNC_4());
  goto fail;
 }

 if (FUNC_1(VAR_14->pipe, &VAR_14->overlap)) {
  FUNC_10(VAR_3, "CTRL: ConnectNamedPipe failed: %d",
      (int) FUNC_4());
  FUNC_0(VAR_14->pipe);
  FUNC_8(VAR_14);
  return -1;
 }

 VAR_15 = FUNC_4();
 switch (VAR_15) {
 case 129:
  FUNC_10(VAR_2, "CTRL: ConnectNamedPipe: connection in "
      "progress");
  break;
 case 128:
  FUNC_10(VAR_2, "CTRL: ConnectNamedPipe: already "
      "connected");
  if (FUNC_5(VAR_14->overlap.hEvent))
   break;

 default:
  FUNC_10(VAR_2, "CTRL: ConnectNamedPipe error: %d",
      (int) VAR_15);
  FUNC_0(VAR_14->pipe);
  FUNC_8(VAR_14);
  return -1;
 }

 VAR_14->next = VAR_13->ctrl_dst;
 if (VAR_14->next)
  VAR_14->next->prev = VAR_14;
 VAR_13->ctrl_dst = VAR_14;

 return 0;

fail:
 FUNC_7(VAR_14);
 return -1;
}
