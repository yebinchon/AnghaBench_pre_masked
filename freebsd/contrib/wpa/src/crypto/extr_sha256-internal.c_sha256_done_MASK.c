
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_state {int curlen; int length; unsigned char* buf; int * state; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (struct sha256_state*,unsigned char*) ;

int FUNC_3(struct sha256_state *VAR_1, unsigned char *VAR_2)
{
 int VAR_3;

 if (VAR_1->curlen >= sizeof(VAR_1->buf))
  return -1;


 VAR_1->length += VAR_1->curlen * 8;


 VAR_1->buf[VAR_1->curlen++] = (unsigned char) 0x80;





 if (VAR_1->curlen > 56) {
  while (VAR_1->curlen < VAR_0) {
   VAR_1->buf[VAR_1->curlen++] = (unsigned char) 0;
  }
  FUNC_2(VAR_1, VAR_1->buf);
  VAR_1->curlen = 0;
 }


 while (VAR_1->curlen < 56) {
  VAR_1->buf[VAR_1->curlen++] = (unsigned char) 0;
 }


 FUNC_1(VAR_1->buf + 56, VAR_1->length);
 FUNC_2(VAR_1, VAR_1->buf);


 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_0(VAR_2 + (4 * VAR_3), VAR_1->state[VAR_3]);

 return 0;
}
