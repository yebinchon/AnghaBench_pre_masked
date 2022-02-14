
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isofile {int entry; } ;
struct isoent {int dir; int virtual; } ;
struct iso9660 {int dummy; } ;
struct archive_write {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct isoent* FUNC_10 (struct isofile*) ;
 int FUNC_11 (struct iso9660*,struct isofile*) ;
 int FUNC_12 (struct isofile*) ;
 scalar_t__ FUNC_13 (struct archive_write*,struct isofile*) ;
 struct isofile* FUNC_14 (struct archive_write*,int *) ;

__attribute__((used)) static struct isoent *
FUNC_15(struct archive_write *VAR_2, struct iso9660 *VAR_3, const char *VAR_4)
{
 struct isofile *VAR_5;
 struct isoent *VAR_6;

 VAR_5 = FUNC_14(VAR_2, ((void*)0));
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 FUNC_3(VAR_5->entry, VAR_4);
 FUNC_7(VAR_5->entry);
 FUNC_5(VAR_5->entry);
 FUNC_6(VAR_5->entry);
 FUNC_4(VAR_5->entry, FUNC_9());
 FUNC_0(VAR_5->entry, FUNC_8());
 FUNC_1(VAR_5->entry, 0555 | VAR_0);
 FUNC_2(VAR_5->entry, 2);
 if (FUNC_13(VAR_2, VAR_5) < VAR_1) {
  FUNC_12(VAR_5);
  return (((void*)0));
 }
 FUNC_11(VAR_3, VAR_5);

 VAR_6 = FUNC_10(VAR_5);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 VAR_6->dir = 1;
 VAR_6->virtual = 1;

 return (VAR_6);
}
