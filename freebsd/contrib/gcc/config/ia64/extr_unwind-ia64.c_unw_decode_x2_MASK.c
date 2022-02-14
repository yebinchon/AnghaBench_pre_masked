
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;


 int FUNC_0 (int ,int ,unsigned char,void*) ;
 int FUNC_1 (int ,int ,unsigned char,unsigned char,unsigned char,void*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char**) ;

__attribute__((used)) static unsigned char *
FUNC_3 (unsigned char *VAR_1,
        unsigned char VAR_2 __attribute__((unused)),
        void *VAR_3)
{
  unsigned char VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
  unw_word VAR_9;

  VAR_4 = *VAR_1++; VAR_5 = *VAR_1++;
  VAR_9 = FUNC_2 (&VAR_1);
  VAR_6 = (VAR_4 & 0x7f);
  VAR_8 = VAR_5;
  VAR_7 = (VAR_4 >> 7) & 1;
  if ((VAR_4 & 0x80) == 0 && VAR_8 == 0)
    FUNC_0(VAR_0, VAR_9, VAR_6, VAR_3);
  else
    FUNC_1(VAR_0, VAR_9, VAR_6, VAR_7, VAR_8, VAR_3);
  return VAR_1;
}
