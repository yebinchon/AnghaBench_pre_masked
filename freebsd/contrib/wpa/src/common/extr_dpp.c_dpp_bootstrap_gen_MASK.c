
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dpp_global {int bootstrap; } ;
struct dpp_bootstrap_info {int id; int list; void* uri; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct dpp_bootstrap_info*) ;
 char* FUNC_3 (struct dpp_bootstrap_info*,char*,int *,size_t) ;
 int FUNC_4 (struct dpp_global*) ;
 scalar_t__ FUNC_5 (struct dpp_bootstrap_info*,char*) ;
 scalar_t__ FUNC_6 (struct dpp_bootstrap_info*,char*) ;
 scalar_t__ FUNC_7 (struct dpp_bootstrap_info*,char*) ;
 char* FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char*,int *,size_t) ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 (void*,size_t,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 struct dpp_bootstrap_info* FUNC_15 (int) ;
 int FUNC_16 (char*) ;

int FUNC_17(struct dpp_global *VAR_2, const char *VAR_3)
{
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 u8 *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;
 size_t VAR_12;
 int VAR_13 = -1;
 struct dpp_bootstrap_info *VAR_14;

 if (!VAR_2)
  return -1;

 VAR_14 = FUNC_15(sizeof(*VAR_14));
 if (!VAR_14)
  goto fail;

 if (FUNC_14(VAR_3, "type=qrcode"))
  VAR_14->type = VAR_1;
 else if (FUNC_14(VAR_3, "type=pkex"))
  VAR_14->type = VAR_0;
 else
  goto fail;

 VAR_4 = FUNC_8(VAR_3, " chan=");
 VAR_5 = FUNC_8(VAR_3, " mac=");
 VAR_6 = FUNC_8(VAR_3, " info=");
 VAR_8 = FUNC_8(VAR_3, " curve=");
 VAR_9 = FUNC_8(VAR_3, " key=");

 if (VAR_9) {
  VAR_11 = FUNC_13(VAR_9) / 2;
  VAR_10 = FUNC_11(VAR_11);
  if (!VAR_10 ||
      FUNC_9(VAR_9, VAR_10, VAR_11) < 0)
   goto fail;
 }

 VAR_7 = FUNC_3(VAR_14, VAR_8, VAR_10, VAR_11);
 if (!VAR_7)
  goto fail;

 VAR_12 = 4;
 if (VAR_4) {
  if (FUNC_5(VAR_14, VAR_4) < 0)
   goto fail;
  VAR_12 += 3 + FUNC_13(VAR_4);
 }
 if (VAR_5) {
  if (FUNC_7(VAR_14, VAR_5) < 0)
   goto fail;
  VAR_12 += 3 + FUNC_13(VAR_5);
 }
 if (VAR_6) {
  if (FUNC_6(VAR_14, VAR_6) < 0)
   goto fail;
  VAR_12 += 3 + FUNC_13(VAR_6);
 }
 VAR_12 += 4 + FUNC_13(VAR_7);
 VAR_14->uri = FUNC_11(VAR_12 + 1);
 if (!VAR_14->uri)
  goto fail;
 FUNC_12(VAR_14->uri, VAR_12 + 1, "DPP:%s%s%s%s%s%s%s%s%sK:%s;;",
      VAR_4 ? "C:" : "", VAR_4 ? VAR_4 : "", VAR_4 ? ";" : "",
      VAR_5 ? "M:" : "", VAR_5 ? VAR_5 : "", VAR_5 ? ";" : "",
      VAR_6 ? "I:" : "", VAR_6 ? VAR_6 : "", VAR_6 ? ";" : "",
      VAR_7);
 VAR_14->id = FUNC_4(VAR_2);
 FUNC_1(&VAR_2->bootstrap, &VAR_14->list);
 VAR_13 = VAR_14->id;
 VAR_14 = ((void*)0);
fail:
 FUNC_10(VAR_8);
 FUNC_10(VAR_7);
 FUNC_10(VAR_4);
 FUNC_10(VAR_5);
 FUNC_10(VAR_6);
 FUNC_16(VAR_9);
 FUNC_0(VAR_10, VAR_11);
 FUNC_2(VAR_14);
 return VAR_13;
}
