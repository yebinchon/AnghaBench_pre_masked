
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ z_size; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_11__ {scalar_t__ z_replay_eof; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
typedef int ssize_t ;
struct TYPE_9__ {int lrc_reclen; } ;
struct TYPE_12__ {scalar_t__ lr_offset; scalar_t__ lr_length; int lr_blkptr; TYPE_1__ lr_common; int lr_foid; } ;
typedef TYPE_4__ lr_write_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,char*,scalar_t__,scalar_t__,int ,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_2__**) ;

__attribute__((used)) static int
FUNC_6(void *VAR_5, void *VAR_6, boolean_t VAR_7)
{
 zfsvfs_t *VAR_8 = VAR_5;
 lr_write_t *VAR_9 = VAR_6;
 char *VAR_10 = (char *)(VAR_9 + 1);
 znode_t *VAR_11;
 int VAR_12;
 ssize_t VAR_13;
 uint64_t VAR_14, VAR_15, VAR_16;

 if (VAR_7)
  FUNC_3(VAR_9, sizeof (*VAR_9));

 if ((VAR_12 = FUNC_5(VAR_8, VAR_9->lr_foid, &VAR_11)) != 0) {





  if (VAR_12 == VAR_0)
   VAR_12 = 0;
  return (VAR_12);
 }

 VAR_15 = VAR_9->lr_offset;
 VAR_16 = VAR_9->lr_length;
 VAR_14 = VAR_15 + VAR_16;
 VAR_8->z_replay_eof = 0;


 if (VAR_9->lr_common.lrc_reclen == sizeof (lr_write_t)) {
  uint64_t VAR_17 = FUNC_0(&VAR_9->lr_blkptr);
  if (VAR_16 < VAR_17) {
   VAR_15 -= VAR_15 % VAR_17;
   VAR_16 = VAR_17;
  }
  if (VAR_11->z_size < VAR_14)
   VAR_8->z_replay_eof = VAR_14;
 }

 VAR_12 = FUNC_4(VAR_3, FUNC_2(VAR_11), VAR_10, VAR_16, VAR_15,
     VAR_2, 0, VAR_1, VAR_4, &VAR_13);

 FUNC_1(FUNC_2(VAR_11));
 VAR_8->z_replay_eof = 0;

 return (VAR_12);
}
