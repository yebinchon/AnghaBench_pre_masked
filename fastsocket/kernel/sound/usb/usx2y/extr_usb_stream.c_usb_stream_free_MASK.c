
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stream_kernel {struct usb_stream* s; int * write_page; int ** outurb; int ** inurb; } ;
struct usb_stream {int read_size; int write_size; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct usb_stream_kernel *VAR_1)
{
 struct usb_stream *VAR_2;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_2(VAR_1->inurb[VAR_3]);
  VAR_1->inurb[VAR_3] = ((void*)0);
  FUNC_2(VAR_1->outurb[VAR_3]);
  VAR_1->outurb[VAR_3] = ((void*)0);
 }

 VAR_2 = VAR_1->s;
 if (!VAR_2)
  return;

 FUNC_0((unsigned long)VAR_1->write_page, FUNC_1(VAR_2->write_size));
 VAR_1->write_page = ((void*)0);
 FUNC_0((unsigned long)VAR_2, FUNC_1(VAR_2->read_size));
 VAR_1->s = ((void*)0);
}
