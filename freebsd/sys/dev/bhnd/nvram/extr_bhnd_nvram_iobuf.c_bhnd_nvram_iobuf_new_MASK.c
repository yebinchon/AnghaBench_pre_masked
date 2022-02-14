
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_iobuf {int size; int buf; } ;
struct bhnd_nvram_io {int dummy; } ;


 struct bhnd_nvram_io* FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,void const*,int ) ;

struct bhnd_nvram_io *
FUNC_2(const void *VAR_0, size_t VAR_1)
{
 struct bhnd_nvram_io *VAR_2;
 struct bhnd_nvram_iobuf *VAR_3;


 if ((VAR_2 = FUNC_0(VAR_1, VAR_1)) == ((void*)0))
  return (((void*)0));


 VAR_3 = (struct bhnd_nvram_iobuf *)VAR_2;
 FUNC_1(VAR_3->buf, VAR_0, VAR_3->size);

 return (VAR_2);
}
