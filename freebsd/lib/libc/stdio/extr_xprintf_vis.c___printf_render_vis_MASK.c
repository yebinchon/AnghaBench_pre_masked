
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_info {unsigned int prec; scalar_t__ alt; int pad; scalar_t__ showsign; } ;
struct __printf_io {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct __printf_io*) ;
 int FUNC_1 (struct __printf_io*,struct printf_info const*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,unsigned int,int) ;

int
FUNC_6(struct __printf_io *VAR_4, const struct printf_info *VAR_5, const void *const *VAR_6)
{
 char *VAR_7, *VAR_8;
 unsigned VAR_9;
 int VAR_10;

 VAR_10 = 0;
 VAR_7 = *((char **)VAR_6[0]);
 if (VAR_7 == ((void*)0))
  return (FUNC_1(VAR_4, VAR_5, "(null)", 6));
 if (VAR_5->prec >= 0)
  VAR_9 = VAR_5->prec;
 else
  VAR_9 = FUNC_4(VAR_7);
 VAR_8 = FUNC_3(VAR_9 * 4 + 1);
 if (VAR_8 == ((void*)0))
  return (-1);
 if (VAR_5->showsign)
  VAR_10 = FUNC_5(VAR_8, VAR_7, VAR_9, VAR_3 | VAR_1);
 else if (VAR_5->pad == '0')
  VAR_10 = FUNC_5(VAR_8, VAR_7, VAR_9, VAR_3 | VAR_2);
 else if (VAR_5->alt)
  VAR_10 = FUNC_5(VAR_8, VAR_7, VAR_9, VAR_3);
 else
  VAR_10 = FUNC_5(VAR_8, VAR_7, VAR_9, VAR_3 | VAR_0 | VAR_2);
 VAR_10 += FUNC_1(VAR_4, VAR_5, VAR_8, VAR_10);
 FUNC_0(VAR_4);
 FUNC_2(VAR_8);
 return(VAR_10);
}
