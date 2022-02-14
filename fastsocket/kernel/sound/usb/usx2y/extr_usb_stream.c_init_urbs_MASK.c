
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stream_packet {int dummy; } ;
struct usb_stream_kernel {char* write_page; void** outurb; void** inurb; int n_o_ps; struct usb_stream* s; } ;
struct usb_stream {int inpackets; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_stream_kernel*,unsigned int,void**,char*,struct usb_device*,int) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_stream_kernel *VAR_2, unsigned VAR_3,
        struct usb_device *VAR_4, int VAR_5, int VAR_6)
{
 struct usb_stream *VAR_7 = VAR_2->s;
 char *VAR_8 = (char *)VAR_7 + sizeof(*VAR_7) +
     sizeof(struct usb_stream_packet) *
     VAR_7->inpackets;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
  VAR_2->inurb[VAR_9] = FUNC_1(VAR_2->n_o_ps, VAR_0);
  VAR_2->outurb[VAR_9] = FUNC_1(VAR_2->n_o_ps, VAR_0);
 }

 FUNC_0(VAR_2, VAR_3, VAR_2->inurb, VAR_8, VAR_4, VAR_5);
 FUNC_0(VAR_2, VAR_3, VAR_2->outurb, VAR_2->write_page, VAR_4,
         VAR_6);
}
