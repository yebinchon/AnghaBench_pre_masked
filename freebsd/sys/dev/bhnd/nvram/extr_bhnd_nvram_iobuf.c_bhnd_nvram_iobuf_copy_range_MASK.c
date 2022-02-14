
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_iobuf {int io; int buf; } ;
struct bhnd_nvram_io {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bhnd_nvram_io*,size_t,int ,size_t) ;
 struct bhnd_nvram_io* FUNC_2 (size_t,size_t) ;

struct bhnd_nvram_io *
FUNC_3(struct bhnd_nvram_io *VAR_1, size_t VAR_2,
    size_t VAR_3)
{
 struct bhnd_nvram_io *VAR_4;
 struct bhnd_nvram_iobuf *VAR_5;
 int VAR_6;


 if (VAR_0 - VAR_3 < VAR_2)
  return (((void*)0));


 if ((VAR_4 = FUNC_2(VAR_3, VAR_3)) == ((void*)0))
  return (((void*)0));


 VAR_5 = (struct bhnd_nvram_iobuf *)VAR_4;
 if ((VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5->buf, VAR_3))) {
  FUNC_0(&VAR_5->io);
  return (((void*)0));
 }

 return (VAR_4);
}
