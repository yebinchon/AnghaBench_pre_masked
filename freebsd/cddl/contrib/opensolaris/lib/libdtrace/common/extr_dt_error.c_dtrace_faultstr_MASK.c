
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_hdl_t ;
const char *
FUNC_0(dtrace_hdl_t *VAR_0, int VAR_1)
{
 int VAR_2;

 static const struct {
  int code;
  const char *str;
 } VAR_3[] = {
  { 137, "invalid address" },
  { 136, "invalid alignment" },
  { 133, "illegal operation" },
  { 134, "divide-by-zero" },
  { 130, "out of scratch space" },
  { 132, "invalid kernel access" },
  { 128, "invalid user access" },
  { 129, "tuple stack overflow" },
  { 135, "bad stack" },
  { 131, "library-level fault" },
  { 0, ((void*)0) }
 };

 for (VAR_2 = 0; VAR_3[VAR_2].str != ((void*)0); VAR_2++) {
  if (VAR_3[VAR_2].code == VAR_1)
   return (VAR_3[VAR_2].str);
 }

 return ("unknown fault");
}
