
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __line_walk_param {int recursive; scalar_t__ (* callback ) (char const*,int,int ,void*) ;void* data; scalar_t__ retval; } ;
typedef scalar_t__ (* line_walk_callback_t ) (char const*,int,int ,void*) ;
typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct __line_walk_param*,int *) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(Dwarf_Die *VAR_1, bool VAR_2,
    line_walk_callback_t VAR_3, void *VAR_4)
{
 struct __line_walk_param VAR_5 = {
  .recursive = VAR_2,
  .callback = VAR_3,
  .data = VAR_4,
  .retval = 0,
 };
 Dwarf_Die VAR_6;
 Dwarf_Addr VAR_7;
 const char *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_1(VAR_1);
 if (VAR_8 && FUNC_2(VAR_1, &VAR_9) == 0 &&
     FUNC_3(VAR_1, &VAR_7) == 0) {
  VAR_5.retval = VAR_3(VAR_8, VAR_9, VAR_7, VAR_4);
  if (VAR_5.retval != 0)
   goto done;
 }
 FUNC_0(VAR_1, VAR_0, &VAR_5, &VAR_6);
done:
 return VAR_5.retval;
}
