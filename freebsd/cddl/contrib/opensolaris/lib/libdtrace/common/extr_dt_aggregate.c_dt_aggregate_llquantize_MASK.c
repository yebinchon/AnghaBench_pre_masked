
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;



__attribute__((used)) static void
FUNC_0(int64_t *VAR_0, int64_t *VAR_1, size_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_2 / sizeof (int64_t); VAR_3++)
  VAR_0[VAR_3] = VAR_0[VAR_3] + VAR_1[VAR_3];
}
