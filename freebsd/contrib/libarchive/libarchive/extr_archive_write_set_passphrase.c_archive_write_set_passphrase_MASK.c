
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; int * passphrase; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;

int
FUNC_4(struct archive *VAR_7, const char *VAR_8)
{
 struct archive_write *VAR_9 = (struct archive_write *)VAR_7;

 FUNC_0(VAR_7, VAR_5, VAR_4,
  "archive_write_set_passphrase");

 if (VAR_8 == ((void*)0) || VAR_8[0] == '\0') {
  FUNC_1(&VAR_9->archive, VAR_0,
      "Empty passphrase is unacceptable");
  return (VAR_1);
 }
 FUNC_2(VAR_9->passphrase);
 VAR_9->passphrase = FUNC_3(VAR_8);
 if (VAR_9->passphrase == ((void*)0)) {
  FUNC_1(&VAR_9->archive, VAR_6,
      "Can't allocate data for passphrase");
  return (VAR_2);
 }
 return (VAR_3);
}
