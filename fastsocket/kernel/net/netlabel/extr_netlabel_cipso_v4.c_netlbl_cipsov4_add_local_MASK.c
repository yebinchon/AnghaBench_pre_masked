
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_audit {int dummy; } ;
struct genl_info {int * attrs; } ;
struct cipso_v4_doi {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct cipso_v4_doi*,struct netlbl_audit*) ;
 int FUNC_1 (struct cipso_v4_doi*) ;
 struct cipso_v4_doi* FUNC_2 (int,int ) ;
 int FUNC_3 (struct genl_info*,struct cipso_v4_doi*) ;

__attribute__((used)) static int FUNC_4(struct genl_info *VAR_5,
        struct netlbl_audit *VAR_6)
{
 int VAR_7;
 struct cipso_v4_doi *VAR_8 = ((void*)0);

 if (!VAR_5->attrs[VAR_4])
  return -VAR_1;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_2;
 VAR_8->type = VAR_0;

 VAR_7 = FUNC_3(VAR_5, VAR_8);
 if (VAR_7 != 0)
  goto add_local_failure;

 VAR_7 = FUNC_0(VAR_8, VAR_6);
 if (VAR_7 != 0)
  goto add_local_failure;
 return 0;

add_local_failure:
 FUNC_1(VAR_8);
 return VAR_7;
}
