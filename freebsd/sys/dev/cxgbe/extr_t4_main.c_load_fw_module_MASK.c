
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_info {int fw_mod_name; int kld_name; } ;
struct firmware {int dummy; } ;
struct adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct fw_info* FUNC_2 (int ) ;
 struct firmware* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct adapter *VAR_2, const struct firmware **VAR_3,
    const struct firmware **VAR_4)
{
 struct fw_info *VAR_5;

 *VAR_3 = ((void*)0);
 if (VAR_4 != ((void*)0))
  *VAR_4 = ((void*)0);

 VAR_5 = FUNC_2(FUNC_0(VAR_2));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_2->dev,
      "unable to look up firmware information for chip %d.\n",
      FUNC_0(VAR_2));
  return (VAR_0);
 }

 *VAR_3 = FUNC_3(VAR_5->kld_name);
 if (*VAR_3 != ((void*)0)) {
  if (VAR_4 != ((void*)0))
   *VAR_4 = FUNC_3(VAR_5->fw_mod_name);
  return (0);
 }

 return (VAR_1);
}
