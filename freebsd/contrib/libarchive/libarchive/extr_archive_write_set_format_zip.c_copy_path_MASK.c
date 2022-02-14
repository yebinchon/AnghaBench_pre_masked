
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
typedef scalar_t__ mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 char* FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (unsigned char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(struct archive_entry *VAR_1, unsigned char *VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;
 mode_t VAR_5;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_0(VAR_1);

 FUNC_2(VAR_2, VAR_3, VAR_4);


 if ((VAR_5 == VAR_0) & (VAR_3[VAR_4 - 1] != '/')) {
  VAR_2[VAR_4] = '/';
  VAR_2[VAR_4 + 1] = '\0';
 }
}
