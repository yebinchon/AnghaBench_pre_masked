
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {int e2fs_fsmnt; TYPE_1__* e2fs; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {int e2fs_fpg; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_ext2fs*,scalar_t__) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ,int) ;
 char* FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,int,int ) ;

__attribute__((used)) static daddr_t
FUNC_5(struct m_ext2fs *VAR_1, char *VAR_2, daddr_t VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6;





 if (VAR_3)
  VAR_5 = FUNC_0(VAR_1, VAR_3) / VAR_0;
 else
  VAR_5 = 0;
 VAR_6 = FUNC_2(VAR_1->e2fs->e2fs_fpg, VAR_0) - VAR_5;
 VAR_4 = FUNC_3(&VAR_2[VAR_5], 0xff, VAR_6);
 if (VAR_4 == ((void*)0)) {
  VAR_6 = VAR_5 + 1;
  VAR_5 = 0;
  VAR_4 = FUNC_3(&VAR_2[VAR_5], 0xff, VAR_6);
  if (VAR_4 == ((void*)0)) {
   FUNC_4("ext2_mapsearch: map corrupted: start=%d, len=%d, fs=%s",
       VAR_5, VAR_6, VAR_1->e2fs_fsmnt);

  }
 }
 return ((VAR_4 - VAR_2) * VAR_0 + FUNC_1(~*VAR_4) - 1);
}
