
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* kmod_name; } ;
struct common_audit_data {TYPE_1__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,struct common_audit_data*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_5)
{
 u32 VAR_6;
 struct common_audit_data VAR_7;

 VAR_6 = FUNC_2(VAR_4);

 FUNC_0(&VAR_7, VAR_0);
 VAR_7.u.kmod_name = VAR_5;

 return FUNC_1(VAR_6, VAR_2, VAR_1,
       VAR_3, &VAR_7);
}
