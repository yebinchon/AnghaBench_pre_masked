
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_iobuf {int dummy; } ;
struct bhnd_nvram_io {int dummy; } ;


 int FUNC_0 (struct bhnd_nvram_iobuf*,size_t,void**,size_t,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct bhnd_nvram_io *VAR_0, size_t VAR_1,
    void **VAR_2, size_t VAR_3, size_t *VAR_4)
{
 struct bhnd_nvram_iobuf *VAR_5;

 VAR_5 = (struct bhnd_nvram_iobuf *) VAR_0;


 return (FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4));
}
