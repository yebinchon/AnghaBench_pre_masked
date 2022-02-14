
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ u_long ;
struct stat {int st_mode; int st_blocks; scalar_t__ st_ino; } ;
struct TYPE_3__ {int fts_name; struct stat* fts_statp; } ;
typedef TYPE_1__ FTSENT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(const FTSENT *VAR_5, u_long VAR_6, u_long VAR_7)
{
 struct stat *VAR_8;
 int VAR_9;




 VAR_8 = VAR_5->fts_statp;
 VAR_9 = 0;
 if (VAR_2)
  VAR_9 += FUNC_3("%*ju ",
      (int)VAR_6, (uintmax_t)VAR_8->st_ino);
 if (VAR_3)
  VAR_9 += FUNC_3("%*jd ",
      (int)VAR_7, FUNC_2(VAR_8->st_blocks, VAR_0));




 VAR_9 += FUNC_4(VAR_5->fts_name);




 if (VAR_4)
  VAR_9 += FUNC_5(VAR_8->st_mode);
 return (VAR_9);
}
