
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int vtable; int state; int magic; } ;
struct archive_write {int bytes_per_block; int bytes_in_last_block; int null_length; unsigned char* nulls; struct archive archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct archive_write*) ;

struct archive *
FUNC_3(void)
{
 struct archive_write *VAR_2;
 unsigned char *VAR_3;

 VAR_2 = (struct archive_write *)FUNC_1(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_2->archive.magic = VAR_1;
 VAR_2->archive.state = VAR_0;
 VAR_2->archive.vtable = FUNC_0();





 VAR_2->bytes_per_block = 10240;
 VAR_2->bytes_in_last_block = -1;


 VAR_2->null_length = 1024;
 VAR_3 = (unsigned char *)FUNC_1(1, VAR_2->null_length);
 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_2);
  return (((void*)0));
 }
 VAR_2->nulls = VAR_3;
 return (&VAR_2->archive);
}
