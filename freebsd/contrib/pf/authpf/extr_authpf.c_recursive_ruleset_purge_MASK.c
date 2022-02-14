
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_trans_e {int size; int esize; int rs_num; char* anchor; char* path; int nr; char* name; struct pfioc_trans_e* array; } ;
struct pfioc_trans {int size; int esize; int rs_num; char* anchor; char* path; int nr; char* name; struct pfioc_trans* array; } ;
struct pfioc_ruleset {int size; int esize; int rs_num; char* anchor; char* path; int nr; char* name; struct pfioc_ruleset* array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pfioc_trans_e* FUNC_0 (int,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct pfioc_trans_e*) ;
 scalar_t__ FUNC_2 (int ,int ,struct pfioc_trans_e*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_11, char *VAR_12)
{
 struct pfioc_trans_e *VAR_13 = ((void*)0);
 struct pfioc_trans *VAR_14 = ((void*)0);
 struct pfioc_ruleset *VAR_15 = ((void*)0);
 int VAR_16;



 VAR_10 = 0;
 if ((VAR_14 = FUNC_0(1, sizeof(struct pfioc_trans))) == ((void*)0))
  goto no_mem;
 if ((VAR_13 = FUNC_0(VAR_7+1,
     sizeof(struct pfioc_trans_e))) == ((void*)0))
  goto no_mem;
 VAR_14->size = VAR_7+1;
 VAR_14->esize = sizeof(struct pfioc_trans_e);
 VAR_14->array = VAR_13;
 for (VAR_16 = 0; VAR_16 < VAR_7+1; ++VAR_16) {
  VAR_13[VAR_16].rs_num = VAR_16;
  FUNC_3(VAR_13[VAR_16].anchor, sizeof(VAR_13[VAR_16].anchor), "%s/%s", VAR_11, VAR_12);
 }
 VAR_13[VAR_7].rs_num = VAR_8;
 if ((FUNC_2(VAR_9, VAR_2, VAR_14) ||
     FUNC_2(VAR_9, VAR_3, VAR_14)) &&
     VAR_10 != VAR_4)
  goto cleanup;


 if ((VAR_15 = FUNC_0(1, sizeof(struct pfioc_ruleset))) == ((void*)0))
  goto no_mem;
 FUNC_3(VAR_15->path, sizeof(VAR_15->path), "%s/%s", VAR_11, VAR_12);
 if (FUNC_2(VAR_9, VAR_1, VAR_15)) {
  if (VAR_10 != VAR_4)
   goto cleanup;
  VAR_10 = 0;
 } else {
  int VAR_17 = VAR_15->nr;

  while (VAR_17) {
   VAR_15->nr = 0;
   if (FUNC_2(VAR_9, VAR_0, VAR_15))
    goto cleanup;

   if (FUNC_5(VAR_15->path, VAR_15->name))
    goto cleanup;
   VAR_17--;
  }
 }

no_mem:
 if (VAR_10 == VAR_5)
  FUNC_4(VAR_6, "calloc failed");

cleanup:
 FUNC_1(VAR_14);
 FUNC_1(VAR_13);
 FUNC_1(VAR_15);
 return (VAR_10);
}
