
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {int dummy; } ;
struct cis_buffer {int len; int* buffer; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, uint8_t *VAR_6, uint32_t VAR_7, uint32_t *VAR_8,
    struct tuple_callbacks *VAR_9, void *VAR_10)
{
 struct cis_buffer *VAR_11;
 int VAR_12;

 VAR_11 = (struct cis_buffer *)VAR_10;



 if (VAR_4 == VAR_0) {
  if (VAR_11->len + 1 > sizeof(VAR_11->buffer)) {
   VAR_11->len = 0;
   return (VAR_1);
  }
  VAR_11->buffer[VAR_11->len++] = VAR_4;
  return (0);
 }
 if (VAR_11->len + 2 + VAR_5 > sizeof(VAR_11->buffer)) {
  VAR_11->len = 0;
  return (VAR_1);
 }
 VAR_11->buffer[VAR_11->len++] = VAR_4;
 VAR_11->buffer[VAR_11->len++] = VAR_5;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  VAR_11->buffer[VAR_11->len++] = VAR_6[VAR_12];
 return (0);
}
