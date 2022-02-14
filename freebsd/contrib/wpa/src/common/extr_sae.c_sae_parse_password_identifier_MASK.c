
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; } ;
struct TYPE_2__ {char* pw_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (char*,int const*,int const) ;
 int FUNC_3 (char*,int const*,int const) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int const*,int const*) ;
 int FUNC_6 (int ,char*,int const*,int) ;
 int FUNC_7 (int ,char*,char*,int const) ;
 int FUNC_8 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_9(struct sae_data *VAR_4,
      const u8 *VAR_5, const u8 *VAR_6)
{
 FUNC_6(VAR_0, "SAE: Possible elements at the end of the frame",
      VAR_5, VAR_6 - VAR_5);
 if (!FUNC_5(VAR_5, VAR_6)) {
  if (VAR_4->tmp->pw_id) {
   FUNC_8(VAR_0,
       "SAE: No Password Identifier included, but expected one (%s)",
       VAR_4->tmp->pw_id);
   return VAR_2;
  }
  FUNC_0(VAR_4->tmp->pw_id);
  VAR_4->tmp->pw_id = ((void*)0);
  return VAR_1;
 }

 if (VAR_4->tmp->pw_id &&
     (VAR_5[1] - 1 != (int) FUNC_4(VAR_4->tmp->pw_id) ||
      FUNC_2(VAR_4->tmp->pw_id, VAR_5 + 3, VAR_5[1] - 1) != 0)) {
  FUNC_8(VAR_0,
      "SAE: The included Password Identifier does not match the expected one (%s)",
      VAR_4->tmp->pw_id);
  return VAR_2;
 }

 FUNC_0(VAR_4->tmp->pw_id);
 VAR_4->tmp->pw_id = FUNC_1(VAR_5[1]);
 if (!VAR_4->tmp->pw_id)
  return VAR_3;
 FUNC_3(VAR_4->tmp->pw_id, VAR_5 + 3, VAR_5[1] - 1);
 VAR_4->tmp->pw_id[VAR_5[1] - 1] = '\0';
 FUNC_7(VAR_0, "SAE: Received Password Identifier",
     VAR_4->tmp->pw_id, VAR_5[1] - 1);
 return VAR_1;
}
