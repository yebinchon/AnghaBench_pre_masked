
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bhnd_nvram_io {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (struct bhnd_nvram_io*) ;
 int FUNC_2 (struct bhnd_nvram_io*,size_t*,int *,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct bhnd_nvram_io *VAR_1, size_t *VAR_2)
{
 size_t VAR_3;
 uint8_t VAR_4;
 int VAR_5;


 VAR_3 = 0x0;
 *VAR_2 = 0x0;


 do {
  VAR_5 = FUNC_2(VAR_1, &VAR_3, ((void*)0), &VAR_4);
  if (VAR_5)
   return (VAR_5);
 } while (VAR_4 != VAR_0);


 FUNC_0(VAR_3 <= FUNC_1(VAR_1),
     ("parse returned invalid EOF offset"));

 *VAR_2 = VAR_3;
 return (0);
}
