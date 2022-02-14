
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct dpp_configurator {int own; char* kid; int csign; int * curve; } ;
typedef int kid_hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (struct dpp_configurator*) ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 struct wpabuf* FUNC_4 (int ,int) ;
 int FUNC_5 (int **,int const*,size_t) ;
 int FUNC_6 (struct dpp_configurator*) ;
 struct dpp_configurator* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,int const**,size_t*,int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct wpabuf*) ;
 int * FUNC_11 (struct wpabuf*) ;
 size_t FUNC_12 (struct wpabuf*) ;

struct dpp_configurator *
FUNC_13(const char *VAR_4, const u8 *VAR_5,
   size_t VAR_6)
{
 struct dpp_configurator *VAR_7;
 struct wpabuf *VAR_8 = ((void*)0);
 u8 VAR_9[VAR_2];
 const u8 *VAR_10[1];
 size_t VAR_11[1];

 VAR_7 = FUNC_7(sizeof(*VAR_7));
 if (!VAR_7)
  return ((void*)0);

 if (!VAR_4) {
  VAR_7->curve = &VAR_3[0];
 } else {
  VAR_7->curve = FUNC_3(VAR_4);
  if (!VAR_7->curve) {
   FUNC_9(VAR_1, "DPP: Unsupported curve: %s",
       VAR_4);
   FUNC_6(VAR_7);
   return ((void*)0);
  }
 }
 if (VAR_5)
  VAR_7->csign = FUNC_5(&VAR_7->curve, VAR_5,
           VAR_6);
 else
  VAR_7->csign = FUNC_2(VAR_7->curve);
 if (!VAR_7->csign)
  goto fail;
 VAR_7->own = 1;

 VAR_8 = FUNC_4(VAR_7->csign, 1);
 if (!VAR_8) {
  FUNC_9(VAR_1, "DPP: Failed to extract C-sign-key");
  goto fail;
 }


 VAR_10[0] = FUNC_11(VAR_8);
 VAR_11[0] = FUNC_12(VAR_8);
 if (FUNC_8(1, VAR_10, VAR_11, VAR_9) < 0) {
  FUNC_9(VAR_0,
      "DPP: Failed to derive kid for C-sign-key");
  goto fail;
 }

 VAR_7->kid = (char *) FUNC_0(VAR_9, sizeof(VAR_9),
            ((void*)0), 0);
 if (!VAR_7->kid)
  goto fail;
out:
 FUNC_10(VAR_8);
 return VAR_7;
fail:
 FUNC_1(VAR_7);
 VAR_7 = ((void*)0);
 goto out;
}
