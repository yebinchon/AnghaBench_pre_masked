
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int m; int w; } ;
struct read_file_data {int fd; size_t block_size; TYPE_1__ filename; int filename_type; } ;
struct archive_string {int s; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct archive*,struct read_file_data*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*,int ) ;
 int FUNC_4 (struct archive*,int ) ;
 int FUNC_5 (struct archive*,int ) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*,int ) ;
 int FUNC_8 (struct archive*,scalar_t__,char*) ;
 scalar_t__ FUNC_9 (struct archive_string*,int const*,int) ;
 int FUNC_10 (struct archive_string*) ;
 int FUNC_11 (struct archive_string*) ;
 scalar_t__ FUNC_12 (int,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (struct read_file_data*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int const*) ;
 int FUNC_16 (int const*) ;

int
FUNC_17(struct archive *VAR_14, const wchar_t *VAR_15,
    size_t VAR_16)
{
 struct read_file_data *VAR_17 = (struct read_file_data *)FUNC_12(1,
  sizeof(*VAR_17) + FUNC_16(VAR_15) * sizeof(wchar_t));
 if (!VAR_17)
 {
  FUNC_8(VAR_14, VAR_3, "No memory");
  return (VAR_0);
 }
 VAR_17->fd = -1;
 VAR_17->block_size = VAR_16;

 if (VAR_15 == ((void*)0) || VAR_15[0] == L'\0') {
  VAR_17->filename_type = VAR_5;
 } else {
  struct archive_string VAR_18;

  FUNC_11(&VAR_18);
  if (FUNC_9(&VAR_18, VAR_15,
      FUNC_16(VAR_15)) != 0) {
   if (VAR_7 == VAR_3)
    FUNC_8(VAR_14, VAR_7,
        "Can't allocate memory");
   else
    FUNC_8(VAR_14, VAR_2,
        "Failed to convert a wide-character"
        " filename to a multi-byte filename");
   FUNC_10(&VAR_18);
   FUNC_13(VAR_17);
   return (VAR_0);
  }
  VAR_17->filename_type = VAR_4;
  FUNC_14(VAR_17->filename.m, VAR_18.s);
  FUNC_10(&VAR_18);

 }
 if (FUNC_0(VAR_14, VAR_17) != (VAR_1))
  return (VAR_0);
 FUNC_3(VAR_14, VAR_9);
 FUNC_4(VAR_14, VAR_10);
 FUNC_6(VAR_14, VAR_12);
 FUNC_2(VAR_14, VAR_8);
 FUNC_7(VAR_14, VAR_13);
 FUNC_5(VAR_14, VAR_11);

 return (FUNC_1(VAR_14));
}
