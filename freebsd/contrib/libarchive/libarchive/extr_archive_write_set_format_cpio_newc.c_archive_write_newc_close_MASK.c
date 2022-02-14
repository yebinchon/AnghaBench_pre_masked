
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int dummy; } ;
struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*) ;
 struct archive_entry* FUNC_1 () ;
 int FUNC_2 (struct archive_entry*,int) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_write*,struct archive_entry*) ;

__attribute__((used)) static int
FUNC_6(struct archive_write *VAR_0)
{
 int VAR_1;
 struct archive_entry *VAR_2;

 VAR_2 = FUNC_1();
 FUNC_2(VAR_2, 1);
 FUNC_4(VAR_2, 0);
 FUNC_3(VAR_2, "TRAILER!!!");

 VAR_1 = FUNC_5(VAR_0, VAR_2);
 FUNC_0(VAR_2);
 return (VAR_1);
}
