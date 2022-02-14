
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_llvm_segment {int sg_start; int sg_count; int sg_end; int sg_pvstart; int sg_pvname; } ;
struct g_llvm_lv {int lv_extentcount; int lv_segs; int lv_numsegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,int) ;
 int FUNC_1 (int *,struct g_llvm_segment*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (struct g_llvm_segment*,int ) ;
 struct g_llvm_segment* FUNC_4 (int,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int) ;
 char* FUNC_7 (char**,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_10(char **VAR_6, char *VAR_7, struct g_llvm_lv *VAR_8)
{
 struct g_llvm_segment *VAR_9;
 char *VAR_10;
 int VAR_11 = 0;

 if (*VAR_6 == ((void*)0) || **VAR_6 == '\0')
  return (VAR_0);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2, VAR_3|VAR_4);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 while ((VAR_7 = FUNC_7(VAR_6, "\n")) != ((void*)0)) {

  if (FUNC_8(VAR_7, "stripe_count")) {
   FUNC_2(VAR_10, VAR_7, "=");
   FUNC_0("stripe_count", VAR_10, VAR_7, VAR_11);
   if (VAR_11 != 1)
    goto bad;
  }

  if (FUNC_8(VAR_7, "{"))
   goto bad;

  if (FUNC_8(VAR_7, "}"))
   break;

  if (FUNC_5(VAR_7, "stripes = [") == 0) {
   VAR_7 = FUNC_7(VAR_6, "\n");
   if (VAR_7 == ((void*)0))
    goto bad;

   FUNC_7(&VAR_7, "\"");
   if (VAR_7 == ((void*)0))
    goto bad;
   VAR_10 = FUNC_7(&VAR_7, "\"");
   if (VAR_7 == ((void*)0))
    goto bad;
   FUNC_6(VAR_9->sg_pvname, VAR_10, sizeof(VAR_9->sg_pvname));
   if (*VAR_7 != ',')
    goto bad;
   VAR_7++;

   VAR_9->sg_pvstart = FUNC_9(VAR_7, &VAR_10, 10);
   if (VAR_10 == VAR_7)

    goto bad;

   continue;
  }


  if (FUNC_8(VAR_7, "=")) {
   FUNC_2(VAR_10, VAR_7, "=");
   FUNC_0("start_extent", VAR_10, VAR_7, VAR_9->sg_start);
   FUNC_0("extent_count", VAR_10, VAR_7, VAR_9->sg_count);
   continue;
  }
 }
 if (VAR_7 == ((void*)0))
  goto bad;

 if (VAR_11 != 1 || VAR_9->sg_count == 0)
  goto bad;

 VAR_9->sg_end = VAR_9->sg_start + VAR_9->sg_count - 1;
 VAR_8->lv_numsegs++;
 VAR_8->lv_extentcount += VAR_9->sg_count;
 FUNC_1(&VAR_8->lv_segs, VAR_9, VAR_5);

 return (0);
bad:
 FUNC_3(VAR_9, VAR_2);
 return (-1);
}
