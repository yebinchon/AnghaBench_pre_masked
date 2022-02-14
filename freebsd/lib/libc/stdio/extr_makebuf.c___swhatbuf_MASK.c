
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; size_t st_blksize; } ;
struct TYPE_3__ {scalar_t__ _file; size_t _blksize; scalar_t__ _seek; } ;
typedef TYPE_1__ FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,struct stat*) ;

int
FUNC_1(FILE *VAR_7, size_t *VAR_8, int *VAR_9)
{
 struct stat VAR_10;

 if (VAR_7->_file < 0 || FUNC_0(VAR_7->_file, &VAR_10) < 0) {
  *VAR_9 = 0;
  *VAR_8 = VAR_0;
  return (VAR_4);
 }


 *VAR_9 = (VAR_10.st_mode & VAR_2) == VAR_1;
 if (VAR_10.st_blksize <= 0) {
  *VAR_8 = VAR_0;
  return (VAR_4);
 }






 *VAR_8 = VAR_10.st_blksize;
 VAR_7->_blksize = VAR_10.st_blksize;
 return ((VAR_10.st_mode & VAR_2) == VAR_3 && VAR_7->_seek == VAR_6 ?
     VAR_5 : VAR_4);
}
