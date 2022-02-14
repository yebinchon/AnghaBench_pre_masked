
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int number ;
typedef int ev_uint8_t ;
typedef int ev_uint32_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct evbuffer*,size_t) ;
 size_t FUNC_1 (struct evbuffer*) ;
 int* FUNC_2 (struct evbuffer*,size_t) ;

__attribute__((used)) static int
FUNC_3(ev_uint32_t *VAR_1, struct evbuffer *VAR_2, int VAR_3)
{
 ev_uint32_t VAR_4 = 0;
 size_t VAR_5 = FUNC_1(VAR_2);
 ev_uint8_t *VAR_6;
 size_t VAR_7 = 0;
 int VAR_8 = 0, VAR_9 = 0;





 VAR_6 = FUNC_2(
  VAR_2, VAR_5 < sizeof(VAR_4) + 1 ? VAR_5 : sizeof(VAR_4) + 1);
 if (!VAR_6)
  return (-1);

 while (VAR_7++ < VAR_5) {
  ev_uint8_t VAR_10 = *VAR_6++;
  if (VAR_8 >= 28) {

   if (VAR_8 > 28)
    return (-1);
   if ((VAR_10 & 0x7f) > 15)
    return (-1);
  }
  VAR_4 |= (VAR_10 & (unsigned)0x7f) << VAR_8;
  VAR_8 += 7;

  if (!(VAR_10 & 0x80)) {
   VAR_9 = 1;
   break;
  }
 }

 if (!VAR_9)
  return (-1);

 if (VAR_3)
  FUNC_0(VAR_2, VAR_7);

 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_4;

 return VAR_7 > VAR_0 ? VAR_0 : (int)(VAR_7);
}
