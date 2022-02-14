
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_21__ {TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_20__ {scalar_t__ flavour; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 int VAR_1 ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char const*,TYPE_2__*,TYPE_2__*,...) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bfd_boolean
FUNC_16 (bfd * VAR_4, bfd * VAR_5)
{
  FUNC_3 (VAR_4 != ((void*)0) && VAR_5 != ((void*)0));

  if (VAR_4 == VAR_5)
    return VAR_1;




  if ( VAR_4->xvec->flavour != VAR_3
      || VAR_5->xvec->flavour != VAR_3)
    return VAR_1;



  if (! FUNC_11 (VAR_4, VAR_5))
    return VAR_0;


  if (FUNC_2 (VAR_4))
    {
      if (FUNC_2 (VAR_5))
 {

   if (FUNC_0 (VAR_5) != FUNC_0 (VAR_4))
     {
       FUNC_10

  (FUNC_9("ERROR: %B is compiled for APCS-%d, whereas %B is compiled for APCS-%d"),
   VAR_4, VAR_5,
   FUNC_0 (VAR_4) ? 26 : 32,
   FUNC_0 (VAR_5) ? 26 : 32
   );

       FUNC_15 (VAR_2);
       return VAR_0;
     }

   if (FUNC_1 (VAR_5) != FUNC_1 (VAR_4))
     {
       const char *VAR_6;

       if (FUNC_1 (VAR_4))

  VAR_6 = FUNC_9("ERROR: %B passes floats in float registers, whereas %B passes them in integer registers");
       else

  VAR_6 = FUNC_9("ERROR: %B passes floats in integer registers, whereas %B passes them in float registers");

       FUNC_10 (VAR_6, VAR_4, VAR_5);

       FUNC_15 (VAR_2);
       return VAR_0;
     }

   if (FUNC_6 (VAR_5) != FUNC_6 (VAR_4))
     {
       const char * VAR_7;

       if (FUNC_6 (VAR_4))

  VAR_7 = FUNC_9("ERROR: %B is compiled as position independent code, whereas target %B is absolute position");
       else

  VAR_7 = FUNC_9("ERROR: %B is compiled as absolute position code, whereas target %B is position independent");
       FUNC_10 (VAR_7, VAR_4, VAR_5);

       FUNC_15 (VAR_2);
       return VAR_0;
     }
 }
      else
 {
   FUNC_7 (VAR_5, FUNC_0 (VAR_4) | FUNC_1 (VAR_4) | FUNC_6 (VAR_4));


   FUNC_14 (VAR_5, FUNC_12 (VAR_4), FUNC_13 (VAR_4));
 }
    }


  if (FUNC_5 (VAR_4))
    {
      if (FUNC_5 (VAR_5))
 {

   if (FUNC_4 (VAR_5) != FUNC_4 (VAR_4))
     {
       const char * VAR_8;

       if (FUNC_4 (VAR_4))

  VAR_8 = FUNC_9("Warning: %B supports interworking, whereas %B does not");
       else

  VAR_8 = FUNC_9("Warning: %B does not support interworking, whereas %B does");

       FUNC_10 (VAR_8, VAR_4, VAR_5);
     }
 }
      else
 {
   FUNC_8 (VAR_5, FUNC_4 (VAR_4));
 }
    }

  return VAR_1;
}
