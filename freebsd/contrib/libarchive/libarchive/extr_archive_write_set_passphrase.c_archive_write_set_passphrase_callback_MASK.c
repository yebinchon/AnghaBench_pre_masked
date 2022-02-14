
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {void* passphrase_client_data; int * passphrase_callback; } ;
struct archive {int dummy; } ;
typedef int archive_passphrase_callback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_3, void *VAR_4,
    archive_passphrase_callback *VAR_5)
{
 struct archive_write *VAR_6 = (struct archive_write *)VAR_3;

 FUNC_0(VAR_3, VAR_2, VAR_1,
  "archive_write_set_passphrase_callback");

 VAR_6->passphrase_callback = VAR_5;
 VAR_6->passphrase_client_data = VAR_4;
 return (VAR_0);
}
