
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksem_mapping {char* km_path; int km_ksem; int km_fnv; } ;
struct ksem {char* ks_path; } ;
typedef int Fnv32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ksem_mapping*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ksem*) ;
 struct ksem_mapping* FUNC_3 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(char *VAR_3, Fnv32_t VAR_4, struct ksem *VAR_5)
{
 struct ksem_mapping *VAR_6;

 VAR_6 = FUNC_3(sizeof(struct ksem_mapping), VAR_0, VAR_1);
 VAR_6->km_path = VAR_3;
 VAR_6->km_fnv = VAR_4;
 VAR_6->km_ksem = FUNC_2(VAR_5);
 VAR_5->ks_path = VAR_3;
 FUNC_1(FUNC_0(VAR_4), VAR_6, VAR_2);
}
