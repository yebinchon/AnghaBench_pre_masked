
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_device {struct libusb20_device* os_priv; int * ctx; int tr_head; } ;
struct libusb20_device {struct libusb_device* privLuData; } ;
struct libusb20_backend {int dummy; } ;
typedef int ssize_t ;
typedef int libusb_device ;
typedef int libusb_context ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 struct libusb20_backend* FUNC_3 () ;
 int FUNC_4 (struct libusb20_backend*,struct libusb20_device*) ;
 struct libusb20_device* FUNC_5 (struct libusb20_backend*,struct libusb20_device*) ;
 int FUNC_6 (struct libusb20_backend*) ;
 int * FUNC_7 (struct libusb_device*) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct libusb_device*,int ,int) ;

ssize_t
FUNC_11(libusb_context *VAR_2, libusb_device ***VAR_3)
{
 struct libusb20_backend *VAR_4;
 struct libusb20_device *VAR_5;
 struct libusb_device *VAR_6;
 int VAR_7;

 VAR_2 = FUNC_0(VAR_2);

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_3();
 if (VAR_4 == ((void*)0))
  return (VAR_1);


 VAR_5 = ((void*)0);
 VAR_7 = 0;
 while ((VAR_5 = FUNC_5(VAR_4, VAR_5)))
  VAR_7++;


 *VAR_3 = FUNC_9((VAR_7 + 1) * sizeof(void *));
 if (*VAR_3 == ((void*)0)) {
  FUNC_6(VAR_4);
  return (VAR_1);
 }

 VAR_7 = 0;
 while ((VAR_5 = FUNC_5(VAR_4, ((void*)0)))) {

  VAR_6 = FUNC_9(sizeof(*VAR_6));
  if (VAR_6 == ((void*)0)) {
   while (VAR_7 != 0) {
    FUNC_8((*VAR_3)[VAR_7 - 1]);
    VAR_7--;
   }
   FUNC_2(*VAR_3);
   *VAR_3 = ((void*)0);
   FUNC_6(VAR_4);
   return (VAR_1);
  }

  FUNC_4(VAR_4, VAR_5);

  FUNC_10(VAR_6, 0, sizeof(*VAR_6));


  FUNC_1(&VAR_6->tr_head);


  VAR_6->ctx = VAR_2;


  VAR_6->os_priv = VAR_5;
  VAR_5->privLuData = VAR_6;

  (*VAR_3)[VAR_7] = FUNC_7(VAR_6);
  VAR_7++;
 }
 (*VAR_3)[VAR_7] = ((void*)0);

 FUNC_6(VAR_4);
 return (VAR_7);
}
