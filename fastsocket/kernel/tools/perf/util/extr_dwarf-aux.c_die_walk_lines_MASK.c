
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __line_walk_param {int (* callback ) (char const*,int,int ,void*) ;void* data; int retval; } ;
typedef int (* line_walk_callback_t ) (char const*,int,int ,void*) ;
typedef int Dwarf_Lines ;
typedef int Dwarf_Line ;
typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int (*) (char const*,int,int ,void*),void*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,struct __line_walk_param*,int ) ;
 scalar_t__ FUNC_4 (int *,int **,size_t*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 char* FUNC_8 (int *,int *,int *) ;
 int * FUNC_9 (int *,size_t) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;

int FUNC_12(Dwarf_Die *VAR_4, line_walk_callback_t VAR_5, void *VAR_6)
{
 Dwarf_Lines *VAR_7;
 Dwarf_Line *VAR_8;
 Dwarf_Addr VAR_9;
 const char *VAR_10;
 int VAR_11, VAR_12 = 0;
 Dwarf_Die VAR_13, *VAR_14;
 size_t VAR_15, VAR_16;


 if (FUNC_10(VAR_4) != VAR_0)
  VAR_14 = FUNC_2(VAR_4, &VAR_13, ((void*)0), ((void*)0));
 else
  VAR_14 = VAR_4;
 if (!VAR_14) {
  FUNC_11("Failed to get CU from given DIE.\n");
  return -VAR_1;
 }


 if (FUNC_4(VAR_14, &VAR_7, &VAR_15) != 0) {
  FUNC_11("Failed to get source lines on this CU.\n");
  return -VAR_2;
 }
 FUNC_11("Get %zd lines from this CU\n", VAR_15);


 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  VAR_8 = FUNC_9(VAR_7, VAR_16);
  if (VAR_8 == ((void*)0) ||
      FUNC_7(VAR_8, &VAR_11) != 0 ||
      FUNC_6(VAR_8, &VAR_9) != 0) {
   FUNC_11("Failed to get line info. "
      "Possible error in debuginfo.\n");
   continue;
  }

  if (VAR_4 != VAR_14)





   if (!FUNC_5(VAR_4, VAR_9) ||
       FUNC_1(VAR_4, VAR_9, &VAR_13))
    continue;

  VAR_10 = FUNC_8(VAR_8, ((void*)0), ((void*)0));

  VAR_12 = VAR_5(VAR_10, VAR_11, VAR_9, VAR_6);
  if (VAR_12 != 0)
   return VAR_12;
 }





 if (VAR_4 != VAR_14)




  VAR_12 = FUNC_0(VAR_4, 0, VAR_5, VAR_6);
 else {
  struct __line_walk_param VAR_17 = {
   .callback = VAR_5,
   .data = VAR_6,
   .retval = 0,
  };
  FUNC_3(VAR_14, VAR_3, &VAR_17, 0);
  VAR_12 = VAR_17.retval;
 }

 return VAR_12;
}
