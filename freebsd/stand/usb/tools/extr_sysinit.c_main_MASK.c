
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sysinit_data {scalar_t__* b_debug_info; scalar_t__* b_file_name; scalar_t__* b_global_name; scalar_t__* b_global_type; scalar_t__* b_keyword_name; void* dw_file_line; void* dw_msb_value; void* dw_lsb_value; int dw_endian32; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int (*) ()) ;
 int FUNC_1 () ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_10 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 int FUNC_6 (int,char**,char*) ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int * VAR_15 ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int,...) ;
 scalar_t__ VAR_16 ;
 void* VAR_17 ;
 int * VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_9 (struct sysinit_data**,int,int,int *) ;
 int FUNC_10 (scalar_t__,void*,int) ;
 void* FUNC_11 (void*) ;
 struct sysinit_data** VAR_20 ;
 struct sysinit_data** VAR_21 ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int * VAR_22 ;
 int VAR_23 ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_24, char **VAR_25)
{
 struct sysinit_data **VAR_26;
 int VAR_27;
 int VAR_28;
 off_t VAR_29;

 while ((VAR_27 = FUNC_6(VAR_24, VAR_25, "k:s:i:o:Rh")) != -1) {
  switch (VAR_27) {
  case 'i':
   VAR_11 = VAR_17;
   break;
  case 'o':
   VAR_18 = VAR_17;
   break;
  case 'R':
   VAR_16 = 1;
   break;
  case 'k':
   VAR_15 = VAR_17;
   break;
  case 's':
   VAR_22 = VAR_17;
   break;
  default:
   FUNC_13();
  }
 }

 if (VAR_11 == ((void*)0) || VAR_18 == ((void*)0) ||
     VAR_22 == ((void*)0) || VAR_15 == ((void*)0))
  FUNC_13();

 FUNC_0(&FUNC_1);

 FUNC_1();

 VAR_12 = FUNC_8(VAR_11, VAR_3);
 if (VAR_12 < 0)
  FUNC_4(VAR_0, "Could not open input file: %s", VAR_11);

 VAR_19 = FUNC_8(VAR_18, VAR_5 | VAR_2 | VAR_4, 0600);
 if (VAR_19 < 0)
  FUNC_4(VAR_0, "Could not open output file: %s", VAR_18);

 VAR_29 = FUNC_7(VAR_12, 0, VAR_6);

 VAR_14 = FUNC_2(VAR_29);
 VAR_13 = VAR_29;

 if (VAR_13 % (uint32_t)sizeof(struct sysinit_data)) {
  FUNC_5(VAR_0, "Input file size is not divisible by %u",
      (unsigned int)sizeof(struct sysinit_data));
 }
 VAR_29 = FUNC_7(VAR_12, 0, VAR_7);
 if (VAR_29 < 0)
  FUNC_4(VAR_0, "Could not seek to start of input file");

 if (FUNC_10(VAR_12, VAR_14, VAR_13) != VAR_13)
  FUNC_4(VAR_0, "Could not read input file");

 VAR_28 = VAR_13 / (uint32_t)sizeof(struct sysinit_data);

 VAR_20 = FUNC_2(sizeof(void *) * VAR_28);
 VAR_21 = VAR_20 + VAR_28;

 for (VAR_27 = 0; VAR_27 != VAR_28; VAR_27++)
  VAR_20[VAR_27] = &((struct sysinit_data *)VAR_14)[VAR_27];

 if (VAR_20 != VAR_21)
  VAR_10 = (*VAR_20)->dw_endian32;


 for (VAR_26 = VAR_20; VAR_26 < VAR_21; VAR_26++) {
  (*VAR_26)->dw_lsb_value = FUNC_11((*VAR_26)->dw_lsb_value);
  (*VAR_26)->dw_msb_value = FUNC_11((*VAR_26)->dw_msb_value);
  (*VAR_26)->dw_file_line = FUNC_11((*VAR_26)->dw_file_line);
 }

 if (VAR_16 == 0) {

  FUNC_9(VAR_20, VAR_28, sizeof(void *), &VAR_8);
 } else {

  FUNC_9(VAR_20, VAR_28, sizeof(void *), &VAR_9);
 }


 for (VAR_26 = VAR_20; VAR_26 < VAR_21; VAR_26++) {
  (*VAR_26)->b_keyword_name[sizeof((*VAR_26)->b_keyword_name) - 1] = 0;
  (*VAR_26)->b_global_type[sizeof((*VAR_26)->b_global_type) - 1] = 0;
  (*VAR_26)->b_global_name[sizeof((*VAR_26)->b_global_name) - 1] = 0;
  (*VAR_26)->b_file_name[sizeof((*VAR_26)->b_file_name) - 1] = 0;
  (*VAR_26)->b_debug_info[sizeof((*VAR_26)->b_debug_info) - 1] = 0;
 }

 if (FUNC_12(VAR_15, "sysinit") == 0)
  FUNC_3();
 else if (FUNC_12(VAR_15, "sysuninit") == 0)
  FUNC_3();
 else
  FUNC_5(VAR_1, "Unknown keyword '%s'", VAR_15);

 VAR_23 = 1;

 return (0);
}
