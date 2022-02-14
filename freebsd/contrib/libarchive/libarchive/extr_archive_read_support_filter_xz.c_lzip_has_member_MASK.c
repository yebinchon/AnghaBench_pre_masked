
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter {int dummy; } ;
typedef int ssize_t ;


 unsigned char* FUNC_0 (struct archive_read_filter*,int,int *) ;
 scalar_t__ FUNC_1 (unsigned char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read_filter *VAR_0)
{
 const unsigned char *VAR_1;
 ssize_t VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_1 = FUNC_0(VAR_0, 6, &VAR_2);
 if (VAR_1 == ((void*)0))
  return (0);




 VAR_3 = 0;
 if (FUNC_1(VAR_1, "LZIP", 4) != 0)
  return (0);
 VAR_3 += 32;


 if (VAR_1[4] != 0 && VAR_1[4] != 1)
  return (0);
 VAR_3 += 8;


 VAR_4 = VAR_1[5] & 0x1f;
 if (VAR_4 < 12 || VAR_4 > 27)
  return (0);
 VAR_3 += 8;

 return (VAR_3);
}
