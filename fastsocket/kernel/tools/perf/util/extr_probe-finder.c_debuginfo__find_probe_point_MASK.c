
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_point {int line; unsigned long offset; int * function; int * file; } ;
struct debuginfo {unsigned long bias; int dbg; } ;
typedef int Dwarf_Die ;
typedef unsigned long Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long,char const**,int*) ;
 scalar_t__ FUNC_1 (int *,unsigned long,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned long,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long,int *) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 char* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,unsigned long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,unsigned long) ;
 void* FUNC_10 (char const*) ;

int FUNC_11(struct debuginfo *VAR_2, unsigned long VAR_3,
    struct perf_probe_point *VAR_4)
{
 Dwarf_Die VAR_5, VAR_6, VAR_7;
 Dwarf_Addr VAR_8, VAR_9;
 const char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12;
 int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;


 VAR_3 += VAR_2->bias;


 if (!FUNC_4(VAR_2->dbg, (Dwarf_Addr)VAR_3 - VAR_2->bias, &VAR_5)) {
  FUNC_9("Failed to find debug information for address %lx\n",
      VAR_3);
  VAR_15 = -VAR_0;
  goto end;
 }


 FUNC_0(&VAR_5, VAR_3, &VAR_10, &VAR_14);



 if (FUNC_2(&VAR_5, (Dwarf_Addr)VAR_3, &VAR_6)) {

  VAR_12 = FUNC_6(&VAR_6);
  if (!VAR_12 ||
      FUNC_7(&VAR_6, &VAR_9) != 0 ||
      FUNC_5(&VAR_6, &VAR_13) != 0)
   goto post;
  VAR_11 = VAR_12;

  if (VAR_3 == (unsigned long)VAR_9)

   VAR_14 = VAR_13;
  else if (FUNC_1(&VAR_6, (Dwarf_Addr)VAR_3,
          &VAR_7)) {
   if (FUNC_7(&VAR_7, &VAR_8) == 0 &&
       VAR_8 == VAR_3)





    VAR_14 = FUNC_3(&VAR_7);
   else {






    VAR_12 = FUNC_6(&VAR_7);
    if (VAR_12 &&
        FUNC_5(&VAR_6, &VAR_13) == 0)
     VAR_11 = VAR_12;
   }
  }
 }

post:

 if (VAR_14)
  VAR_4->line = VAR_14 - VAR_13;
 else if (VAR_11)
  VAR_4->offset = VAR_3 - (unsigned long)VAR_9;


 if (VAR_11) {
  VAR_4->function = FUNC_10(VAR_11);
  if (VAR_4->function == ((void*)0)) {
   VAR_15 = -VAR_1;
   goto end;
  }
 }
 if (VAR_10) {
  VAR_4->file = FUNC_10(VAR_10);
  if (VAR_4->file == ((void*)0)) {
   if (VAR_4->function) {
    FUNC_8(VAR_4->function);
    VAR_4->function = ((void*)0);
   }
   VAR_15 = -VAR_1;
   goto end;
  }
 }
end:
 if (VAR_15 == 0 && (VAR_10 || VAR_11))
  VAR_15 = 1;
 return VAR_15;
}
