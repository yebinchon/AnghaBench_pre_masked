
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_provider {int sectorsize; int name; } ;
struct g_llvm_label {int dummy; } ;
struct g_consumer {struct g_provider* provider; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (struct g_consumer*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct g_consumer*,int ,int,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct g_llvm_label*,int) ;

int
FUNC_8(struct g_consumer *VAR_0, struct g_llvm_label *VAR_1)
{
 struct g_provider *VAR_2;
 u_char *VAR_3;
 int VAR_4, VAR_5 = 0;

 FUNC_4();


 VAR_5 = FUNC_1(VAR_0, 1, 0, 0);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_2 = VAR_0->provider;
 FUNC_6();
 VAR_3 = FUNC_3(VAR_0, 0, VAR_2->sectorsize * 4, &VAR_5);
 FUNC_5();
 FUNC_1(VAR_0, -1, 0, 0);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(1, "Cannot read metadata from %s (error=%d)",
      VAR_2->name, VAR_5);
  return (VAR_5);
 }


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_5 = FUNC_7(&VAR_3[VAR_4 * VAR_2->sectorsize], VAR_1, VAR_4);
  if (VAR_5 == 0)
   break;
 }
 FUNC_2(VAR_3);
 return (VAR_5);
}
