
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inodesc {long id_numfrags; scalar_t__ id_filesize; long id_loc; scalar_t__ id_fix; int id_blkno; } ;
struct direct {long d_reclen; } ;
struct TYPE_3__ {scalar_t__ b_buf; } ;
struct bufarea {TYPE_1__ b_un; } ;
struct TYPE_4__ {long fs_fsize; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct inodesc*,struct bufarea*,struct direct*) ;
 int FUNC_1 (struct bufarea*) ;
 scalar_t__ FUNC_2 (struct inodesc*,char*) ;
 struct bufarea* FUNC_3 (int ,long) ;
 int FUNC_4 (struct direct*,int ,long) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static struct direct *
FUNC_5(struct inodesc *VAR_3)
{
 struct direct *VAR_4, *VAR_5;
 struct bufarea *VAR_6;
 long VAR_7, VAR_8, VAR_9;

 VAR_9 = 0;
 VAR_8 = VAR_3->id_numfrags * VAR_2.fs_fsize;
 if (VAR_3->id_filesize <= 0 || VAR_3->id_loc >= VAR_8)
  return (((void*)0));
 VAR_6 = FUNC_3(VAR_3->id_blkno, VAR_8);
 VAR_4 = (struct direct *)(VAR_6->b_un.b_buf + VAR_3->id_loc);





 if (VAR_3->id_loc % VAR_0 != 0 || FUNC_0(VAR_3, VAR_6, VAR_4) != 0) {



  VAR_3->id_loc += VAR_4->d_reclen;
  VAR_3->id_filesize -= VAR_4->d_reclen;



  if (VAR_3->id_filesize <= 0 || VAR_3->id_loc >= VAR_8 ||
      VAR_3->id_loc % VAR_0 == 0)
   return (VAR_4);



  VAR_5 = (struct direct *)(VAR_6->b_un.b_buf + VAR_3->id_loc);
  if (FUNC_0(VAR_3, VAR_6, VAR_5) != 0)
   return (VAR_4);




  VAR_9 = 1;
 }




 VAR_7 = VAR_0 - (VAR_3->id_loc % VAR_0);
 VAR_3->id_loc += VAR_7;
 VAR_3->id_filesize -= VAR_7;
 if (VAR_3->id_fix == VAR_1)
  return (((void*)0));
 if (VAR_9) {
  FUNC_4(VAR_5, 0, VAR_7);
  VAR_4->d_reclen += VAR_7;
 } else {
  FUNC_4(VAR_4, 0, VAR_7);
  VAR_4->d_reclen = VAR_7;
 }
 if (FUNC_2(VAR_3, "DIRECTORY CORRUPTED"))
  FUNC_1(VAR_6);
 return (VAR_4);
}
