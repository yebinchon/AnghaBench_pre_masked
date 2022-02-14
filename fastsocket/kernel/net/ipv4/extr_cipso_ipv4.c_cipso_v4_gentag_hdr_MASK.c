
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct cipso_v4_doi {int doi; } ;
typedef int __be32 ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct cipso_v4_doi *VAR_2,
    unsigned char *VAR_3,
    u32 VAR_4)
{
 VAR_3[0] = VAR_1;
 VAR_3[1] = VAR_0 + VAR_4;
 *(__be32 *)&VAR_3[2] = FUNC_0(VAR_2->doi);
}
