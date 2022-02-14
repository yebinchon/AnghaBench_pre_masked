
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int,int ) ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 int FUNC_8 (struct stat*,int ,int) ;
 int FUNC_9 (char*,int,...) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(bool VAR_6, bool VAR_7, bool VAR_8)
{
 int VAR_9[3] = { VAR_2, VAR_4, VAR_3 };
 int VAR_10[5] = { 0700, 0400, 0600, 0444, 0666 };
 struct stat VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 size_t VAR_16, VAR_17;





 for (VAR_16 = 0; VAR_16 < FUNC_1(VAR_9); VAR_16++) {

  for (VAR_17 = 0; VAR_17 < FUNC_1(VAR_10); VAR_17++) {

   VAR_14 = FUNC_9(VAR_5, VAR_9[VAR_16] | VAR_1, VAR_10[VAR_17]);
   VAR_15 = FUNC_9("/etc/passwd", VAR_2);

   FUNC_0(VAR_14 >= 0);
   FUNC_0(VAR_15 >= 0);

   if (VAR_6 != 0)
    VAR_13 = FUNC_4(VAR_14);
   else if (VAR_7 != 0)
    VAR_13 = FUNC_5(VAR_14, VAR_15);
   else if (VAR_8 != 0)
    VAR_13 = FUNC_6(VAR_14, VAR_15, VAR_0);
   else {
    VAR_13 = -1;
   }

   FUNC_0(VAR_13 >= 0);

   (void)FUNC_8(&VAR_11, 0, sizeof(struct stat));
   (void)FUNC_8(&VAR_12, 0, sizeof(struct stat));

   FUNC_0(FUNC_7(VAR_13, &VAR_11) == 0);
   FUNC_0(FUNC_7(VAR_14, &VAR_12) == 0);

   if (VAR_11.st_mode != VAR_12)
    FUNC_2("invalid mode");

   (void)FUNC_3(VAR_13);
   (void)FUNC_3(VAR_14);
   (void)FUNC_3(VAR_15);
   (void)FUNC_10(VAR_5);
  }
 }
}
