
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_point {unsigned long offset; int retprobe; int * symbol; } ;
typedef int Dwarf_Die ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(Dwarf_Die *VAR_3, Dwarf_Addr VAR_4,
      bool VAR_5, struct probe_trace_point *VAR_6)
{
 Dwarf_Addr VAR_7, VAR_8;
 const char *VAR_9;


 VAR_9 = FUNC_0(VAR_3);
 if (VAR_9) {
  if (FUNC_1(VAR_3, &VAR_7) != 0) {
   FUNC_3("Failed to get entry address of %s\n",
       FUNC_0(VAR_3));
   return -VAR_1;
  }
  if (FUNC_2(VAR_3, &VAR_8) != 0) {
   FUNC_3("Failed to get end address of %s\n",
       FUNC_0(VAR_3));
   return -VAR_1;
  }
  if (VAR_4 > VAR_8) {
   FUNC_3("Offset specified is greater than size of %s\n",
       FUNC_0(VAR_3));
   return -VAR_0;
  }
  VAR_6->symbol = FUNC_4(VAR_9);
  if (VAR_6->symbol == ((void*)0))
   return -VAR_2;
  VAR_6->offset = (unsigned long)(VAR_4 - VAR_7);
 } else

  VAR_6->offset = (unsigned long)VAR_4;


 if (VAR_5) {
  if (VAR_7 != VAR_4) {
   FUNC_3("Return probe must be on the head of"
       " a real function.\n");
   return -VAR_0;
  }
  VAR_6->retprobe = 1;
 }

 return 0;
}
