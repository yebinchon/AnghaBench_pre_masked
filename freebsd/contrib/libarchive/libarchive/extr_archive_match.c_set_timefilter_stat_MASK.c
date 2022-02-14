
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int dummy; } ;
struct archive_match {int dummy; } ;
struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*,struct stat*) ;
 int FUNC_1 (struct archive_entry*) ;
 long FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 long FUNC_5 (struct archive_entry*) ;
 struct archive_entry* FUNC_6 () ;
 int FUNC_7 (struct archive_match*) ;
 int FUNC_8 (struct archive_match*,int,int ,long,int ,long) ;

__attribute__((used)) static int
FUNC_9(struct archive_match *VAR_0, int VAR_1, struct stat *VAR_2)
{
 struct archive_entry *VAR_3;
 time_t VAR_4, VAR_5;
 long VAR_6, VAR_7;

 VAR_3 = FUNC_6();
 if (VAR_3 == ((void*)0))
  return (FUNC_7(VAR_0));
 FUNC_0(VAR_3, VAR_2);
 VAR_4 = FUNC_1(VAR_3);
 VAR_6 = FUNC_2(VAR_3);
 VAR_5 = FUNC_4(VAR_3);
 VAR_7 = FUNC_5(VAR_3);
 FUNC_3(VAR_3);
 return FUNC_8(VAR_0, VAR_1, VAR_5, VAR_7,
   VAR_4, VAR_6);
}
