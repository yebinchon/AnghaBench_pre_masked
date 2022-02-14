
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ustr {int u_cmpID; int u_len; int u_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (struct ustr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ustr *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
 if ((!VAR_1) || (!VAR_2) || (!VAR_3) || (VAR_3 > VAR_0 - 2))
  return 0;

 FUNC_1(VAR_1, 0, sizeof(struct ustr));
 FUNC_0(VAR_1->u_name, VAR_2, VAR_3);
 VAR_1->u_cmpID = 0x08;
 VAR_1->u_len = VAR_3;

 return VAR_3;
}
