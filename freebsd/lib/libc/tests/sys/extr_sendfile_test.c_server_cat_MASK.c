
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (int,int *,int ) ;
 int FUNC_1 (char const*,char*,char*) ;
 char* FUNC_2 (size_t,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,size_t,size_t) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (int,char*,size_t,int ) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_0, int VAR_1, size_t VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5;
 size_t VAR_6;
 ssize_t VAR_7, VAR_8;





 VAR_6 = VAR_2 + 10 + 1;
 VAR_3 = FUNC_2(VAR_6, sizeof(char));
 if (VAR_3 == ((void*)0))
  FUNC_4(1, "malloc failed");

 VAR_5 = FUNC_0(VAR_1, ((void*)0), 0);
 if (VAR_5 == -1)
  FUNC_4(1, "accept failed");

 VAR_4 = VAR_3;
 VAR_7 = 0;
 do {
  VAR_8 = FUNC_7(VAR_5, VAR_4,
      VAR_6 - VAR_7, 0);
  if (VAR_8 <= 0)
   break;
  VAR_4 += VAR_8;
  VAR_7 += VAR_8;
 } while (VAR_7 < VAR_6);

 FUNC_1(VAR_0, "%s", VAR_3);

 (void)FUNC_3(VAR_5);
 (void)FUNC_3(VAR_1);
 FUNC_6(VAR_3);

 if (VAR_7 != VAR_2)
  FUNC_5(1, "received unexpected data: %zd != %zd", VAR_7,
      VAR_2);
}
