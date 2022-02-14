
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dpp_global {int configurator; } ;
struct dpp_configurator {int id; int list; } ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct dpp_configurator*) ;
 struct dpp_configurator* FUNC_3 (char*,int *,size_t) ;
 int FUNC_4 (struct dpp_global*) ;
 char* FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char*,int *,size_t) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (size_t) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

int FUNC_11(struct dpp_global *VAR_0, const char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 u8 *VAR_4 = ((void*)0);
 size_t VAR_5 = 0;
 int VAR_6 = -1;
 struct dpp_configurator *VAR_7 = ((void*)0);

 VAR_2 = FUNC_5(VAR_1, " curve=");
 VAR_3 = FUNC_5(VAR_1, " key=");

 if (VAR_3) {
  VAR_5 = FUNC_9(VAR_3) / 2;
  VAR_4 = FUNC_8(VAR_5);
  if (!VAR_4 ||
      FUNC_6(VAR_3, VAR_4, VAR_5) < 0)
   goto fail;
 }

 VAR_7 = FUNC_3(VAR_2, VAR_4, VAR_5);
 if (!VAR_7)
  goto fail;

 VAR_7->id = FUNC_4(VAR_0);
 FUNC_1(&VAR_0->configurator, &VAR_7->list);
 VAR_6 = VAR_7->id;
 VAR_7 = ((void*)0);
fail:
 FUNC_7(VAR_2);
 FUNC_10(VAR_3);
 FUNC_0(VAR_4, VAR_5);
 FUNC_2(VAR_7);
 return VAR_6;
}
