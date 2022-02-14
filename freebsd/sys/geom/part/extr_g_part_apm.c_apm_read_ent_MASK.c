
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct g_provider {int sectorsize; } ;
struct g_consumer {struct g_provider* provider; } ;
struct apm_ent {int ent_type; int ent_name; void* ent_size; void* ent_start; void* ent_pmblkcnt; int ent_sig; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (struct g_consumer*,int,int,int*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(struct g_consumer *VAR_0, uint32_t VAR_1, struct apm_ent *VAR_2,
    int VAR_3)
{
 struct g_provider *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = VAR_0->provider;
 VAR_5 = FUNC_4(VAR_0, VAR_4->sectorsize * VAR_1, VAR_4->sectorsize, &VAR_6);
 if (VAR_5 == ((void*)0))
  return (VAR_6);
 if (VAR_3)
  FUNC_5(VAR_5, VAR_4->sectorsize);
 VAR_2->ent_sig = FUNC_1(VAR_5);
 VAR_2->ent_pmblkcnt = FUNC_2(VAR_5 + 4);
 VAR_2->ent_start = FUNC_2(VAR_5 + 8);
 VAR_2->ent_size = FUNC_2(VAR_5 + 12);
 FUNC_0(VAR_5 + 16, VAR_2->ent_name, sizeof(VAR_2->ent_name));
 FUNC_0(VAR_5 + 48, VAR_2->ent_type, sizeof(VAR_2->ent_type));
 FUNC_3(VAR_5);
 return (0);
}
