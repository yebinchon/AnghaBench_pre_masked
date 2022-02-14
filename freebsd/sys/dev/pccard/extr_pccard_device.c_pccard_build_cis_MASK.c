
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pccard_tuple {scalar_t__ code; int length; } ;
struct cis_buffer {int len; scalar_t__* buffer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pccard_tuple const*,int) ;

__attribute__((used)) static int
FUNC_1(const struct pccard_tuple *VAR_2, void *VAR_3)
{
 struct cis_buffer *VAR_4;
 int VAR_5;
 uint8_t VAR_6;

 VAR_4 = (struct cis_buffer *)VAR_3;



 if (VAR_2->code == VAR_0) {
  if (VAR_4->len + 1 > sizeof(VAR_4->buffer))
   return (VAR_1);
  VAR_4->buffer[VAR_4->len++] = VAR_2->code;
  return (0);
 }
 if (VAR_4->len + 2 + VAR_2->length > sizeof(VAR_4->buffer))
  return (VAR_1);
 VAR_4->buffer[VAR_4->len++] = VAR_2->code;
 VAR_4->buffer[VAR_4->len++] = VAR_2->length;
 for (VAR_5 = 0; VAR_5 < VAR_2->length; VAR_5++) {
  VAR_6 = FUNC_0(VAR_2, VAR_5);
  VAR_4->buffer[VAR_4->len++] = VAR_6;
 }
 return (0);
}
