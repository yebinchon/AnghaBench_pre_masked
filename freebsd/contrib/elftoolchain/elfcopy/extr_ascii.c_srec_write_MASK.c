
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
 scalar_t__ FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,int*,int const,int,int*) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, char VAR_3, uint64_t VAR_4, const void *VAR_5, size_t VAR_6)
{
 char VAR_7[VAR_1];
 const uint8_t *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (VAR_3 == '0' || VAR_3 == '1' || VAR_3 == '5' || VAR_3 == '9')
  VAR_11 = 2;
 else if (VAR_3 == '2' || VAR_3 == '8')
  VAR_11 = 3;
 else
  VAR_11 = 4;

 VAR_12 = 0;
 VAR_7[0] = 'S';
 VAR_7[1] = VAR_3;
 VAR_10 = 2;
 FUNC_2(VAR_7, &VAR_10, VAR_11 + VAR_6 + 1, 1, &VAR_12);
 FUNC_2(VAR_7, &VAR_10, VAR_4, VAR_11, &VAR_12);
 for (VAR_8 = VAR_5, VAR_9 = VAR_8 + VAR_6; VAR_8 < VAR_9; VAR_8++)
  FUNC_2(VAR_7, &VAR_10, *VAR_8, 1, &VAR_12);
 FUNC_2(VAR_7, &VAR_10, ~VAR_12 & 0xFF, 1, ((void*)0));
 VAR_7[VAR_10++] = '\r';
 VAR_7[VAR_10++] = '\n';
 if (FUNC_1(VAR_2, VAR_7, VAR_10) != (ssize_t) VAR_10)
  FUNC_0(VAR_0, "write failed");
}
