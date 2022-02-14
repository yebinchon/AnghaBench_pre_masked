
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spec_function {char* (* func ) (int,char const**) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 char const** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const**) ;
 int VAR_5 ;
 struct spec_function* FUNC_4 (char const*) ;
 char* FUNC_5 (int,char const**) ;
 char const* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static const char *
FUNC_6 (const char *VAR_9, const char *VAR_10)
{
  const struct spec_function *VAR_11;
  const char *VAR_12;


  int VAR_13;
  int VAR_14;
  const char **VAR_15;

  int VAR_16;
  int VAR_17;
  int VAR_18;
  int VAR_19;
  int VAR_20;
  const char *VAR_21;


  VAR_11 = FUNC_4 (VAR_9);
  if (VAR_11 == ((void*)0))
    FUNC_2 ("unknown spec function '%s'", VAR_9);


  VAR_13 = VAR_2;
  VAR_14 = VAR_3;
  VAR_15 = VAR_1;

  VAR_16 = VAR_0;
  VAR_17 = VAR_4;
  VAR_18 = VAR_8;
  VAR_19 = VAR_7;
  VAR_20 = VAR_5;
  VAR_21 = VAR_6;




  FUNC_0 ();
  if (FUNC_1 (VAR_10) < 0)
    FUNC_2 ("error in args to spec function '%s'", VAR_9);




  VAR_12 = (*VAR_11->func) (VAR_2, VAR_1);


  VAR_2 = VAR_13;
  VAR_3 = VAR_14;
  FUNC_3 (VAR_1);
  VAR_1 = VAR_15;

  VAR_0 = VAR_16;
  VAR_4 = VAR_17;
  VAR_8 = VAR_18;
  VAR_7 = VAR_19;
  VAR_5 = VAR_20;
  VAR_6 = VAR_21;

  return VAR_12;
}
