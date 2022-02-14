
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_14__ {scalar_t__ xvec; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_9 (char*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (bfd * VAR_2, bfd * VAR_3)
{
  FUNC_3 (VAR_2 != ((void*)0) && VAR_3 != ((void*)0));

  if (VAR_2 == VAR_3)
    return VAR_1;



  if (VAR_2->xvec != VAR_3->xvec)
    return VAR_1;


  if (FUNC_2 (VAR_2))
    {
      if (FUNC_2 (VAR_3))
 {

   if (FUNC_0 (VAR_3) != FUNC_0 (VAR_2))
     return VAR_0;

   if (FUNC_1 (VAR_3) != FUNC_1 (VAR_2))
     return VAR_0;

   if (FUNC_6 (VAR_3) != FUNC_6 (VAR_2))
     return VAR_0;
 }
      else
 FUNC_7 (VAR_3, FUNC_0 (VAR_2) | FUNC_1 (VAR_2)
   | FUNC_6 (VAR_2));
    }

  if (FUNC_5 (VAR_2))
    {
      if (FUNC_5 (VAR_3))
 {


   if (FUNC_4 (VAR_3) != FUNC_4 (VAR_2))
     {
       if (FUNC_4 (VAR_3))
  {

    FUNC_9 (("Warning: Clearing the interworking flag of %B because non-interworking code in %B has been linked with it"),

          VAR_3, VAR_2);
  }

       FUNC_8 (VAR_3, 0);
     }
 }
      else
 {
   FUNC_8 (VAR_3, FUNC_4 (VAR_2));
 }
    }

  return VAR_1;
}
