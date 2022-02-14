
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int ev_uint8_t ;
typedef int ev_uint32_t ;
typedef int data ;


 int FUNC_0 (struct evbuffer*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;

int
FUNC_2(struct evbuffer *VAR_0, ev_uint32_t VAR_1)
{
 int VAR_2 = 0;
 ev_uint8_t VAR_3[5];

 FUNC_1(VAR_3, 0, sizeof(VAR_3));
 do {
  ev_uint8_t VAR_4 = VAR_1 & 0x7f;
  VAR_1 >>= 7;

  if (VAR_1)
   VAR_4 |= 0x80;

  VAR_3[VAR_2++] = VAR_4;
 } while (VAR_1);

 if (VAR_0 != ((void*)0))
  FUNC_0(VAR_0, VAR_3, VAR_2);

 return (VAR_2);
}
