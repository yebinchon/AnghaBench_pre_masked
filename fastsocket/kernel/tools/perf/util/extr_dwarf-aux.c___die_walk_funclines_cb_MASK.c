
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __line_walk_param {scalar_t__ retval; scalar_t__ (* callback ) (char const*,int,scalar_t__,int ) ;int data; int recursive; } ;
typedef int Dwarf_Die ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (char const*,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(Dwarf_Die *VAR_4, void *VAR_5)
{
 struct __line_walk_param *VAR_6 = VAR_5;
 Dwarf_Addr VAR_7 = 0;
 const char *VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_4) == VAR_3) {
  VAR_8 = FUNC_0(VAR_4);
  VAR_9 = FUNC_1(VAR_4);
  if (VAR_8 && VAR_9 > 0 && FUNC_4(VAR_4, &VAR_7) == 0) {
   VAR_6->retval = VAR_6->callback(VAR_8, VAR_9, VAR_7, VAR_6->data);
   if (VAR_6->retval != 0)
    return VAR_1;
  }
 }
 if (!VAR_6->recursive)

  return VAR_2;

 if (VAR_7) {
  VAR_8 = FUNC_2(VAR_4);
  if (VAR_8 && FUNC_3(VAR_4, &VAR_9) == 0) {
   VAR_6->retval = VAR_6->callback(VAR_8, VAR_9, VAR_7, VAR_6->data);
   if (VAR_6->retval != 0)
    return VAR_1;
  }
 }


 return VAR_0;
}
