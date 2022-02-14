
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_mac {int * mac_stub; int * mac_iv_ext; int * mac_iv; int * mac_pcm; int * mac_ucode; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct bwi_mac *VAR_1)
{
 if (VAR_1->mac_ucode != ((void*)0)) {
  FUNC_0(VAR_1->mac_ucode, VAR_0);
  VAR_1->mac_ucode = ((void*)0);
 }

 if (VAR_1->mac_pcm != ((void*)0)) {
  FUNC_0(VAR_1->mac_pcm, VAR_0);
  VAR_1->mac_pcm = ((void*)0);
 }

 if (VAR_1->mac_iv != ((void*)0)) {
  FUNC_0(VAR_1->mac_iv, VAR_0);
  VAR_1->mac_iv = ((void*)0);
 }

 if (VAR_1->mac_iv_ext != ((void*)0)) {
  FUNC_0(VAR_1->mac_iv_ext, VAR_0);
  VAR_1->mac_iv_ext = ((void*)0);
 }

 if (VAR_1->mac_stub != ((void*)0)) {
  FUNC_0(VAR_1->mac_stub, VAR_0);
  VAR_1->mac_stub = ((void*)0);
 }
}
