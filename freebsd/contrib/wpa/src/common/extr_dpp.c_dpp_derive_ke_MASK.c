
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dpp_authentication {size_t Mx_len; size_t Nx_len; size_t secret_len; int * Lx; int Lx_len; scalar_t__ own_bi; scalar_t__ peer_bi; int * Nx; int * Mx; int r_nonce; int i_nonce; TYPE_1__* curve; } ;
struct TYPE_2__ {size_t nonce_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int *,unsigned int,char const*,int *,unsigned int) ;
 int FUNC_1 (unsigned int,int *,int,size_t,int const**,size_t*,int *) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 int FUNC_4 (int ,char*,int *,unsigned int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct dpp_authentication *VAR_3, u8 *VAR_4,
    unsigned int VAR_5)
{
 size_t VAR_6;
 u8 VAR_7[2 * VAR_1];
 const char *VAR_8 = "DPP Key";
 u8 VAR_9[VAR_0];
 int VAR_10;
 const u8 *VAR_11[3];
 size_t VAR_12[3];
 size_t VAR_13 = 0;

 if (!VAR_3->Mx_len || !VAR_3->Nx_len) {
  FUNC_5(VAR_2,
      "DPP: Mx/Nx not available - cannot derive ke");
  return -1;
 }




 VAR_6 = VAR_3->curve->nonce_len;
 FUNC_2(VAR_7, VAR_3->i_nonce, VAR_6);
 FUNC_2(&VAR_7[VAR_6], VAR_3->r_nonce, VAR_6);
 VAR_11[VAR_13] = VAR_3->Mx;
 VAR_12[VAR_13] = VAR_3->Mx_len;
 VAR_13++;
 VAR_11[VAR_13] = VAR_3->Nx;
 VAR_12[VAR_13] = VAR_3->Nx_len;
 VAR_13++;
 if (VAR_3->peer_bi && VAR_3->own_bi) {
  if (!VAR_3->Lx_len) {
   FUNC_5(VAR_2,
       "DPP: Lx not available - cannot derive ke");
   return -1;
  }
  VAR_11[VAR_13] = VAR_3->Lx;
  VAR_12[VAR_13] = VAR_3->secret_len;
  VAR_13++;
 }
 VAR_10 = FUNC_1(VAR_5, VAR_7, 2 * VAR_6,
         VAR_13, VAR_11, VAR_12, VAR_9);
 if (VAR_10 < 0)
  return -1;
 FUNC_4(VAR_2, "DPP: PRK = HKDF-Extract(<>, IKM)",
   VAR_9, VAR_5);


 VAR_10 = FUNC_0(VAR_5, VAR_9, VAR_5, VAR_8, VAR_4, VAR_5);
 FUNC_3(VAR_9, 0, VAR_5);
 if (VAR_10 < 0)
  return -1;

 FUNC_4(VAR_2, "DPP: ke = HKDF-Expand(PRK, info, L)",
   VAR_4, VAR_5);
 return 0;
}
