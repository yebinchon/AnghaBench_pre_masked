
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct version_info {int version; int hdr_size; } ;
struct fdt_reserve_entry {int dummy; } ;
struct fdt_header {int totalsize; } ;
struct data {int len; int val; } ;
struct boot_info {int boot_cpuid_phys; int reservelist; int dt; } ;
typedef int FILE ;


 int FUNC_0 (struct version_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct data*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 struct data FUNC_3 (struct data,int) ;
 struct data FUNC_4 (struct data,struct fdt_header*,int ) ;
 struct data FUNC_5 (struct data,int) ;
 int FUNC_6 (struct data) ;
 struct data FUNC_7 (struct data,struct data) ;
 int FUNC_8 (char*,int) ;
 struct data VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;
 struct data FUNC_11 (int ,struct version_info*) ;
 int FUNC_12 (int ,int *,struct data*,struct data*,struct version_info*) ;
 int FUNC_13 (int ,char*,int,scalar_t__) ;
 int FUNC_14 (int ,int ,int,int *) ;
 int FUNC_15 (struct fdt_header*,struct version_info*,int ,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (int ) ;
 struct version_info* VAR_8 ;

void FUNC_17(FILE *VAR_9, struct boot_info *VAR_10, int VAR_11)
{
 struct version_info *VAR_12 = ((void*)0);
 int VAR_13;
 struct data VAR_14 = VAR_2;
 struct data VAR_15 = VAR_2;
 struct data VAR_16 = VAR_2;
 struct data VAR_17 = VAR_2;
 struct fdt_header VAR_18;
 int VAR_19 = 0;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {
  if (VAR_8[VAR_13].version == VAR_11)
   VAR_12 = &VAR_8[VAR_13];
 }
 if (!VAR_12)
  FUNC_8("Unknown device tree blob version %d\n", VAR_11);

 FUNC_12(VAR_10->dt, &VAR_1, &VAR_16, &VAR_17, VAR_12);
 FUNC_1(&VAR_16, VAR_0);

 VAR_15 = FUNC_11(VAR_10->reservelist, VAR_12);


 FUNC_15(&VAR_18, VAR_12, VAR_15.len, VAR_16.len, VAR_17.len,
   VAR_10->boot_cpuid_phys);




 if (VAR_4 > 0) {
  VAR_19 = VAR_4 - FUNC_9(VAR_18.totalsize);
  if ((VAR_19 < 0) && (VAR_6 < 1))
   FUNC_13(VAR_7,
    "Warning: blob size %d >= minimum size %d\n",
    FUNC_9(VAR_18.totalsize), VAR_4);
 }

 if (VAR_5 > 0)
  VAR_19 = VAR_5;

 if (VAR_19 > 0) {
  int VAR_20 = FUNC_9(VAR_18.totalsize);
  VAR_20 += VAR_19;
  VAR_18.totalsize = FUNC_2(VAR_20);
 }






 VAR_14 = FUNC_4(VAR_14, &VAR_18, VAR_12->hdr_size);
 VAR_14 = FUNC_3(VAR_14, 8);
 VAR_14 = FUNC_7(VAR_14, VAR_15);
 VAR_14 = FUNC_5(VAR_14, sizeof(struct fdt_reserve_entry));
 VAR_14 = FUNC_7(VAR_14, VAR_16);
 VAR_14 = FUNC_7(VAR_14, VAR_17);




 if (VAR_19 > 0)
  VAR_14 = FUNC_5(VAR_14, VAR_19);

 FUNC_14(VAR_14.val, VAR_14.len, 1, VAR_9);

 if (FUNC_10(VAR_9))
  FUNC_8("Error writing device tree blob: %s\n", FUNC_16(VAR_3));





 FUNC_6(VAR_14);
}
