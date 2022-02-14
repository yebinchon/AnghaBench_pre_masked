
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t VAR_0 ;
 int FUNC_0 (size_t const) ;
 int VAR_1 ;
 size_t VAR_2 ;

void *FUNC_1(const void *VAR_3, int VAR_4, size_t VAR_5)
{
 const unsigned char *VAR_6 = VAR_3;
 VAR_4 = (unsigned char)VAR_4;

 for (; ((uintptr_t)VAR_6 & VAR_0) && VAR_5 && *VAR_6 != VAR_4; VAR_6++, VAR_5--);
 if (VAR_5 && *VAR_6 != VAR_4) {
  typedef size_t __attribute__((__may_alias__)) word;
  const word *VAR_7;
  size_t VAR_8 = VAR_1 * VAR_4;
  for (VAR_7 = (const void *)VAR_6; VAR_5>=VAR_2 && !FUNC_0(*VAR_7^VAR_8); VAR_7++, VAR_5-=VAR_2);
  VAR_6 = (const void *)VAR_7;
 }

 for (; VAR_5 && *VAR_6 != VAR_4; VAR_6++, VAR_5--);
 return VAR_5 ? (void *)VAR_6 : 0;
}
