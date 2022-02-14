
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsrec_t ;



__attribute__((used)) static void
FUNC_0(int (*VAR_0)(lsrec_t *, lsrec_t *), lsrec_t **VAR_1, lsrec_t **VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 / 2;
 int VAR_5, VAR_6;

 if (VAR_4 > 1)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
 if (VAR_3 - VAR_4 > 1)
  FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_2 + VAR_4, VAR_3 - VAR_4);
 for (VAR_5 = VAR_4; VAR_5 > 0; VAR_5--)
  VAR_2[VAR_5 - 1] = VAR_1[VAR_5 - 1];
 for (VAR_6 = VAR_4 - 1; VAR_6 < VAR_3 - 1; VAR_6++)
  VAR_2[VAR_3 + VAR_4 - VAR_6 - 2] = VAR_1[VAR_6 + 1];
 while (VAR_5 < VAR_6)
  *VAR_1++ = VAR_0(VAR_2[VAR_5], VAR_2[VAR_6]) < 0 ? VAR_2[VAR_5++] : VAR_2[VAR_6--];
 *VAR_1 = VAR_2[VAR_5];
}
