
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_tdls_peer {int addr; } ;
struct wpa_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpa_sm*,int ,int ,int ,int ,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct wpa_sm *VAR_2, struct wpa_tdls_peer *VAR_3)
{
 if (FUNC_1(VAR_2, VAR_1, VAR_3->addr,
      0, 0, ((void*)0), 0, ((void*)0), 0) < 0) {
  FUNC_0(VAR_0, "TDLS: Failed to delete TPK-TK from "
      "the driver");
  return -1;
 }

 return 0;
}
