
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct bhnd_nvram_io {int dummy; } ;


 int FUNC_0 (struct bhnd_nvram_io*,size_t,void const**,int ,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct bhnd_nvram_io *VAR_0, size_t *VAR_1)
{
 const uint8_t *VAR_2, *VAR_3;
 const void *VAR_4;
 size_t VAR_5;
 int VAR_6;


 if ((VAR_6 = FUNC_0(VAR_0, *VAR_1, &VAR_4, 0, &VAR_5)))
  return (VAR_6);

 VAR_2 = VAR_4;
 VAR_3 = VAR_4;
 while ((size_t)(VAR_3 - VAR_2) < VAR_5) {
  char VAR_7 = *VAR_3;



  VAR_3++;

  if (VAR_7 == '\r') {

   if ((size_t)(VAR_3 - VAR_2) < VAR_5) {
    if (*VAR_3 == '\n')
     VAR_3++;
   }

   break;
  } else if (VAR_7 == '\n') {
   break;
  }
 }


 *VAR_1 += (VAR_3 - VAR_2);
 return (0);
}
