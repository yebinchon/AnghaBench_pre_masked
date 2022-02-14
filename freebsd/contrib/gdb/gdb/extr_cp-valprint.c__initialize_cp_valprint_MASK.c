
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_4 (void)
{
  FUNC_1
    (FUNC_0 ("static-members", VAR_0, VAR_7,
    (char *) &VAR_6,
    "Set printing of C++ static members.",
    &VAR_4),
     &VAR_5);

  VAR_6 = 1;

  FUNC_1
    (FUNC_0 ("vtbl", VAR_0, VAR_7, (char *) &VAR_8,
    "Set printing of C++ virtual function tables.",
    &VAR_4),
     &VAR_5);

  FUNC_1
    (FUNC_0 ("object", VAR_0, VAR_7, (char *) &VAR_3,
       "Set printing of object's derived type based on vtable info.",
    &VAR_4),
     &VAR_5);


  VAR_3 = 0;
  VAR_8 = 0;
  FUNC_2 (&VAR_2, 32 * sizeof (struct type *));
  FUNC_3 (&VAR_1,
         32 * sizeof (CORE_ADDR), sizeof (CORE_ADDR),
         VAR_10, VAR_9);
}
