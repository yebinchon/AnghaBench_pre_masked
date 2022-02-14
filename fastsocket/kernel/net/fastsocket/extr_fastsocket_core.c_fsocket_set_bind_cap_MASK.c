
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int cap_effective; } ;
typedef int kernel_cap_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(kernel_cap_t *VAR_2)
{
 kernel_cap_t VAR_3, VAR_4, VAR_5, VAR_6;
 struct cred *VAR_7;

 FUNC_0(VAR_1, &VAR_3, &VAR_4, &VAR_5);
 VAR_6 = VAR_3;

 FUNC_1(VAR_6, VAR_0);


 VAR_7 = (struct cred *)FUNC_2();
 VAR_7->cap_effective = VAR_6;

 *VAR_2 = VAR_3;
}
