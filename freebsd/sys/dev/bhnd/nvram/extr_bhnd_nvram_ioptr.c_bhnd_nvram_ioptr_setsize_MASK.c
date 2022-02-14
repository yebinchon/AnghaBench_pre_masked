
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_ioptr {int flags; size_t capacity; size_t size; } ;
struct bhnd_nvram_io {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct bhnd_nvram_io *VAR_3, size_t VAR_4)
{
 struct bhnd_nvram_ioptr *VAR_5 = (struct bhnd_nvram_ioptr *)VAR_3;


 if (!(VAR_5->flags & VAR_0))
  return (VAR_1);


 if (VAR_4 > VAR_5->capacity)
  return (VAR_2);

 VAR_5->size = VAR_4;
 return (0);
}
