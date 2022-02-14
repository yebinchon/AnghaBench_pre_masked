
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct env_var {int ev_name; } ;
struct TYPE_2__ {int c_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (void const*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (int ,int,void const*,int *,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct env_var *VAR_7, int VAR_8, const void *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11;

 if (VAR_9 == ((void*)0) || (VAR_10 = FUNC_0(VAR_9)) <= 0) {
  FUNC_3("Invalid pcidev\n");
  return (VAR_0);
 }
 if ((VAR_6.c_flags & (VAR_2 | VAR_3)) != 0 &&
     VAR_5 != VAR_10) {
  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11 != VAR_1)
   return (VAR_11);
 }
 FUNC_2(VAR_7->ev_name, VAR_8 | VAR_4, VAR_9, ((void*)0), ((void*)0));
 return (VAR_1);
}
