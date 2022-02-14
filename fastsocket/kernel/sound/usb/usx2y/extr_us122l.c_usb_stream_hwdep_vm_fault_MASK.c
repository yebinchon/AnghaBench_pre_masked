
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_fault {unsigned long pgoff; struct page* page; } ;
struct vm_area_struct {struct us122l* vm_private_data; } ;
struct usb_stream {int write_size; int read_size; } ;
struct TYPE_2__ {void* write_page; struct usb_stream* s; } ;
struct us122l {int mutex; TYPE_1__ sk; } ;
struct page {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct page* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_2,
         struct vm_fault *VAR_3)
{
 unsigned long VAR_4;
 struct page *VAR_5;
 void *VAR_6;
 struct us122l *VAR_7 = VAR_2->vm_private_data;
 struct usb_stream *VAR_8;

 FUNC_2(&VAR_7->mutex);
 VAR_8 = VAR_7->sk.s;
 if (!VAR_8)
  goto unlock;

 VAR_4 = VAR_3->pgoff << VAR_0;
 if (VAR_4 < FUNC_0(VAR_8->read_size))
  VAR_6 = (char *)VAR_8 + VAR_4;
 else {
  VAR_4 -= FUNC_0(VAR_8->read_size);
  if (VAR_4 >= FUNC_0(VAR_8->write_size))
   goto unlock;

  VAR_6 = VAR_7->sk.write_page + VAR_4;
 }
 VAR_5 = FUNC_4(VAR_6);

 FUNC_1(VAR_5);
 FUNC_3(&VAR_7->mutex);

 VAR_3->page = VAR_5;

 return 0;
unlock:
 FUNC_3(&VAR_7->mutex);
 return VAR_1;
}
