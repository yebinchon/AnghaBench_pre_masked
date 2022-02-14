
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtree {scalar_t__ fd; void* buff; int buffsize; scalar_t__ offset; scalar_t__ cur_size; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef size_t ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 size_t FUNC_2 (scalar_t__,void*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_6, const void **VAR_7, size_t *VAR_8,
    int64_t *VAR_9)
{
 size_t VAR_10;
 ssize_t VAR_11;
 struct mtree *VAR_12;

 VAR_12 = (struct mtree *)(VAR_6->format->data);
 if (VAR_12->fd < 0) {
  *VAR_7 = ((void*)0);
  *VAR_9 = 0;
  *VAR_8 = 0;
  return (VAR_0);
 }
 if (VAR_12->buff == ((void*)0)) {
  VAR_12->buffsize = 64 * 1024;
  VAR_12->buff = FUNC_1(VAR_12->buffsize);
  if (VAR_12->buff == ((void*)0)) {
   FUNC_0(&VAR_6->archive, VAR_4,
       "Can't allocate memory");
   return (VAR_1);
  }
 }

 *VAR_7 = VAR_12->buff;
 *VAR_9 = VAR_12->offset;
 if ((int64_t)VAR_12->buffsize > VAR_12->cur_size - VAR_12->offset)
  VAR_10 = (size_t)(VAR_12->cur_size - VAR_12->offset);
 else
  VAR_10 = VAR_12->buffsize;
 VAR_11 = FUNC_2(VAR_12->fd, VAR_12->buff, VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_6->archive, VAR_5, "Can't read");
  return (VAR_3);
 }
 if (VAR_11 == 0) {
  *VAR_8 = 0;
  return (VAR_0);
 }
 VAR_12->offset += VAR_11;
 *VAR_8 = VAR_11;
 return (VAR_2);
}
