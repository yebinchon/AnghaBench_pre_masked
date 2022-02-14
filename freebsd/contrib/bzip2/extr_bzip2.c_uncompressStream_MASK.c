
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UChar ;
typedef scalar_t__ Int32 ;
typedef int FILE ;
typedef scalar_t__ Bool ;
typedef int BZFILE ;


 scalar_t__ FUNC_0 (scalar_t__*,int *,int *,int) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int FUNC_2 (scalar_t__*,int *,void**,scalar_t__*) ;
 int * FUNC_3 (scalar_t__*,int *,int,int,int *,scalar_t__) ;




 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (int ,char*,...) ;
 scalar_t__ FUNC_14 (int *,int,int,int *) ;
 int FUNC_15 (int *,int,scalar_t__,int *) ;
 char* VAR_7 ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int *) ;
 int VAR_8 ;
 int FUNC_18 () ;
 int * VAR_9 ;
 int FUNC_19 (char*) ;
 char* VAR_10 ;
 int FUNC_20 (int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static
Bool FUNC_21 ( FILE *VAR_16, FILE *VAR_17 )
{
   BZFILE* VAR_18 = ((void*)0);
   Int32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
   UChar VAR_25[5000];
   UChar VAR_26[VAR_0];
   Int32 VAR_27;
   void* VAR_28;
   UChar* VAR_29;

   VAR_27 = 0;
   VAR_23 = 0;

   FUNC_4(VAR_17);
   FUNC_4(VAR_16);

   if (FUNC_10(VAR_17)) goto errhandler_io;
   if (FUNC_10(VAR_16)) goto errhandler_io;

   while (VAR_5) {

      VAR_18 = FUNC_3 (
               &VAR_19, VAR_16, VAR_15,
               (int)VAR_11, VAR_26, VAR_27
            );
      if (VAR_18 == ((void*)0) || VAR_19 != VAR_1) goto errhandler;
      VAR_23++;

      while (VAR_19 == VAR_1) {
         VAR_22 = FUNC_0 ( &VAR_19, VAR_18, VAR_25, 5000 );
         if (VAR_19 == 131) goto trycat;
         if ((VAR_19 == VAR_1 || VAR_19 == VAR_2) && VAR_22 > 0)
            FUNC_15 ( VAR_25, sizeof(UChar), VAR_22, VAR_17 );
         if (FUNC_10(VAR_17)) goto errhandler_io;
      }
      if (VAR_19 != VAR_2) goto errhandler;

      FUNC_2 ( &VAR_19, VAR_18, &VAR_28, &VAR_27 );
      if (VAR_19 != VAR_1) FUNC_19 ( "decompress:bzReadGetUnused" );

      VAR_29 = (UChar*)VAR_28;
      for (VAR_24 = 0; VAR_24 < VAR_27; VAR_24++) VAR_26[VAR_24] = VAR_29[VAR_24];

      FUNC_1 ( &VAR_19, VAR_18 );
      if (VAR_19 != VAR_1) FUNC_19 ( "decompress:bzReadGetUnused" );

      if (VAR_27 == 0 && FUNC_17(VAR_16)) break;
   }

   closeok:
   if (FUNC_10(VAR_16)) goto errhandler_io;
   if (VAR_17 != VAR_14) {
      Int32 VAR_30 = FUNC_12 ( VAR_17 );
      if (VAR_30 < 0) goto errhandler_io;
      FUNC_5 ( VAR_30 );
   }
   VAR_21 = FUNC_9 ( VAR_16 );
   if (VAR_21 == VAR_3) goto errhandler_io;

   if (FUNC_10(VAR_17)) goto errhandler_io;
   VAR_21 = FUNC_11 ( VAR_17 );
   if (VAR_21 != 0) goto errhandler_io;
   if (VAR_17 != VAR_14) {
      VAR_21 = FUNC_9 ( VAR_17 );
      VAR_9 = ((void*)0);
      if (VAR_21 == VAR_3) goto errhandler_io;
   }
   VAR_9 = ((void*)0);
   if (VAR_15 >= 2) FUNC_13 ( VAR_12, "\n    " );
   return VAR_5;

   trycat:
   if (VAR_6) {
      FUNC_20(VAR_16);
      while (VAR_5) {
        if (FUNC_17(VAR_16)) break;
        VAR_22 = FUNC_14 ( VAR_25, sizeof(UChar), 5000, VAR_16 );
        if (FUNC_10(VAR_16)) goto errhandler_io;
        if (VAR_22 > 0) FUNC_15 ( VAR_25, sizeof(UChar), VAR_22, VAR_17 );
        if (FUNC_10(VAR_17)) goto errhandler_io;
      }
      goto closeok;
   }

   errhandler:
   FUNC_1 ( &VAR_20, VAR_18 );
   switch (VAR_19) {
      case 133:
         FUNC_7(); break;
      case 130:
         errhandler_io:
         FUNC_16(); break;
      case 132:
         FUNC_8();
      case 129:
         FUNC_18();
      case 128:
         FUNC_6();
      case 131:
         if (VAR_16 != VAR_13) FUNC_9(VAR_16);
         if (VAR_17 != VAR_14) FUNC_9(VAR_17);
         if (VAR_23 == 1) {
            return VAR_4;
         } else {
            if (VAR_8)
            FUNC_13 ( VAR_12,
                      "\n%s: %s: trailing garbage after EOF ignored\n",
                      VAR_10, VAR_7 );
            return VAR_5;
         }
      default:
         FUNC_19 ( "decompress:unexpected error" );
   }

   FUNC_19 ( "decompress:end" );
   return VAR_5;
}
