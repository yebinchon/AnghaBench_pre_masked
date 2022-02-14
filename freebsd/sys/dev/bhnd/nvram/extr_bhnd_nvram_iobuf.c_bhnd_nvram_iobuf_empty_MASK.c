
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int * iops; } ;
struct bhnd_nvram_iobuf {size_t size; size_t capacity; struct bhnd_nvram_io io; int * buf; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_nvram_iobuf*) ;
 void* FUNC_1 (size_t) ;
 int VAR_1 ;

struct bhnd_nvram_io *
FUNC_2(size_t VAR_2, size_t VAR_3)
{
 struct bhnd_nvram_iobuf *VAR_4;
 size_t VAR_5;
 bool VAR_6;


 if (VAR_2 > VAR_3)
  return (((void*)0));


 if (VAR_0 - sizeof(*VAR_4) < VAR_3) {
  VAR_6 = 0;
  VAR_5 = sizeof(*VAR_4);
 } else {
  VAR_6 = 1;
  VAR_5 = sizeof(*VAR_4) + VAR_3;
 }


 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_4->io.iops = &VAR_1;
 VAR_4->buf = ((void*)0);
 VAR_4->size = VAR_2;
 VAR_4->capacity = VAR_3;



 if (VAR_6)
  VAR_4->buf = &VAR_4->data;
 else
  VAR_4->buf = FUNC_1(VAR_4->capacity);


 if (VAR_4->buf == ((void*)0)) {
  FUNC_0(VAR_4);
  return (((void*)0));
 }

 return (&VAR_4->io);
}
