
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha512_state {int curlen; int length; unsigned char* buf; int* state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (struct sha512_state*,unsigned char*) ;

int FUNC_3(struct sha512_state *VAR_0, unsigned char *VAR_1)
{
 int VAR_2;

 if (VAR_0->curlen >= sizeof(VAR_0->buf))
  return -1;


 VAR_0->length += VAR_0->curlen * FUNC_0(8);


 VAR_0->buf[VAR_0->curlen++] = (unsigned char) 0x80;





 if (VAR_0->curlen > 112) {
  while (VAR_0->curlen < 128) {
   VAR_0->buf[VAR_0->curlen++] = (unsigned char) 0;
  }
  FUNC_2(VAR_0, VAR_0->buf);
  VAR_0->curlen = 0;
 }





 while (VAR_0->curlen < 120) {
  VAR_0->buf[VAR_0->curlen++] = (unsigned char) 0;
 }


 FUNC_1(VAR_0->buf + 120, VAR_0->length);
 FUNC_2(VAR_0, VAR_0->buf);


 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  FUNC_1(VAR_1 + (8 * VAR_2), VAR_0->state[VAR_2]);

 return 0;
}
