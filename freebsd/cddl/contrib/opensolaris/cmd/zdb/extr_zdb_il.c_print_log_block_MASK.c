
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int zl_spa; } ;
typedef TYPE_2__ zilog_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
struct TYPE_7__ {scalar_t__* zc_word; } ;
struct TYPE_9__ {scalar_t__ blk_birth; TYPE_1__ blk_cksum; } ;
typedef TYPE_3__ blkptr_t ;
typedef int blkbuf ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*,int ,char const*,char*) ;
 int FUNC_2 (char*,int,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(zilog_t *VAR_3, blkptr_t *VAR_4, void *VAR_5, uint64_t VAR_6)
{
 char VAR_7[VAR_0 + 10];
 int VAR_8 = FUNC_0(VAR_2['d'], VAR_2['i']);
 const char *VAR_9;

 if (VAR_8 <= 3)
  return (0);

 if (VAR_8 >= 5) {
  (void) FUNC_4(VAR_7, ", ");
  FUNC_2(VAR_7 + FUNC_5(VAR_7),
      sizeof (VAR_7) - FUNC_5(VAR_7), VAR_4);
 } else {
  VAR_7[0] = '\0';
 }

 if (VAR_6 != 0)
  VAR_9 = "already claimed";
 else if (VAR_4->blk_birth >= FUNC_3(VAR_3->zl_spa))
  VAR_9 = "will claim";
 else
  VAR_9 = "won't claim";

 (void) FUNC_1("\tBlock seqno %llu, %s%s\n",
     (u_longlong_t)VAR_4->blk_cksum.zc_word[VAR_1], VAR_9, VAR_7);

 return (0);
}
