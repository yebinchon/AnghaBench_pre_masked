
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
struct archive_entry_header_ustar {char* checksum; } ;


 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_0, const void *VAR_1)
{
 const unsigned char *VAR_2;
 const struct archive_entry_header_ustar *VAR_3;
 int VAR_4, VAR_5;
 size_t VAR_6;

 (void)VAR_0;
 VAR_2 = (const unsigned char *)VAR_1;
 VAR_3 = (const struct archive_entry_header_ustar *)VAR_1;


 for (VAR_6 = 0; VAR_6 < sizeof(VAR_3->checksum); ++VAR_6) {
  char VAR_7 = VAR_3->checksum[VAR_6];
  if (VAR_7 != ' ' && VAR_7 != '\0' && (VAR_7 < '0' || VAR_7 > '7'))
   return 0;
 }





 VAR_5 = (int)FUNC_0(VAR_3->checksum, sizeof(VAR_3->checksum));
 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < 148; VAR_6++)
  VAR_4 += (unsigned char)VAR_2[VAR_6];
 for (; VAR_6 < 156; VAR_6++)
  VAR_4 += 32;
 for (; VAR_6 < 512; VAR_6++)
  VAR_4 += (unsigned char)VAR_2[VAR_6];
 if (VAR_5 == VAR_4)
  return (1);






 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < 148; VAR_6++)
  VAR_4 += (signed char)VAR_2[VAR_6];
 for (; VAR_6 < 156; VAR_6++)
  VAR_4 += 32;
 for (; VAR_6 < 512; VAR_6++)
  VAR_4 += (signed char)VAR_2[VAR_6];
 if (VAR_5 == VAR_4)
  return (1);

 return (0);
}
