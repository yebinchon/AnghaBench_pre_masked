
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip {scalar_t__ central_directory_offset; } ;
struct archive_read {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 char* FUNC_0 (struct archive_read*,size_t,int *) ;
 scalar_t__ FUNC_1 (struct archive_read*,int,int ) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_1, struct zip *VAR_2, const char *VAR_3)
{
 int64_t VAR_4;
 int64_t VAR_5;




 if (FUNC_2(VAR_3 + 4) != 0)
  return 0;

 if (FUNC_2(VAR_3 + 16) != 1)
  return 0;


 VAR_4 = FUNC_3(VAR_3 + 8);
 if (FUNC_1(VAR_1, VAR_4, VAR_0) < 0)
  return 0;
 if ((VAR_3 = FUNC_0(VAR_1, 56, ((void*)0))) == ((void*)0))
  return 0;

 VAR_5 = FUNC_3(VAR_3 + 4) + 12;
 if (VAR_5 < 56 || VAR_5 > 16384)
  return 0;
 if ((VAR_3 = FUNC_0(VAR_1, (size_t)VAR_5, ((void*)0))) == ((void*)0))
  return 0;


 if (FUNC_2(VAR_3 + 16) != 0)
  return 0;
 if (FUNC_2(VAR_3 + 20) != 0)
  return 0;

 if (FUNC_3(VAR_3 + 24) != FUNC_3(VAR_3 + 32))
  return 0;


 VAR_2->central_directory_offset = FUNC_3(VAR_3 + 48);

 return 32;
}
