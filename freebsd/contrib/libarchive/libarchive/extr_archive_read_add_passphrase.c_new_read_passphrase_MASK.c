
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_passphrase {int * passphrase; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct archive_read_passphrase*) ;
 struct archive_read_passphrase* FUNC_2 (int) ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static struct archive_read_passphrase *
FUNC_4(struct archive_read *VAR_1, const char *VAR_2)
{
 struct archive_read_passphrase *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0)) {
  FUNC_0(&VAR_1->archive, VAR_0,
      "Can't allocate memory");
  return (((void*)0));
 }
 VAR_3->passphrase = FUNC_3(VAR_2);
 if (VAR_3->passphrase == ((void*)0)) {
  FUNC_1(VAR_3);
  FUNC_0(&VAR_1->archive, VAR_0,
      "Can't allocate memory");
  return (((void*)0));
 }
 return (VAR_3);
}
