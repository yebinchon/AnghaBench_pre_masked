
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_iobuf {size_t capacity; size_t size; } ;
struct bhnd_nvram_io {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct bhnd_nvram_io *VAR_1, size_t VAR_2)
{
 struct bhnd_nvram_iobuf *VAR_3 = (struct bhnd_nvram_iobuf *)VAR_1;


 if (VAR_2 > VAR_3->capacity)
  return (VAR_0);

 VAR_3->size = VAR_2;
 return (0);
}
