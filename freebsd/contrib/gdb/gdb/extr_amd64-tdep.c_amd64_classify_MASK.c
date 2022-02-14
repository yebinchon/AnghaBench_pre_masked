
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef enum amd64_reg_class { ____Placeholder_amd64_reg_class } amd64_reg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct type*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*,int*) ;

__attribute__((used)) static void
FUNC_3 (struct type *VAR_13, enum amd64_reg_class VAR_14[2])
{
  enum type_code VAR_15 = FUNC_0 (VAR_13);
  int VAR_16 = FUNC_1 (VAR_13);

  VAR_14[0] = VAR_14[1] = VAR_1;



  if ((VAR_15 == VAR_8 || VAR_15 == VAR_6
       || VAR_15 == VAR_9 || VAR_15 == VAR_10)
      && (VAR_16 == 1 || VAR_16 == 2 || VAR_16 == 4 || VAR_16 == 8))
    VAR_14[0] = VAR_0;


  else if (VAR_15 == VAR_7 && (VAR_16 == 4 || VAR_16 == 8))

    VAR_14[0] = VAR_2;
  else if (VAR_15 == VAR_7 && VAR_16 == 16)

    VAR_14[0] = VAR_3, VAR_14[1] = VAR_4;


  else if (VAR_15 == VAR_5 || VAR_15 == VAR_11
    || VAR_15 == VAR_12)
    FUNC_2 (VAR_13, VAR_14);
}
