
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
typedef scalar_t__ off_t ;
typedef int cpp_reader ;
struct TYPE_5__ {scalar_t__ st_size; int st_mode; } ;
struct TYPE_4__ {int buffer_valid; TYPE_3__ st; int buffer; int path; int fd; } ;
typedef TYPE_1__ _cpp_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int *,int ,int,int,int,int*) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int,int) ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_11 (cpp_reader *VAR_7, _cpp_file *VAR_8)
{
  ssize_t VAR_9, VAR_10, VAR_11;
  off_t VAR_12;
  VAR_6 *VAR_4;
  bool VAR_13;

  if (FUNC_2 (VAR_8->st.st_mode))
    {
      FUNC_8 (VAR_7, VAR_0, "%s is a block device", VAR_8->path);
      return 0;
    }

  VAR_13 = FUNC_3 (VAR_8->st.st_mode);
  if (VAR_13)
    {
      if (VAR_8->st.st_size > VAR_3)
 {
   FUNC_8 (VAR_7, VAR_0, "%s is too large", VAR_8->path);
   return 0;
 }

      VAR_9 = VAR_8->st.st_size;

      if ((VAR_12 = FUNC_9(VAR_8->fd, 0, VAR_2)) < 0)
 {
   FUNC_8 (VAR_7, VAR_0, "%s has no current position",
     VAR_8->path);
   return 0;
 }
      else if (VAR_12 > VAR_3 || (ssize_t)VAR_12 > VAR_9)
 {
   FUNC_8 (VAR_7, VAR_0, "current position of %s is too large",
     VAR_8->path);
   return 0;
 }

      VAR_9 -= (ssize_t)VAR_12;
    }
  else



    VAR_9 = 8 * 1024;

  VAR_4 = FUNC_4 (VAR_6, VAR_9 + 1);
  VAR_10 = 0;
  while ((VAR_11 = FUNC_10 (VAR_8->fd, VAR_4 + VAR_10, VAR_9 - VAR_10)) > 0)
    {
      VAR_10 += VAR_11;

      if (VAR_10 == VAR_9)
 {
   if (VAR_13)
     break;
   VAR_9 *= 2;
   VAR_4 = FUNC_5 (VAR_6, VAR_4, VAR_9 + 1);
 }
    }

  if (VAR_11 < 0)
    {
      FUNC_7 (VAR_7, VAR_0, VAR_8->path);
      return 0;
    }

  if (VAR_13 && VAR_10 != VAR_9 && FUNC_1 (VAR_8->st))
    FUNC_8 (VAR_7, VAR_1,
        "%s is shorter than expected", VAR_8->path);

  VAR_8->buffer = FUNC_6 (VAR_7, FUNC_0 (VAR_7, VAR_5),
         VAR_4, VAR_9, VAR_10, &VAR_8->st.st_size);
  VAR_8->buffer_valid = 1;

  return 1;
}
