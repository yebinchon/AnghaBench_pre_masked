
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_5__ {int fs_bsize; } ;
struct TYPE_4__ {struct TYPE_4__* b_HNext; scalar_t__ b_Offset; scalar_t__ b_Data; } ;
typedef TYPE_1__ Block ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,int,int,int ,int,int ) ;
 int FUNC_2 (char*,int,int) ;
 TYPE_2__* VAR_12 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_13;
 int VAR_14;
 Block *VAR_15;

 if ((VAR_2 = VAR_12->fs_bsize * VAR_0) > VAR_7)
  VAR_2 = VAR_7;
 VAR_8 = VAR_11 / VAR_2;
 VAR_5 = VAR_8 / VAR_4;

 FUNC_2("Cache %d MB, blocksize = %d\n",
     VAR_8 * VAR_2 / (1024 * 1024), VAR_2);

 VAR_15 = FUNC_0(sizeof(Block), VAR_8);
 VAR_1 = FUNC_0(sizeof(Block *), VAR_5);
 VAR_3 = FUNC_1(((void*)0), VAR_8 * VAR_2,
   VAR_9|VAR_10, VAR_6, -1, 0);
 for (VAR_13 = 0; VAR_13 < VAR_8; ++VAR_13) {
  VAR_15[VAR_13].b_Data = VAR_3 + VAR_13 * VAR_2;
  VAR_15[VAR_13].b_Offset = (off_t)-1;
  VAR_14 = VAR_13 / VAR_4;
  VAR_15[VAR_13].b_HNext = VAR_1[VAR_14];
  VAR_1[VAR_14] = &VAR_15[VAR_13];
 }
}
