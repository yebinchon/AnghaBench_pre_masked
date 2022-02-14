
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int deprecated_sizeof_call_dummy_words; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2 (struct gdbarch *VAR_2)
{
  FUNC_1 (VAR_2 != ((void*)0));

  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_sizeof_call_dummy_words called\n");
  return VAR_2->deprecated_sizeof_call_dummy_words;
}
