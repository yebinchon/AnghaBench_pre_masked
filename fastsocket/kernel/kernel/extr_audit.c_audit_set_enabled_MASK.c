
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(int VAR_5, uid_t VAR_6, u32 VAR_7, u32 VAR_8)
{
 int VAR_9;
 if (VAR_5 < VAR_1 || VAR_5 > VAR_0)
  return -VAR_2;

 VAR_9 = FUNC_0("audit_enabled", &VAR_3, VAR_5,
         VAR_6, VAR_7, VAR_8);

 if (!VAR_9)
  VAR_4 |= !!VAR_5;

 return VAR_9;
}
