
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct g_provider {int sectorsize; int name; } ;
struct g_llvm_metadata {int md_relsize; int md_reloffset; } ;
struct g_llvm_label {int ll_md_offset; } ;
struct g_consumer {struct g_provider* provider; } ;


 int FUNC_0 (int,char*,char*,...) ;
 int FUNC_1 (struct g_consumer*,int,int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct g_consumer*,int ,int,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,struct g_llvm_metadata*,struct g_llvm_label*) ;
 int FUNC_8 (char*,size_t,struct g_llvm_metadata*) ;

int
FUNC_9(struct g_consumer *VAR_0, struct g_llvm_metadata *VAR_1,
    struct g_llvm_label *VAR_2)
{
 struct g_provider *VAR_3;
 u_char *VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_4();

 VAR_5 = FUNC_1(VAR_0, 1, 0, 0);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_3 = VAR_0->provider;
 FUNC_6();
 VAR_4 = FUNC_3(VAR_0, VAR_2->ll_md_offset, VAR_3->sectorsize, &VAR_5);
 FUNC_5();
 FUNC_1(VAR_0, -1, 0, 0);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(0, "Cannot read metadata from %s (error=%d)",
      VAR_0->provider->name, VAR_5);
  return (VAR_5);
 }

 VAR_5 = FUNC_7(VAR_4, VAR_1, VAR_2);
 FUNC_2(VAR_4);
 if (VAR_5 != 0) {
  return (VAR_5);
 }

 FUNC_0(1, "reading LVM2 config @ %s:%ju", VAR_3->name,
      VAR_2->ll_md_offset + VAR_1->md_reloffset);
 VAR_5 = FUNC_1(VAR_0, 1, 0, 0);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_3 = VAR_0->provider;
 FUNC_6();

 VAR_6 = VAR_1->md_relsize +
     (VAR_3->sectorsize - VAR_1->md_relsize % VAR_3->sectorsize);
 VAR_4 = FUNC_3(VAR_0, VAR_2->ll_md_offset + VAR_1->md_reloffset, VAR_6, &VAR_5);
 FUNC_5();
 FUNC_1(VAR_0, -1, 0, 0);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(0, "Cannot read LVM2 config from %s (error=%d)",
      VAR_3->name, VAR_5);
  return (VAR_5);
 }
 VAR_4[VAR_1->md_relsize] = '\0';
 FUNC_0(10, "LVM config:\n%s\n", VAR_4);
 VAR_5 = FUNC_8(VAR_4, VAR_1->md_relsize, VAR_1);
 FUNC_2(VAR_4);

 return (VAR_5);
}
