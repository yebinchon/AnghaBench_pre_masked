
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int fsid_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,int *,int) ;

int
FUNC_3(const char *VAR_0, fsid_t *VAR_1)
{
 char VAR_2[3];
 int VAR_3;

 if (FUNC_1(VAR_0) != sizeof(*VAR_1) * 2)
  return (-1);
 VAR_2[2] = '\0';
 for (VAR_3 = 0; VAR_3 < (int)sizeof(*VAR_1); VAR_3++) {
  VAR_2[0] = VAR_0[VAR_3 * 2];
  VAR_2[1] = VAR_0[VAR_3 * 2 + 1];
  if (!FUNC_0(VAR_2[0]) || !FUNC_0(VAR_2[1]))
   return (-1);
  ((u_char *)VAR_1)[VAR_3] = FUNC_2(VAR_2, ((void*)0), 16);
 }
 return (0);
}
