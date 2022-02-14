
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write_disk*,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int
FUNC_2(struct archive_write_disk *VAR_1, char *VAR_2)
{
 char *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_1(VAR_2, '/');
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 *VAR_3 = '\0';
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 *VAR_3 = '/';
 return (VAR_4);
}
