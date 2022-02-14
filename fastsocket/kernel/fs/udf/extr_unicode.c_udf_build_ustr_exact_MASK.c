
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ustr {int u_len; int u_name; int u_cmpID; } ;
typedef int dstring ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct ustr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ustr *VAR_0, dstring *VAR_1, int VAR_2)
{
 if ((!VAR_0) || (!VAR_1) || (!VAR_2))
  return -1;

 FUNC_1(VAR_0, 0, sizeof(struct ustr));
 VAR_0->u_cmpID = VAR_1[0];
 VAR_0->u_len = VAR_2 - 1;
 FUNC_0(VAR_0->u_name, VAR_1 + 1, VAR_2 - 1);

 return 0;
}
