
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MY_STAT {int st_mode; } ;
typedef int IntNative ;
typedef size_t Int32 ;
typedef int FILE ;
typedef int Char ;
typedef void* Bool ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (char*,struct MY_STAT*) ;
 scalar_t__ FUNC_2 (int ) ;



 void* VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,int *) ;
 size_t FUNC_6 (char*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int * FUNC_12 (char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (int ,char*,...) ;
 char* VAR_6 ;
 int FUNC_14 (int ) ;
 int VAR_7 ;
 int FUNC_15 (char*,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_16 (char*) ;
 char* VAR_9 ;
 int * VAR_10 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 char* VAR_11 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_22 (char*,char*) ;
 char* FUNC_23 (int ) ;
 void* FUNC_24 (int *,int *) ;
 void* VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;

__attribute__((used)) static
void FUNC_25 ( Char *VAR_20 )
{
   FILE *VAR_21;
   FILE *VAR_22;
   Int32 VAR_23, VAR_24;
   Bool VAR_25;
   Bool VAR_26;
   struct MY_STAT VAR_27;

   VAR_3 = VAR_1;

   if (VAR_20 == ((void*)0) && VAR_12 != 128)
      FUNC_18 ( "uncompress: bad modes\n" );

   VAR_26 = VAR_1;
   switch (VAR_12) {
      case 128:
         FUNC_5 ( VAR_6, (Char*)"(stdin)" );
         FUNC_5 ( VAR_9, (Char*)"(stdout)" );
         break;
      case 130:
         FUNC_5 ( VAR_6, VAR_20 );
         FUNC_5 ( VAR_9, VAR_20 );
         for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++)
            if (FUNC_15(VAR_9,VAR_19[VAR_24],VAR_17[VAR_24]))
               goto zzz;
         VAR_26 = VAR_2;
         FUNC_22 ( VAR_9, ".out" );
         break;
      case 129:
         FUNC_5 ( VAR_6, VAR_20 );
         FUNC_5 ( VAR_9, (Char*)"(stdout)" );
         break;
   }

   zzz:
   if ( VAR_12 != 128 && FUNC_4 ( VAR_6 ) ) {
      if (VAR_8)
      FUNC_13 ( VAR_13, "%s: There are no files matching `%s'.\n",
                VAR_11, VAR_6 );
      FUNC_21(1);
      return;
   }
   if ( VAR_12 != 128 && !FUNC_9 ( VAR_6 ) ) {
      FUNC_13 ( VAR_13, "%s: Can't open input file %s: %s.\n",
                VAR_11, VAR_6, FUNC_23(VAR_4) );
      FUNC_21(1);
      return;
   }
   if ( VAR_12 == 130 || VAR_12 == 129 ) {
      FUNC_1(VAR_6, &VAR_27);
      if ( FUNC_2(VAR_27.st_mode) ) {
         FUNC_13( VAR_13,
                  "%s: Input file %s is a directory.\n",
                  VAR_11,VAR_6);
         FUNC_21(1);
         return;
      }
   }
   if ( VAR_12 == 130 && !VAR_5 && FUNC_16 ( VAR_6 )) {
      if (VAR_8)
      FUNC_13 ( VAR_13, "%s: Input file %s is not a normal file.\n",
                VAR_11, VAR_6 );
      FUNC_21(1);
      return;
   }
   if ( VAR_26 ) {
      if (VAR_8)
      FUNC_13 ( VAR_13,
                "%s: Can't guess original name for %s -- using %s\n",
                VAR_11, VAR_6, VAR_9 );

   }
   if ( VAR_12 == 130 && FUNC_9 ( VAR_9 ) ) {
      if (VAR_5) {
 FUNC_19(VAR_9);
      } else {
        FUNC_13 ( VAR_13, "%s: Output file %s already exists.\n",
                  VAR_11, VAR_9 );
        FUNC_21(1);
        return;
      }
   }
   if ( VAR_12 == 130 && !VAR_5 &&
        (VAR_23=FUNC_6 ( VAR_6 ) ) > 0) {
      FUNC_13 ( VAR_13, "%s: Input file %s has %d other link%s.\n",
                VAR_11, VAR_6, VAR_23, VAR_23 > 1 ? "s" : "" );
      FUNC_21(1);
      return;
   }

   if ( VAR_12 == 130 ) {


      FUNC_20 ( VAR_6 );
   }

   switch ( VAR_12 ) {

      case 128:
         VAR_21 = VAR_14;
         VAR_22 = VAR_15;
         if ( FUNC_14 ( FUNC_10 ( VAR_14 ) ) ) {
            FUNC_13 ( VAR_13,
                      "%s: I won't read compressed data from a terminal.\n",
                      VAR_11 );
            FUNC_13 ( VAR_13, "%s: For help, type: `%s --help'.\n",
                              VAR_11, VAR_11 );
            FUNC_21(1);
            return;
         };
         break;

      case 129:
         VAR_21 = FUNC_11 ( VAR_6, "rb" );
         VAR_22 = VAR_15;
         if ( VAR_21 == ((void*)0) ) {
            FUNC_13 ( VAR_13, "%s: Can't open input file %s:%s.\n",
                      VAR_11, VAR_6, FUNC_23(VAR_4) );
            if ( VAR_21 != ((void*)0) ) FUNC_7 ( VAR_21 );
            FUNC_21(1);
            return;
         };
         break;

      case 130:
         VAR_21 = FUNC_11 ( VAR_6, "rb" );
         VAR_22 = FUNC_12 ( VAR_9, "wb" );
         if ( VAR_22 == ((void*)0)) {
            FUNC_13 ( VAR_13, "%s: Can't create output file %s: %s.\n",
                      VAR_11, VAR_9, FUNC_23(VAR_4) );
            if ( VAR_21 != ((void*)0) ) FUNC_7 ( VAR_21 );
            FUNC_21(1);
            return;
         }
         if ( VAR_21 == ((void*)0) ) {
            FUNC_13 ( VAR_13, "%s: Can't open input file %s: %s.\n",
                      VAR_11, VAR_6, FUNC_23(VAR_4) );
            if ( VAR_22 != ((void*)0) ) FUNC_7 ( VAR_22 );
            FUNC_21(1);
            return;
         };
         break;

      default:
         FUNC_18 ( "uncompress: bad srcMode" );
         break;
   }

   if (VAR_18 >= 1) {
      FUNC_13 ( VAR_13, "  %s: ", VAR_6 );
      FUNC_17 ( VAR_6 );
      FUNC_8 ( VAR_13 );
   }


   VAR_10 = VAR_22;
   VAR_3 = VAR_2;
   VAR_25 = FUNC_24 ( VAR_21, VAR_22 );
   VAR_10 = ((void*)0);


   if ( VAR_25 ) {
      if ( VAR_12 == 130 ) {
         FUNC_3 ( VAR_9 );
         VAR_3 = VAR_1;
         if ( !VAR_7 ) {
            IntNative VAR_28 = FUNC_19 ( VAR_6 );
            FUNC_0 ( VAR_28 );
         }
      }
   } else {
      VAR_16 = VAR_2;
      VAR_3 = VAR_1;
      if ( VAR_12 == 130 ) {
         IntNative VAR_29 = FUNC_19 ( VAR_9 );
         FUNC_0 ( VAR_29 );
      }
   }
   VAR_3 = VAR_1;

   if ( VAR_25 ) {
      if (VAR_18 >= 1)
         FUNC_13 ( VAR_13, "done\n" );
   } else {
      FUNC_21(2);
      if (VAR_18 >= 1)
         FUNC_13 ( VAR_13, "not a bzip2 file.\n" ); else
         FUNC_13 ( VAR_13,
                   "%s: %s is not a bzip2 file.\n",
                   VAR_11, VAR_6 );
   }

}
