
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct libusb_transfer {int flags; int endpoint; int timeout; int actual_length; } ;
struct libusb_super_transfer {int rem_len; int curr_data; int last_len; } ;
struct libusb20_transfer {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct libusb20_transfer*,struct libusb_super_transfer*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct libusb20_transfer*) ;
 int FUNC_4 (struct libusb20_transfer*) ;
 int FUNC_5 (struct libusb20_transfer*) ;
 struct libusb_super_transfer* FUNC_6 (struct libusb20_transfer*) ;
 int FUNC_7 (struct libusb20_transfer*) ;
 int FUNC_8 (struct libusb20_transfer*,int ,int ,int ) ;
 int FUNC_9 (struct libusb20_transfer*) ;

__attribute__((used)) static void
FUNC_10(struct libusb20_transfer *VAR_3)
{
 struct libusb_super_transfer *VAR_4;
 struct libusb_transfer *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;

 VAR_8 = FUNC_7(VAR_3);
 VAR_4 = FUNC_6(VAR_3);
 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = FUNC_3(VAR_3);

 if (VAR_4 == ((void*)0))
  return;

 VAR_5 = (struct libusb_transfer *)(
     ((uint8_t *)VAR_4) + sizeof(*VAR_4));

 VAR_9 = VAR_5->flags;

 switch (VAR_8) {
 case 129:

  VAR_5->actual_length += VAR_7;


  if (VAR_4->last_len != VAR_7) {
   if (VAR_9 & VAR_2) {
    FUNC_0(VAR_3, VAR_4, VAR_1);
   } else {
    FUNC_0(VAR_3, VAR_4, VAR_0);
   }
   break;
  }

  if (VAR_4->rem_len == 0) {
   FUNC_0(VAR_3, VAR_4, VAR_0);
   break;
  }


 case 128:
  if (VAR_6 > VAR_4->rem_len) {
   VAR_6 = VAR_4->rem_len;
  }

  FUNC_8(VAR_3,
      VAR_4->curr_data, VAR_6, VAR_5->timeout);


  VAR_4->last_len = VAR_6;
  VAR_4->curr_data += VAR_6;
  VAR_4->rem_len -= VAR_6;

  FUNC_9(VAR_3);


  if (VAR_4->rem_len == 0)
   FUNC_2(FUNC_5(VAR_3), VAR_5->endpoint);
  break;

 default:
  FUNC_0(VAR_3, VAR_4, FUNC_1(VAR_8));
  break;
 }
}
