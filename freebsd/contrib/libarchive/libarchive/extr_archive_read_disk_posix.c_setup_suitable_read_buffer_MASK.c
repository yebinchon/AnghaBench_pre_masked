
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {struct filesystem* current_filesystem; } ;
struct filesystem {int xfer_align; int max_xfer_size; long incr_xfer_size; long min_xfer_size; size_t buff_size; int * allocation_ptr; int * buff; } ;
struct TYPE_2__ {int state; } ;
struct archive_read_disk {TYPE_1__ archive; struct tree* tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int * FUNC_1 (size_t) ;

__attribute__((used)) static int
FUNC_2(struct archive_read_disk *VAR_4)
{
 struct tree *VAR_5 = VAR_4->tree;
 struct filesystem *VAR_6 = VAR_5->current_filesystem;
 size_t VAR_7;
 size_t VAR_8;

 if (VAR_6->allocation_ptr == ((void*)0)) {



  long VAR_9 = (VAR_6->xfer_align == -1)?4096:VAR_6->xfer_align;

  if (VAR_6->max_xfer_size != -1)
   VAR_7 = VAR_6->max_xfer_size + VAR_9;
  else {
   long VAR_10 = VAR_6->incr_xfer_size;


   if (VAR_10 < 0)
    VAR_10 = VAR_6->min_xfer_size;
   if (VAR_6->min_xfer_size < 0) {
    VAR_10 = VAR_9;
    VAR_7 = VAR_9;
   } else
    VAR_7 = VAR_6->min_xfer_size;



   while (VAR_7 < 1024*64)
    VAR_7 += VAR_10;


   VAR_7 += VAR_9;
  }
  VAR_6->allocation_ptr = FUNC_1(VAR_7);
  if (VAR_6->allocation_ptr == ((void*)0)) {
   FUNC_0(&VAR_4->archive, VAR_3,
       "Couldn't allocate memory");
   VAR_4->archive.state = VAR_2;
   return (VAR_0);
  }




  VAR_8 = (uintptr_t)VAR_6->allocation_ptr;
  VAR_8 %= VAR_9;
  if (VAR_8 > 0)
   VAR_8 = VAR_9 - VAR_8;





  VAR_6->buff = VAR_6->allocation_ptr + VAR_8;
  VAR_6->buff_size = VAR_7 - VAR_9;
 }
 return (VAR_1);
}
