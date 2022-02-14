
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct common_audit_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*,int ,int *) ;

__attribute__((used)) static int FUNC_3(int VAR_4, char *VAR_5, u16 VAR_6,
        u32 VAR_7,
        struct common_audit_data *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 VAR_9 = FUNC_1(VAR_4, &VAR_10);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_0(VAR_7, VAR_10,
      VAR_2, VAR_0, VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_11);
 if (VAR_9)
  return VAR_9;
 return FUNC_0(VAR_7, VAR_11,
       VAR_3, VAR_1, VAR_8);
}
