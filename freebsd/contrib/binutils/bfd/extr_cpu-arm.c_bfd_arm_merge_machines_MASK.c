
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (int *) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_3 (int *,int ,unsigned int) ;
 int FUNC_4 (int ) ;

bfd_boolean
FUNC_5 (bfd *VAR_9, bfd *VAR_10)
{
  unsigned int VAR_11 = FUNC_2 (VAR_9);
  unsigned int VAR_12 = FUNC_2 (VAR_10);


  if (VAR_12 == VAR_8)
    FUNC_3 (VAR_10, VAR_2, VAR_11);



  else if (VAR_11 == VAR_8)


    FUNC_3 (VAR_10, VAR_2, VAR_8);


  else if (VAR_12 == VAR_11)
    ;
  else if (VAR_11 == VAR_5
    && (VAR_12 == VAR_4
        || VAR_12 == VAR_6
        || VAR_12 == VAR_7))
    {
      FUNC_1 (FUNC_0("ERROR: %B is compiled for the EP9312, whereas %B is compiled for XScale"),

     VAR_9, VAR_10);
      FUNC_4 (VAR_3);
      return VAR_0;
    }
  else if (VAR_12 == VAR_5
    && (VAR_11 == VAR_4
        || VAR_11 == VAR_6
        || VAR_11 == VAR_7))
    {
      FUNC_1 (FUNC_0("ERROR: %B is compiled for the EP9312, whereas %B is compiled for XScale"),

     VAR_10, VAR_9);
      FUNC_4 (VAR_3);
      return VAR_0;
    }
  else if (VAR_11 > VAR_12)
    FUNC_3 (VAR_10, VAR_2, VAR_11);



  return VAR_1;
}
