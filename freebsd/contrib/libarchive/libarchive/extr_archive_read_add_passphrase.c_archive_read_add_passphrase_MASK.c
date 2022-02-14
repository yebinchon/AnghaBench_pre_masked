
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_passphrase {int dummy; } ;
struct archive_read {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive_read*,struct archive_read_passphrase*) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;
 struct archive_read_passphrase* FUNC_3 (struct archive_read*,char const*) ;

int
FUNC_4(struct archive *VAR_6, const char *VAR_7)
{
 struct archive_read *VAR_8 = (struct archive_read *)VAR_6;
 struct archive_read_passphrase *VAR_9;

 FUNC_1(VAR_6, VAR_4, VAR_5,
  "archive_read_add_passphrase");

 if (VAR_7 == ((void*)0) || VAR_7[0] == '\0') {
  FUNC_2(&VAR_8->archive, VAR_0,
      "Empty passphrase is unacceptable");
  return (VAR_1);
 }

 VAR_9 = FUNC_3(VAR_8, VAR_7);
 if (VAR_9 == ((void*)0))
  return (VAR_2);
 FUNC_0(VAR_8, VAR_9);

 return (VAR_3);
}
