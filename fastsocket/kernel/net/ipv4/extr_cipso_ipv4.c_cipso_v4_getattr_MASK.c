
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_lsm_secattr {int type; } ;
struct cipso_v4_doi {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const,struct netlbl_lsm_secattr*) ;
 struct cipso_v4_doi* FUNC_1 (int ) ;
 int FUNC_2 (struct cipso_v4_doi*,unsigned char const*,struct netlbl_lsm_secattr*) ;
 int FUNC_3 (struct cipso_v4_doi*,unsigned char const*,struct netlbl_lsm_secattr*) ;
 int FUNC_4 (struct cipso_v4_doi*,unsigned char const*,struct netlbl_lsm_secattr*) ;
 int FUNC_5 (struct cipso_v4_doi*,unsigned char const*,struct netlbl_lsm_secattr*) ;
 int FUNC_6 (unsigned char const*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(const unsigned char *VAR_2,
       struct netlbl_lsm_secattr *VAR_3)
{
 int VAR_4 = -VAR_0;
 u32 VAR_5;
 struct cipso_v4_doi *VAR_6;

 if (FUNC_0(VAR_2, VAR_2[1], VAR_3) == 0)
  return 0;

 VAR_5 = FUNC_6(&VAR_2[2]);
 FUNC_7();
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == ((void*)0))
  goto getattr_return;



 switch (VAR_2[6]) {
 case 128:
  VAR_4 = FUNC_4(VAR_6, &VAR_2[6], VAR_3);
  break;
 case 131:
  VAR_4 = FUNC_2(VAR_6, &VAR_2[6], VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_5(VAR_6, &VAR_2[6], VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_3(VAR_6, &VAR_2[6], VAR_3);
  break;
 }
 if (VAR_4 == 0)
  VAR_3->type = VAR_1;

getattr_return:
 FUNC_8();
 return VAR_4;
}
