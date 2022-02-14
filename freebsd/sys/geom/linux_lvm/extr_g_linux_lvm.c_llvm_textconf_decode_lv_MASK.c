
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_llvm_vg {int vg_lvs; } ;
struct g_llvm_segment {scalar_t__ lv_sgcount; scalar_t__ lv_numsegs; int lv_segs; int lv_uuid; int lv_name; void* lv_firstsg; struct g_llvm_vg* lv_vg; } ;
struct g_llvm_lv {scalar_t__ lv_sgcount; scalar_t__ lv_numsegs; int lv_segs; int lv_uuid; int lv_name; void* lv_firstsg; struct g_llvm_vg* lv_vg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,scalar_t__) ;
 int FUNC_1 (char*,char*,char*,int ,int) ;
 int FUNC_2 (int,char*,int ,int ) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct g_llvm_segment*,int ) ;
 int FUNC_6 (struct g_llvm_segment*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (struct g_llvm_segment*,int ) ;
 size_t FUNC_9 (int ,char*) ;
 int FUNC_10 (char**,char*,struct g_llvm_segment*) ;
 int VAR_5 ;
 struct g_llvm_segment* FUNC_11 (int,int ,int) ;
 int VAR_6 ;
 char* FUNC_12 (char**,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;

__attribute__((used)) static int
FUNC_14(char **VAR_7, char *VAR_8, struct g_llvm_vg *VAR_9)
{
 struct g_llvm_lv *VAR_10;
 struct g_llvm_segment *VAR_11;
 char *VAR_12;
 size_t VAR_13;

 if (*VAR_7 == ((void*)0) || **VAR_7 == '\0')
  return (VAR_0);

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_2, VAR_3|VAR_4);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 VAR_10->lv_vg = VAR_9;
 FUNC_4(&VAR_10->lv_segs);

 if (VAR_8 == ((void*)0))
  goto bad;
 VAR_13 = FUNC_9(VAR_10->lv_name, VAR_8);
 if (VAR_13 == 0)
  goto bad;

 while ((VAR_8 = FUNC_12(VAR_7, "\n")) != ((void*)0)) {
  if (FUNC_13(VAR_8, "{")) {
   if (FUNC_13(VAR_8, "segment")) {
    FUNC_10(VAR_7, VAR_8, VAR_10);
    continue;
   } else

    goto bad;
  }

  if (FUNC_13(VAR_8, "}"))
   break;


  if (FUNC_13(VAR_8, "=")) {
   FUNC_7(VAR_12, VAR_8, "=");
   FUNC_1("id", VAR_12, VAR_8, VAR_10->lv_uuid, sizeof(VAR_10->lv_uuid));
   FUNC_0("segment_count", VAR_12, VAR_8, VAR_10->lv_sgcount);
   continue;
  }
 }
 if (VAR_8 == ((void*)0))
  goto bad;
 if (VAR_10->lv_sgcount == 0 || VAR_10->lv_sgcount != VAR_10->lv_numsegs)

  goto bad;


 VAR_10->lv_firstsg = FUNC_3(&VAR_10->lv_segs);
 FUNC_5(&VAR_9->vg_lvs, VAR_10, VAR_5);
 FUNC_2(3, "lv: name=%s uuid=%s", VAR_10->lv_name, VAR_10->lv_uuid);

 return (0);
bad:
 while ((VAR_11 = FUNC_3(&VAR_10->lv_segs)) != ((void*)0)) {
  FUNC_6(VAR_11, VAR_6);
  FUNC_8(VAR_11, VAR_2);
 }
 FUNC_8(VAR_10, VAR_2);
 return (-1);
}
