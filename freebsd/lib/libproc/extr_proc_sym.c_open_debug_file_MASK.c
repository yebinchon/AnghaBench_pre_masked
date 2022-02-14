
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (char*,int) ;
 size_t FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_5(char *VAR_3, const char *VAR_4, uint32_t VAR_5)
{
 size_t VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_8 = -1;
 if ((VAR_6 = FUNC_4(VAR_3, "/", VAR_2)) >= VAR_2)
  return (VAR_8);
 if (FUNC_4(VAR_3, VAR_4, VAR_2) >= VAR_2)
  goto out;
 if ((VAR_8 = FUNC_3(VAR_3, VAR_1 | VAR_0)) < 0)
  goto out;
 if (FUNC_2(VAR_8, &VAR_7) != 0 || VAR_5 != VAR_7) {
  FUNC_0("ERROR: CRC32 mismatch for %s", VAR_3);
  (void)FUNC_1(VAR_8);
  VAR_8 = -1;
 }
out:
 VAR_3[VAR_6] = '\0';
 return (VAR_8);
}
