
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct bhnd_nvram_io {int dummy; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (struct bhnd_nvram_io*,size_t,void const**,int ,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct bhnd_nvram_io *VAR_0, size_t VAR_1,
    size_t *VAR_2, size_t *VAR_3)
{
 const uint8_t *VAR_4, *VAR_5;
 const void *VAR_6;
 size_t VAR_7;
 int VAR_8;


 if ((VAR_8 = FUNC_1(VAR_0, VAR_1, &VAR_6, 0, &VAR_7)))
  return (VAR_8);


 VAR_5 = VAR_6;
 VAR_4 = VAR_6;
 while ((size_t)(VAR_5 - VAR_4) < VAR_7) {
  if (*VAR_5 == '#' || *VAR_5 == '\n' || *VAR_5 == '\r')
   break;

  VAR_5++;
 }



 *VAR_2 = VAR_5 - VAR_4;
 *VAR_3 = *VAR_2;

 for (size_t VAR_9 = 0; VAR_9 < *VAR_2; VAR_9++) {
  char VAR_10 = VAR_4[*VAR_2 - VAR_9 - 1];
  if (!FUNC_0(VAR_10))
   break;

  *VAR_3 -= 1;
 }

 return (0);
}
