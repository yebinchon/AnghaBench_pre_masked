
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_hwfn {int p_dev; } ;
struct ecore_bmap {int max_count; int name; int bitmap; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,char*,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_5 ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_6,
        struct ecore_bmap *VAR_7,
        u32 VAR_8,
        char *VAR_9)
{
 u32 VAR_10;

 FUNC_2(VAR_6, VAR_0, "max_count = %08x\n", VAR_8);

 VAR_7->max_count = VAR_8;

 if (!VAR_8) {
  VAR_7->bitmap = VAR_4;
  return VAR_2;
 }

 VAR_10 = sizeof(unsigned long) *
  FUNC_0(VAR_8, (sizeof(unsigned long) * 8));

 VAR_7->bitmap = FUNC_4(VAR_6->p_dev, VAR_3, VAR_10);
 if (!VAR_7->bitmap)
 {
  FUNC_1(VAR_6, 0,
     "ecore bmap alloc failed: cannot allocate memory (bitmap). rc = %d\n",
     VAR_1);
  return VAR_1;
 }

 FUNC_3(VAR_7->name, VAR_5, "%s", VAR_9);

 FUNC_2(VAR_6, VAR_0, "ECORE_SUCCESS\n");
 return VAR_2;
}
