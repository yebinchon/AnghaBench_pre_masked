
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive*) ;
 scalar_t__ FUNC_4 (struct archive*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct archive*,int,scalar_t__) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct archive *VAR_1, void *VAR_2, struct archive_entry *VAR_3)
{
 (void)VAR_2;

 FUNC_7("CTime should be set");
 FUNC_5(8, FUNC_0(VAR_3));
 FUNC_7("MTime should be set");
 FUNC_5(16, FUNC_2(VAR_3));

 if (FUNC_1(VAR_3) < 886611)
  return (0);
 if (FUNC_3(VAR_1)) {

  FUNC_7("archive_read_disk_can_descend should work"
   " in metadata filter");
  FUNC_6(VAR_1, 1, FUNC_3(VAR_1));
  FUNC_7("archive_read_disk_descend should work"
   " in metadata filter");
  FUNC_6(VAR_1, VAR_0, FUNC_4(VAR_1));
 }
 return (1);
}
