
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int VAR_6 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (bfd * VAR_7, flagword VAR_8)
{
  flagword VAR_9;

  FUNC_3 (VAR_7 != ((void*)0));

  VAR_9 = (VAR_8 & VAR_1) ? VAR_2 : 0;



  if (FUNC_2 (VAR_7)
      && ( (FUNC_0 (VAR_7) != VAR_9)
   || (FUNC_1 (VAR_7) != (VAR_8 & VAR_3))
   || (FUNC_6 (VAR_7) != (VAR_8 & VAR_5))
   ))
    return VAR_0;

  VAR_9 |= (VAR_8 & (VAR_3 | VAR_5));

  FUNC_7 (VAR_7, VAR_9);

  VAR_9 = (VAR_8 & VAR_4);





  if (FUNC_5 (VAR_7) && (FUNC_4 (VAR_7) != VAR_9))
    {
      if (VAR_9)

 FUNC_10 (FUNC_9("Warning: Not setting interworking flag of %B since it has already been specified as non-interworking"),
       VAR_7);
      else

 FUNC_10 (FUNC_9("Warning: Clearing the interworking flag of %B due to outside request"),
       VAR_7);
      VAR_9 = 0;
    }

  FUNC_8 (VAR_7, VAR_9);

  return VAR_6;
}
