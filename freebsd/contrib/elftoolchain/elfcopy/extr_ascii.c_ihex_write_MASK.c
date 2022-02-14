
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,int*,int const,int,int*) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, int VAR_3, uint64_t VAR_4, uint64_t VAR_5, const void *VAR_6,
    size_t VAR_7)
{
 char VAR_8[VAR_1];
 const uint8_t *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7 > 16)
  FUNC_1(VAR_0, "Internal: ihex_write() sz too big");
 VAR_12 = 0;
 VAR_8[0] = ':';
 VAR_11 = 1;
 FUNC_3(VAR_8, &VAR_11, VAR_7, 1, &VAR_12);
 FUNC_3(VAR_8, &VAR_11, VAR_4, 2, &VAR_12);
 FUNC_3(VAR_8, &VAR_11, VAR_3, 1, &VAR_12);
 if (VAR_7 > 0) {
  if (VAR_6 != ((void*)0)) {
   for (VAR_9 = VAR_6, VAR_10 = VAR_9 + VAR_7; VAR_9 < VAR_10; VAR_9++)
    FUNC_3(VAR_8, &VAR_11, *VAR_9, 1, &VAR_12);
  } else
   FUNC_3(VAR_8, &VAR_11, VAR_5, VAR_7, &VAR_12);
 }
 FUNC_3(VAR_8, &VAR_11, (~VAR_12 + 1) & 0xFF, 1, ((void*)0));
 VAR_8[VAR_11++] = '\r';
 VAR_8[VAR_11++] = '\n';
 if (FUNC_2(VAR_2, VAR_8, VAR_11) != (ssize_t) VAR_11)
  FUNC_0(VAR_0, "write failed");
}
