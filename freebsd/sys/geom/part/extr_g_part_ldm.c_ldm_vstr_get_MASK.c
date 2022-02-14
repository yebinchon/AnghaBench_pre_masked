
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t u_char ;


 int FUNC_0 (size_t*,size_t const*,size_t) ;

__attribute__((used)) static int
FUNC_1(const u_char *VAR_0, int VAR_1, u_char *VAR_2,
    size_t VAR_3, size_t VAR_4)
{
 uint8_t VAR_5;

 VAR_5 = VAR_0[VAR_1++];
 if (VAR_5 >= VAR_3 || VAR_5 + VAR_1 >= VAR_4)
  return (-1);
 FUNC_0(VAR_2, VAR_0 + VAR_1, VAR_5);
 VAR_2[VAR_5] = '\0';
 return (VAR_1 + VAR_5);
}
