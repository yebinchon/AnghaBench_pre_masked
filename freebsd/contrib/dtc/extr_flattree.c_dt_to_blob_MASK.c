
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct version_info {int version; int hdr_size; } ;
struct fdt_reserve_entry {int dummy; } ;
struct fdt_header {int totalsize; } ;
struct dt_info {int boot_cpuid_phys; int reservelist; int dt; } ;
struct data {int len; int val; } ;
typedef int FILE ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct version_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct data*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 struct data FUNC_4 (struct data,int) ;
 struct data FUNC_5 (struct data,struct fdt_header*,int ) ;
 struct data FUNC_6 (struct data,int) ;
 int FUNC_7 (struct data) ;
 struct data FUNC_8 (struct data,struct data) ;
 int FUNC_9 (char*,...) ;
 struct data VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 struct data FUNC_12 (int ,struct version_info*) ;
 int FUNC_13 (int ,int *,struct data*,struct data*,struct version_info*) ;
 int FUNC_14 (int ,char*,int,scalar_t__) ;
 int FUNC_15 (int ,int ,int,int *) ;
 int FUNC_16 (struct fdt_header*,struct version_info*,int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (int ) ;
 struct version_info* VAR_9 ;

void FUNC_18(FILE *VAR_10, struct dt_info *VAR_11, int VAR_12)
{
 struct version_info *VAR_13 = ((void*)0);
 int VAR_14;
 struct data VAR_15 = VAR_3;
 struct data VAR_16 = VAR_3;
 struct data VAR_17 = VAR_3;
 struct data VAR_18 = VAR_3;
 struct fdt_header VAR_19;
 int VAR_20 = 0;

 for (VAR_14 = 0; VAR_14 < FUNC_1(VAR_9); VAR_14++) {
  if (VAR_9[VAR_14].version == VAR_12)
   VAR_13 = &VAR_9[VAR_14];
 }
 if (!VAR_13)
  FUNC_9("Unknown device tree blob version %d\n", VAR_12);

 FUNC_13(VAR_11->dt, &VAR_2, &VAR_17, &VAR_18, VAR_13);
 FUNC_2(&VAR_17, VAR_0);

 VAR_16 = FUNC_12(VAR_11->reservelist, VAR_13);


 FUNC_16(&VAR_19, VAR_13, VAR_16.len, VAR_17.len, VAR_18.len,
   VAR_11->boot_cpuid_phys);




 if (VAR_5 > 0) {
  VAR_20 = VAR_5 - FUNC_10(VAR_19.totalsize);
  if (VAR_20 < 0) {
   VAR_20 = 0;
   if (VAR_7 < 1)
    FUNC_14(VAR_8,
     "Warning: blob size %d >= minimum size %d\n",
     FUNC_10(VAR_19.totalsize), VAR_5);
  }
 }

 if (VAR_6 > 0)
  VAR_20 = VAR_6;

 if (VAR_1 > 0)
  VAR_20 = FUNC_0(FUNC_10(VAR_19.totalsize) + VAR_20, VAR_1)
   - FUNC_10(VAR_19.totalsize);

 if (VAR_20 > 0) {
  int VAR_21 = FUNC_10(VAR_19.totalsize);
  VAR_21 += VAR_20;
  VAR_19.totalsize = FUNC_3(VAR_21);
 }






 VAR_15 = FUNC_5(VAR_15, &VAR_19, VAR_13->hdr_size);
 VAR_15 = FUNC_4(VAR_15, 8);
 VAR_15 = FUNC_8(VAR_15, VAR_16);
 VAR_15 = FUNC_6(VAR_15, sizeof(struct fdt_reserve_entry));
 VAR_15 = FUNC_8(VAR_15, VAR_17);
 VAR_15 = FUNC_8(VAR_15, VAR_18);




 if (VAR_20 > 0)
  VAR_15 = FUNC_6(VAR_15, VAR_20);

 if (FUNC_15(VAR_15.val, VAR_15.len, 1, VAR_10) != 1) {
  if (FUNC_11(VAR_10))
   FUNC_9("Error writing device tree blob: %s\n",
       FUNC_17(VAR_4));
  else
   FUNC_9("Short write on device tree blob\n");
 }





 FUNC_7(VAR_15);
}
