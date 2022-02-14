
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* jmp_buf ;


 int FUNC_0 (int ) ;
 void* FUNC_1 () ;
 int FUNC_2 (void*) ;
 int * VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (unsigned char*,size_t) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (void*) ;

int
FUNC_6(unsigned char *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 void *VAR_5;
 void *VAR_6;
 jmp_buf VAR_7;
 size_t VAR_8;
 int VAR_9;
 unsigned char VAR_10;

 if (VAR_3 * 2 != VAR_1)
  return (-1);

 VAR_6 = FUNC_1();
 VAR_5 = FUNC_4(VAR_7);
 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 == 0) {
  VAR_4 = VAR_2;
  VAR_8 = VAR_3;
  while (VAR_8-- > 0) {
   VAR_10 = (FUNC_0(VAR_0[0]) << 4) & 0xf0;
   VAR_10 |= FUNC_0(VAR_0[1]) & 0x0f;
   *VAR_4++ = VAR_10;
   VAR_1 -= 2;
   VAR_0 += 2;
  }
  FUNC_3(VAR_2, VAR_3);
 }
 (void)FUNC_4(VAR_5);
 FUNC_2(VAR_6);
 return ((VAR_9 == 0) ? 1 : 0);
}
