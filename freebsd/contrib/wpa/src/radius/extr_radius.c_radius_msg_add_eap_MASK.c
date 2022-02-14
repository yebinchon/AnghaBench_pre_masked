
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct radius_msg*,int ,int const*,int) ;

int FUNC_1(struct radius_msg *VAR_2, const u8 *VAR_3, size_t VAR_4)
{
 const u8 *VAR_5 = VAR_3;
 size_t VAR_6 = VAR_4;

 while (VAR_6 > 0) {
  int VAR_7;
  if (VAR_6 > VAR_1)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_6;

  if (!FUNC_0(VAR_2, VAR_0,
      VAR_5, VAR_7))
   return 0;

  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }

 return 1;
}
