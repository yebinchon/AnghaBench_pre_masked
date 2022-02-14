
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int skip_buf ;
typedef int Arc4 ;


 int FUNC_0 (int *,unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;

int FUNC_2(const u8 *VAR_0, size_t VAR_1, size_t VAR_2, u8 *VAR_3,
      size_t VAR_4)
{

 Arc4 VAR_5;
 unsigned char VAR_6[16];

 FUNC_1(&VAR_5, VAR_0, VAR_1);

 while (VAR_2 >= sizeof(VAR_6)) {
  size_t VAR_7 = VAR_2;

  if (VAR_7 > sizeof(VAR_6))
   VAR_7 = sizeof(VAR_6);
  FUNC_0(&VAR_5, VAR_6, VAR_6, VAR_7);
  VAR_2 -= VAR_7;
 }

 FUNC_0(&VAR_5, VAR_3, VAR_3, VAR_4);

 return 0;



}
