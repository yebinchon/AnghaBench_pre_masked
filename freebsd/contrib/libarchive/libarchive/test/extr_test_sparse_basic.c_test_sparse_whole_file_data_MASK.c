
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (struct archive_entry*) ;
 struct archive_entry* FUNC_1 () ;
 int FUNC_2 (struct archive_entry*,int) ;
 int FUNC_3 (struct archive_entry*,scalar_t__,int) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8()
{
 struct archive_entry *VAR_0;
 int64_t VAR_1;
 int VAR_2;

 FUNC_5((VAR_0 = FUNC_1()) != ((void*)0));
 FUNC_2(VAR_0, 1024*10);




 VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  FUNC_3(VAR_0, VAR_1, 1024);
  VAR_1 += 1024;
 }

 FUNC_7("There should be no sparse");
 FUNC_6(0, FUNC_4(VAR_0));
 FUNC_0(VAR_0);
}
