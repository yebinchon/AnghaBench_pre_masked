
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;


 int FUNC_0 (char*,int ,unsigned char,unsigned char,void*) ;
 int FUNC_1 (unsigned char const**) ;

__attribute__((used)) static const unsigned char *
FUNC_2 (const unsigned char *VAR_0, unsigned int VAR_1, void *VAR_2)
{
  unsigned char VAR_3, VAR_4, VAR_5;
  unw_word VAR_6;

  VAR_3 = *VAR_0++;

  VAR_4 = ((VAR_1 & 0x7) << 1) | ((VAR_3 >> 7) & 1);
  VAR_5 = (VAR_3 & 0x7f);
  VAR_6 = FUNC_1 (& VAR_0);
  FUNC_0 ("R2", VAR_6, VAR_4, VAR_5, VAR_2);
  return VAR_0;
}
