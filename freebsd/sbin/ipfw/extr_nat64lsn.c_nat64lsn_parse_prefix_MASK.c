
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,void*) ;
 int FUNC_4 (int,void*,scalar_t__) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_4, int VAR_5, void *VAR_6, uint16_t *VAR_7)
{
 char *VAR_8, *VAR_9;

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8 == ((void*)0))
  FUNC_0(VAR_2, ((void*)0));
 if ((VAR_9 = FUNC_5(VAR_8, '/')) != ((void*)0))
  *VAR_9++ = '\0';
 if (VAR_9 == ((void*)0))
  FUNC_1(VAR_3, "Prefix length required");
 if (FUNC_3(VAR_5, VAR_8, VAR_6) != 1)
  FUNC_1(VAR_3, "Bad prefix: %s", VAR_8);
 *VAR_7 = (uint16_t)FUNC_7(VAR_9, &VAR_9, 10);
 if (*VAR_9 != '\0' || *VAR_7 == 0 || (VAR_5 == VAR_0 && *VAR_7 > 32) ||
     (VAR_5 == VAR_1 && *VAR_7 > 96))
  FUNC_1(VAR_3, "Bad prefix length: %s", VAR_4);
 FUNC_4(VAR_5, VAR_6, *VAR_7);
 FUNC_2(VAR_8);
}
