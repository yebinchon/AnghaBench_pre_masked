
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_ioptr {int dummy; } ;
struct bhnd_nvram_io {int dummy; } ;


 int FUNC_0 (struct bhnd_nvram_ioptr*,size_t,void**,size_t,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct bhnd_nvram_io *VAR_0, size_t VAR_1,
     const void **VAR_2, size_t VAR_3, size_t *VAR_4)
{
 struct bhnd_nvram_ioptr *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_5 = (struct bhnd_nvram_ioptr *) VAR_0;


 VAR_7 = FUNC_0(VAR_5, VAR_1, &VAR_6, VAR_3, VAR_4);
 if (VAR_7)
  return (VAR_7);

 *VAR_2 = VAR_6;

 return (0);
}
