
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct archive_string {int s; } ;
struct TYPE_3__ {int state; } ;
struct archive_read_disk {TYPE_1__ archive; } ;
struct archive {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct archive*,int ) ;
 int FUNC_1 (struct archive*,int ,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (struct archive_string*,int const*,int ) ;
 int FUNC_5 (struct archive_string*) ;
 int FUNC_6 (struct archive_string*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int const*) ;

int
FUNC_8(struct archive *VAR_8, const wchar_t *VAR_9)
{
 struct archive_read_disk *VAR_10 = (struct archive_read_disk *)VAR_8;
 struct archive_string VAR_11;
 int VAR_12;

 FUNC_1(VAR_8, VAR_2,
     VAR_5 | VAR_3,
     "archive_read_disk_open_w");
 FUNC_2(&VAR_10->archive);


 FUNC_6(&VAR_11);
 if (FUNC_4(&VAR_11, VAR_9,
     FUNC_7(VAR_9)) != 0) {
  if (VAR_7 == VAR_6)
   FUNC_3(&VAR_10->archive, VAR_6,
       "Can't allocate memory");
  else
   FUNC_3(&VAR_10->archive, VAR_0,
       "Can't convert a path to a char string");
  VAR_10->archive.state = VAR_4;
  VAR_12 = VAR_1;
 } else
  VAR_12 = FUNC_0(VAR_8, VAR_11.s);

 FUNC_5(&VAR_11);
 return (VAR_12);
}
