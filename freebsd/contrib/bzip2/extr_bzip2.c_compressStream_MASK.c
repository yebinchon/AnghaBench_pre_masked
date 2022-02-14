
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef scalar_t__ UInt32 ;
typedef int UChar ;
typedef scalar_t__ Int32 ;
typedef int FILE ;
typedef char Char ;
typedef int BZFILE ;


 int FUNC_0 (scalar_t__*,int *,void*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int *,int,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int * FUNC_2 (scalar_t__*,int *,int ,int,int ) ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,...) ;
 scalar_t__ FUNC_11 (int *,int,int,int *) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 () ;
 int * VAR_4 ;
 int FUNC_15 (char*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_16 (int *,scalar_t__,scalar_t__) ;
 int FUNC_17 (char*,int *) ;
 double FUNC_18 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static
void FUNC_19 ( FILE *VAR_9, FILE *VAR_10 )
{
   BZFILE* VAR_11 = ((void*)0);
   UChar VAR_12[5000];
   Int32 VAR_13;
   UInt32 VAR_14, VAR_15;
   UInt32 VAR_16, VAR_17;
   Int32 VAR_18, VAR_19, VAR_20;

   FUNC_3(VAR_9);
   FUNC_3(VAR_10);

   if (FUNC_7(VAR_9)) goto errhandler_io;
   if (FUNC_7(VAR_10)) goto errhandler_io;

   VAR_11 = FUNC_2 ( &VAR_18, VAR_10,
                           VAR_3, VAR_7, VAR_8 );
   if (VAR_18 != VAR_0) goto errhandler;

   if (VAR_7 >= 2) FUNC_10 ( VAR_5, "\n" );

   while (VAR_2) {

      if (FUNC_13(VAR_9)) break;
      VAR_13 = FUNC_11 ( VAR_12, sizeof(UChar), 5000, VAR_9 );
      if (FUNC_7(VAR_9)) goto errhandler_io;
      if (VAR_13 > 0) FUNC_0 ( &VAR_18, VAR_11, (void*)VAR_12, VAR_13 );
      if (VAR_18 != VAR_0) goto errhandler;

   }

   FUNC_1 ( &VAR_18, VAR_11, 0,
                        &VAR_14, &VAR_15,
                        &VAR_16, &VAR_17 );
   if (VAR_18 != VAR_0) goto errhandler;

   if (FUNC_7(VAR_10)) goto errhandler_io;
   VAR_20 = FUNC_8 ( VAR_10 );
   if (VAR_20 == VAR_1) goto errhandler_io;
   if (VAR_10 != VAR_6) {
      Int32 VAR_21 = FUNC_9 ( VAR_10 );
      if (VAR_21 < 0) goto errhandler_io;
      FUNC_4 ( VAR_21 );
      VAR_20 = FUNC_6 ( VAR_10 );
      VAR_4 = ((void*)0);
      if (VAR_20 == VAR_1) goto errhandler_io;
   }
   VAR_4 = ((void*)0);
   if (FUNC_7(VAR_9)) goto errhandler_io;
   VAR_20 = FUNC_6 ( VAR_9 );
   if (VAR_20 == VAR_1) goto errhandler_io;

   if (VAR_7 >= 1) {
      if (VAR_14 == 0 && VAR_15 == 0) {
  FUNC_10 ( VAR_5, " no data compressed.\n");
      } else {
  Char VAR_22[32], VAR_23[32];
  UInt64 VAR_24, VAR_25;
  double VAR_26, VAR_27;
  FUNC_16 ( &VAR_24,
          VAR_14, VAR_15 );
  FUNC_16 ( &VAR_25,
          VAR_16, VAR_17 );
  VAR_26 = FUNC_18 ( &VAR_24 );
  VAR_27 = FUNC_18 ( &VAR_25 );
  FUNC_17 ( VAR_22, &VAR_24 );
  FUNC_17 ( VAR_23, &VAR_25 );
  FUNC_10 ( VAR_5, "%6.3f:1, %6.3f bits/byte, "
     "%5.2f%% saved, %s in, %s out.\n",
     VAR_26 / VAR_27,
     (8.0 * VAR_27) / VAR_26,
     100.0 * (1.0 - VAR_27 / VAR_26),
     VAR_22,
     VAR_23
   );
      }
   }

   return;

   errhandler:
   FUNC_1 ( &VAR_19, VAR_11, 1,
                        &VAR_14, &VAR_15,
                        &VAR_16, &VAR_17 );
   switch (VAR_18) {
      case 130:
         FUNC_5(); break;
      case 128:
         FUNC_14 (); break;
      case 129:
         errhandler_io:
         FUNC_12(); break;
      default:
         FUNC_15 ( "compress:unexpected error" );
   }

   FUNC_15 ( "compress:end" );

}
