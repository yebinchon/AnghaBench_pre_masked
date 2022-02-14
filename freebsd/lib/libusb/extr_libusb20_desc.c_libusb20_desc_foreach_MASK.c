
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb20_me_struct {int len; scalar_t__ ptr; } ;


 int* FUNC_0 (int const*,int ) ;

const uint8_t *
FUNC_1(const struct libusb20_me_struct *VAR_0,
    const uint8_t *VAR_1)
{
 const uint8_t *VAR_2;
 const uint8_t *VAR_3;
 const uint8_t *VAR_4;


 if (VAR_0 == ((void*)0))
  return (((void*)0));

 VAR_2 = (const uint8_t *)VAR_0->ptr;
 VAR_3 = FUNC_0(VAR_2, VAR_0->len);


 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_2;
 else
  VAR_1 = VAR_1 + VAR_1[0];


 if ((VAR_1 < VAR_2) || (VAR_1 >= VAR_3))
  return (((void*)0));


 VAR_4 = VAR_1 + VAR_1[0];
 if ((VAR_4 < VAR_2) || (VAR_4 > VAR_3))
  return (((void*)0));


 if (VAR_1[0] < 3)
  return (((void*)0));

 return (VAR_1);
}
