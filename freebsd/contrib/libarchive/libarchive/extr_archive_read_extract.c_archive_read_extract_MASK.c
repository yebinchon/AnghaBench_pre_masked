
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_extract {int * ad; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct archive_read_extract* FUNC_0 (struct archive_read*) ;
 int FUNC_1 (int *,struct archive_entry*,int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct archive *VAR_2, struct archive_entry *VAR_3, int VAR_4)
{
 struct archive_read_extract *VAR_5;
 struct archive_read * VAR_6 = (struct archive_read *)VAR_2;

 VAR_5 = FUNC_0(VAR_6);
 if (VAR_5 == ((void*)0))
  return (VAR_0);


 if (VAR_5->ad == ((void*)0)) {
  VAR_5->ad = FUNC_3();
  if (VAR_5->ad == ((void*)0)) {
   FUNC_2(&VAR_6->archive, VAR_1, "Can't extract");
   return (VAR_0);
  }
  FUNC_5(VAR_5->ad);
 }

 FUNC_4(VAR_5->ad, VAR_4);
 return (FUNC_1(&VAR_6->archive, VAR_3, VAR_5->ad));
}
