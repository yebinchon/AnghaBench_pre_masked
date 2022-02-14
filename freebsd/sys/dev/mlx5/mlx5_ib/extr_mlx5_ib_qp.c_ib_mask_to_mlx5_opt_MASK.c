
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8 * sizeof(int); VAR_2++) {
  if ((1 << VAR_2) & VAR_0)
   VAR_1 |= FUNC_0(1 << VAR_2);
 }

 return VAR_1;
}
