
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_llvm_vg {int vg_pvs; } ;
struct g_llvm_pv {scalar_t__ pv_start; scalar_t__ pv_count; int pv_uuid; int pv_name; struct g_llvm_vg* pv_vg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,scalar_t__) ;
 int FUNC_1 (char*,char*,char*,int ,int) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (int *,struct g_llvm_pv*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (struct g_llvm_pv*,int ) ;
 size_t FUNC_6 (int ,char*) ;
 struct g_llvm_pv* FUNC_7 (int,int ,int) ;
 int VAR_5 ;
 char* FUNC_8 (char**,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10(char **VAR_6, char *VAR_7, struct g_llvm_vg *VAR_8)
{
 struct g_llvm_pv *VAR_9;
 char *VAR_10;
 size_t VAR_11;

 if (*VAR_6 == ((void*)0) || **VAR_6 == '\0')
  return (VAR_0);

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2, VAR_3|VAR_4);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 VAR_9->pv_vg = VAR_8;
 VAR_11 = 0;
 if (VAR_7 == ((void*)0))
  goto bad;
 VAR_11 = FUNC_6(VAR_9->pv_name, VAR_7);
 if (VAR_11 == 0)
  goto bad;

 while ((VAR_7 = FUNC_8(VAR_6, "\n")) != ((void*)0)) {
  if (FUNC_9(VAR_7, "{"))
   goto bad;

  if (FUNC_9(VAR_7, "}"))
   break;


  if (FUNC_9(VAR_7, "=")) {
   FUNC_4(VAR_10, VAR_7, "=");
   FUNC_1("id", VAR_10, VAR_7, VAR_9->pv_uuid, sizeof(VAR_9->pv_uuid));
   FUNC_0("pe_start", VAR_10, VAR_7, VAR_9->pv_start);
   FUNC_0("pe_count", VAR_10, VAR_7, VAR_9->pv_count);
   continue;
  }
 }
 if (VAR_7 == ((void*)0))
  goto bad;

 if (VAR_9->pv_count == 0)
  goto bad;

 FUNC_3(&VAR_8->vg_pvs, VAR_9, VAR_5);
 FUNC_2(3, "pv: name=%s uuid=%s", VAR_9->pv_name, VAR_9->pv_uuid);

 return (0);
bad:
 FUNC_5(VAR_9, VAR_2);
 return (-1);
}
