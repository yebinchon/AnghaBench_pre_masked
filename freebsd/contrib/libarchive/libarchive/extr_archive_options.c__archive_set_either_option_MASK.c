
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;
typedef int (* option_handler ) (struct archive*,char const*,char const*,char const*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(struct archive *VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7,
    option_handler VAR_8, option_handler VAR_9)
{
 int VAR_10, VAR_11;

 if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0))
  return (VAR_2);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_10 = VAR_8(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_10 == VAR_1)
  return (VAR_1);

 VAR_11 = VAR_9(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_11 == VAR_1)
  return (VAR_1);

 if (VAR_11 == VAR_3 - 1)
  return VAR_10;
 return VAR_10 > VAR_11 ? VAR_10 : VAR_11;
}
