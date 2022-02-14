
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_ioptr {int flags; } ;
struct bhnd_nvram_io {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bhnd_nvram_ioptr*,size_t,void**,size_t,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct bhnd_nvram_io *VAR_2, size_t VAR_3,
      void **VAR_4, size_t VAR_5, size_t *VAR_6)
{
 struct bhnd_nvram_ioptr *VAR_7;

 VAR_7 = (struct bhnd_nvram_ioptr *) VAR_2;


 if (!(VAR_7->flags & VAR_0))
  return (VAR_1);


 return (FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6));
}
