
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct radix_node {char* rn_key; char* rn_mask; } ;


 int FUNC_0 (int,int) ;
 char* VAR_0 ;

__attribute__((used)) static int
FUNC_1(char *VAR_1,
    struct radix_node *VAR_2,
    int VAR_3)
{
 char *VAR_4 = VAR_1, *VAR_5 = VAR_2->rn_key, *VAR_6 = VAR_2->rn_mask;
 char *VAR_7;
 int VAR_8 = FUNC_0(*(u_char *)VAR_4, *(u_char *)VAR_5);

 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_0;
 else
  VAR_8 = FUNC_0(VAR_8, *(u_char *)VAR_6);
 VAR_7 = VAR_4 + VAR_8; VAR_6 += VAR_3; VAR_5 += VAR_3;
 for (VAR_4 += VAR_3; VAR_4 < VAR_7; VAR_4++, VAR_5++, VAR_6++)
  if ((*VAR_4 ^ *VAR_5) & *VAR_6)
   return 0;
 return 1;
}
