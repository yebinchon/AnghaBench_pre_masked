
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const wchar_t ;
struct stat {int st_mode; int st_rdev; int st_ino; int st_dev; } ;
struct TYPE_3__ {char* m; int const* w; } ;
struct read_file_data {scalar_t__ filename_type; size_t block_size; int fd; int use_lseek; int st_mode; void* buffer; TYPE_1__ filename; } ;
typedef scalar_t__ partinfo ;
typedef scalar_t__ disklabel ;
struct archive {int dummy; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {scalar_t__ p_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int const* FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,int ,int ) ;
 int FUNC_9 (struct archive*,scalar_t__,char*,...) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_17 ;
 int FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int,struct stat*) ;
 scalar_t__ FUNC_13 (int,int ,scalar_t__*) ;
 scalar_t__ FUNC_14 (int,int ,int ) ;
 void* FUNC_15 (size_t) ;
 int FUNC_16 (char const*,int) ;
 int FUNC_17 (int ,int) ;

__attribute__((used)) static int
FUNC_18(struct archive *VAR_18, void *VAR_19)
{
 struct stat VAR_20;
 struct read_file_data *VAR_21 = (struct read_file_data *)VAR_19;
 void *VAR_22;
 const char *VAR_23 = ((void*)0);
 const wchar_t *VAR_24 = ((void*)0);
 int VAR_25 = -1;
 int VAR_26 = 0;
 FUNC_7(VAR_18);
 if (VAR_21->filename_type == VAR_9) {
  VAR_25 = 0;



  VAR_23 = "";
 } else if (VAR_21->filename_type == VAR_8) {
  VAR_23 = VAR_21->filename.m;
  VAR_25 = FUNC_16(VAR_23, VAR_13 | VAR_11 | VAR_12);
  FUNC_4(VAR_25);
  if (VAR_25 < 0) {
   FUNC_9(VAR_18, VAR_17,
       "Failed to open '%s'", VAR_23);
   return (VAR_1);
  }
 } else {
  FUNC_9(VAR_18, VAR_0,
      "Unexpedted operation in archive_read_open_filename");
  goto fail;

 }
 if (FUNC_12(VAR_25, &VAR_20) != 0) {
  if (VAR_21->filename_type == VAR_10)
   FUNC_9(VAR_18, VAR_17, "Can't stat '%S'",
       VAR_24);
  else
   FUNC_9(VAR_18, VAR_17, "Can't stat '%s'",
       VAR_23);
  goto fail;
 }
 if (FUNC_3(VAR_20.st_mode)) {

  FUNC_8(VAR_18, VAR_20.st_dev, VAR_20.st_ino);

  VAR_26 = 1;
 }
 else if (FUNC_1(VAR_20.st_mode) &&
     FUNC_14(VAR_25, 0, VAR_14) == 0 &&
     FUNC_14(VAR_25, 0, VAR_16) == 0 &&
     FUNC_14(VAR_25, 0, VAR_15) > 0 &&
     FUNC_14(VAR_25, 0, VAR_16) == 0) {
  VAR_26 = 1;
 }





 if (VAR_26) {
  size_t VAR_27 = 64 * 1024;
  while (VAR_27 < VAR_21->block_size
      && VAR_27 < 64 * 1024 * 1024)
   VAR_27 *= 2;
  VAR_21->block_size = VAR_27;
 }
 VAR_22 = FUNC_15(VAR_21->block_size);
 if (VAR_22 == ((void*)0)) {
  FUNC_9(VAR_18, VAR_7, "No memory");
  goto fail;
 }
 VAR_21->buffer = VAR_22;
 VAR_21->fd = VAR_25;

 VAR_21->st_mode = VAR_20.st_mode;


 if (VAR_26)
  VAR_21->use_lseek = 1;

 return (VAR_2);
fail:




 if (VAR_25 != -1 && VAR_25 != 0)
  FUNC_10(VAR_25);
 return (VAR_1);
}
