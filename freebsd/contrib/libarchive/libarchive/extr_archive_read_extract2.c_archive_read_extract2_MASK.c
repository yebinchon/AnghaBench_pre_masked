
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; int skip_file_ino; int skip_file_dev; scalar_t__ skip_file_set; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct archive*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive*,int ,int ) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*,struct archive_entry*) ;
 int FUNC_6 (struct archive*,struct archive*) ;

int
FUNC_7(struct archive *VAR_2, struct archive_entry *VAR_3,
    struct archive *VAR_4)
{
 struct archive_read *VAR_5 = (struct archive_read *)VAR_2;
 int VAR_6, VAR_7;


 if (VAR_5->skip_file_set)
  FUNC_3(VAR_4,
      VAR_5->skip_file_dev, VAR_5->skip_file_ino);
 VAR_6 = FUNC_5(VAR_4, VAR_3);
 if (VAR_6 < VAR_1)
  VAR_6 = VAR_1;
 if (VAR_6 != VAR_0)

   FUNC_0(&VAR_5->archive, VAR_4);
 else if (!FUNC_2(VAR_3) || FUNC_1(VAR_3) > 0)

  VAR_6 = FUNC_6(VAR_2, VAR_4);
 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 < VAR_1)
  VAR_7 = VAR_1;

 if (VAR_7 != VAR_0 && VAR_6 == VAR_0)
  FUNC_0(&VAR_5->archive, VAR_4);

 if (VAR_7 < VAR_6)
  VAR_6 = VAR_7;
 return (VAR_6);
}
