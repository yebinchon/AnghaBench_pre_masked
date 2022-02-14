
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct open_file {scalar_t__ f_fsdata; } ;
typedef int off_t ;
struct TYPE_9__ {int bsize; int lsndir; int fatsz; } ;
struct TYPE_8__ {int offset; int c; TYPE_2__* fs; int de; } ;
typedef TYPE_1__ DOS_FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,void*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct open_file *VAR_1, void *VAR_2, size_t VAR_3, size_t *VAR_4)
{
    off_t VAR_5;
    u_int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    DOS_FILE *VAR_12 = (DOS_FILE *)VAR_1->f_fsdata;
    int VAR_13 = 0;






    FUNC_8(4);
    VAR_6 = (u_int)VAR_3;
    if ((VAR_5 = FUNC_3(VAR_12->fs, &VAR_12->de)) == -1)
 return (VAR_0);
    if (VAR_6 > (VAR_11 = VAR_5 - VAR_12->offset))
 VAR_6 = VAR_11;
    VAR_7 = VAR_12->offset;
    if ((VAR_8 = FUNC_7(VAR_12->fs->fatsz, &VAR_12->de)))
 VAR_7 &= VAR_12->fs->bsize - 1;
    VAR_9 = VAR_12->c;
    VAR_10 = VAR_6;
    while (VAR_10) {
 VAR_11 = 0;
 if (!VAR_9) {
     if ((VAR_9 = VAR_8))
  VAR_11 = FUNC_1(VAR_12->fs, VAR_12->offset);
 } else if (!VAR_7)
     VAR_11++;
 while (VAR_11--) {
     if ((VAR_13 = FUNC_2(VAR_12->fs, &VAR_9)))
  goto out;
     if (!FUNC_5(VAR_12->fs, VAR_9)) {
  VAR_13 = VAR_0;
  goto out;
     }
 }
 if (!VAR_8 || (VAR_11 = VAR_12->fs->bsize - VAR_7) > VAR_10)
     VAR_11 = VAR_10;
 if ((VAR_13 = FUNC_4(VAR_12->fs, (VAR_9 ? FUNC_0(VAR_12->fs, VAR_9) :
          FUNC_6(VAR_12->fs->lsndir)) + VAR_7, VAR_2, VAR_11)))
     goto out;
 VAR_12->offset += VAR_11;
 VAR_12->c = VAR_9;
 VAR_7 = 0;
 VAR_2 = (char *)VAR_2 + VAR_11;
 VAR_10 -= VAR_11;
    }
 out:
    if (VAR_4)
 *VAR_4 = VAR_3 - VAR_6 + VAR_10;
    return (VAR_13);
}
