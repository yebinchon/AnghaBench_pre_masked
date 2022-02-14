
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int unw_word ;


 int FUNC_0 (char*,int,unsigned int,void*) ;

__attribute__((used)) static const unsigned char *
FUNC_1 (const unsigned char *VAR_0, unsigned int VAR_1, void *VAR_2)
{
  int VAR_3 = (VAR_1 & 0x20) != 0;
  unw_word VAR_4;

  VAR_4 = (VAR_1 & 0x1f);
  FUNC_0 ("R1", VAR_3, VAR_4, VAR_2);
  return VAR_0;
}
