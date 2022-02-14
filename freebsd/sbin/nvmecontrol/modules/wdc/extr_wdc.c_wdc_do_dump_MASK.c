
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,char*,int ,char const*) ;
 int FUNC_10 (int,int,size_t,int,int,char*,size_t) ;
 scalar_t__ FUNC_11 (int,char*,size_t) ;

__attribute__((used)) static void
FUNC_12(int VAR_6, char *VAR_7, const char *VAR_8, uint32_t VAR_9,
    uint32_t VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13;
 uint8_t *VAR_14;
 uint32_t VAR_15, VAR_16;
 size_t VAR_17;

 FUNC_9(VAR_6, VAR_7, VAR_0, VAR_8);


 VAR_13 = FUNC_7(VAR_7, VAR_4 | VAR_2 | VAR_3, 0644);
 if (VAR_13 < 0)
  FUNC_3(1, "open %s", VAR_7);
 VAR_14 = FUNC_0(VAR_5, VAR_1);
 if (VAR_14 == ((void*)0))
  FUNC_4(1, "Can't get buffer to read dump");
 VAR_16 = 0;
 VAR_15 = VAR_1;
 VAR_12 = 1;

 do {
  VAR_17 = VAR_15 > VAR_1 ? VAR_1 : VAR_15;
  FUNC_10(VAR_6, VAR_9, VAR_17, VAR_16, VAR_10, VAR_14, VAR_17);

  if (VAR_12) {
   VAR_15 = FUNC_1(VAR_14 + VAR_11);
   if (VAR_15 == 0)
    FUNC_4(1, "No data for %s", VAR_8);
   if (FUNC_6("E6LG", VAR_14, 4) != 0)
    FUNC_8("Expected header of E6LG, found '%4.4s' instead\n",
        VAR_14);
   FUNC_8("Dumping %d bytes of version %d.%d log to %s\n", VAR_15,
       VAR_14[8], VAR_14[9], VAR_7);





   if (VAR_17 > VAR_15)
    VAR_17 = VAR_15;
   VAR_12 = 0;
  }
  if (FUNC_11(VAR_13, VAR_14, VAR_17) != (ssize_t)VAR_17)
   FUNC_3(1, "write");
  VAR_16 += VAR_17;
  VAR_15 -= VAR_17;
 } while (VAR_15 > 0);
 FUNC_5(VAR_14);
 FUNC_2(VAR_13);
}
