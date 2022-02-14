
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_iobuf {size_t size; } ;
struct bhnd_nvram_io {int dummy; } ;



__attribute__((used)) static size_t
FUNC_0(struct bhnd_nvram_io *VAR_0)
{
 struct bhnd_nvram_iobuf *VAR_1 = (struct bhnd_nvram_iobuf *)VAR_0;
 return (VAR_1->size);
}
