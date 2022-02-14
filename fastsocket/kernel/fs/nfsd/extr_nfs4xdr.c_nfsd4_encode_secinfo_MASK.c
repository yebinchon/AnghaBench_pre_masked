
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct svc_export {int ex_nflavors; TYPE_3__* ex_client; struct exp_flavor_info* ex_flavors; } ;
struct nfsd4_secinfo {struct svc_export* si_exp; } ;
struct nfsd4_compoundres {int dummy; } ;
struct TYPE_5__ {int len; int data; } ;
struct gss_api_mech {TYPE_2__ gm_oid; } ;
struct exp_flavor_info {int pseudoflavor; } ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {TYPE_1__* flavour; } ;
struct TYPE_4__ {scalar_t__ flavour; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct svc_export*) ;
 struct gss_api_mech* FUNC_5 (int) ;
 int FUNC_6 (struct gss_api_mech*) ;
 int FUNC_7 (struct gss_api_mech*,int) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static __be32
FUNC_9(struct nfsd4_compoundres *VAR_3, __be32 VAR_4,
       struct nfsd4_secinfo *VAR_5)
{
 int VAR_6 = 0;
 struct svc_export *VAR_7 = VAR_5->si_exp;
 u32 VAR_8;
 struct exp_flavor_info *VAR_9;
 struct exp_flavor_info VAR_10[2];
 __be32 *VAR_11;

 if (VAR_4)
  goto out;
 if (VAR_7->ex_nflavors) {
  VAR_9 = VAR_7->ex_flavors;
  VAR_8 = VAR_7->ex_nflavors;
 } else {
  VAR_9 = VAR_10;
  if (VAR_7->ex_client->flavour->flavour == VAR_2) {
   VAR_8 = 2;
   VAR_9[0].pseudoflavor = VAR_2;
   VAR_9[1].pseudoflavor = VAR_1;
  } else if (VAR_7->ex_client->flavour->flavour == VAR_0) {
   VAR_8 = 1;
   VAR_9[0].pseudoflavor
     = FUNC_8(VAR_7->ex_client);
  } else {
   VAR_8 = 1;
   VAR_9[0].pseudoflavor
     = VAR_7->ex_client->flavour->flavour;
  }
 }

 FUNC_1(4);
 FUNC_2(VAR_8);
 FUNC_0();
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  u32 VAR_12 = VAR_9[VAR_6].pseudoflavor;
  struct gss_api_mech *VAR_13 = FUNC_5(VAR_12);

  if (VAR_13) {
   FUNC_1(4);
   FUNC_2(VAR_0);
   FUNC_0();
   FUNC_1(4 + VAR_13->gm_oid.len);
   FUNC_2(VAR_13->gm_oid.len);
   FUNC_3(VAR_13->gm_oid.data, VAR_13->gm_oid.len);
   FUNC_0();
   FUNC_1(4);
   FUNC_2(0);
   FUNC_0();
   FUNC_1(4);
   FUNC_2(FUNC_7(VAR_13, VAR_12));
   FUNC_0();
   FUNC_6(VAR_13);
  } else {
   FUNC_1(4);
   FUNC_2(VAR_12);
   FUNC_0();
  }
 }
out:
 if (VAR_7)
  FUNC_4(VAR_7);
 return VAR_4;
}
