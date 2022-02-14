
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ,int*,scalar_t__*,int,int,int ,int) ;
 int FUNC_1 (scalar_t__*,int*,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 char** VAR_3 ;
 int FUNC_3 (int) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (scalar_t__*,int,int,int *) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_7 ( int VAR_11, char** VAR_12 )
{
   FILE* VAR_13;
   int VAR_14;
   int VAR_15;
   int VAR_16;

   if (VAR_11 != 2) {
      FUNC_5 ( VAR_9, "usage: unzcrash filename\n" );
      return 1;
   }

   VAR_13 = FUNC_4 ( VAR_12[1], "r" );
   if (!VAR_13) {
      FUNC_5 ( VAR_9, "unzcrash: can't open %s\n", VAR_12[1] );
      return 1;
   }

   VAR_5 = FUNC_6 ( VAR_4, 1, VAR_1, VAR_13 );
   FUNC_5 ( VAR_9, "%d bytes read\n", VAR_5 );

   VAR_7 = VAR_1;
   VAR_14 = FUNC_0 (
         VAR_10, &VAR_7, VAR_4, VAR_5, 9, 0, 30 );

   FUNC_2 (VAR_14 == VAR_0);
   FUNC_5 ( VAR_9, "%d after compression\n", VAR_7 );

   for (VAR_15 = 0; VAR_15 < VAR_7*8; VAR_15++) {
      FUNC_5 ( VAR_9, "bit %d  ", VAR_15 );
      FUNC_3 ( VAR_15 );
      VAR_6 = VAR_2;
      VAR_14 = FUNC_1 (
            VAR_8, &VAR_6, VAR_10, VAR_7, 0, 0 );
      FUNC_5 ( VAR_9, " %d  %s ", VAR_14, VAR_3[-VAR_14] );

      if (VAR_14 != VAR_0) {
         FUNC_5 ( VAR_9, "\n" );
      } else {
         if (VAR_6 != VAR_5) {
           FUNC_5(VAR_9, "nIn/nOut mismatch %d %d\n", VAR_5, VAR_6 );
           return 1;
         } else {
           for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
             if (VAR_4[VAR_16] != VAR_8[VAR_16]) {
                FUNC_5(VAR_9, "mismatch at %d\n", VAR_16 );
                return 1;
           }
           if (VAR_16 == VAR_6) FUNC_5(VAR_9, "really ok!\n" );
         }
      }

      FUNC_3 ( VAR_15 );
   }
   FUNC_5 ( VAR_9, "all ok\n" );
   return 0;
}
