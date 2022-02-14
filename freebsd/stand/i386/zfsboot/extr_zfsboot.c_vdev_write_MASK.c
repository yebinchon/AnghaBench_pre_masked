
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_3__ {scalar_t__ start; } ;
struct zfsdsk {TYPE_1__ dsk; } ;
typedef int off_t ;
typedef unsigned int daddr_t ;
struct TYPE_4__ {int rdbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(vdev_t *VAR_3, void *VAR_4, off_t VAR_5, void *VAR_6, size_t VAR_7)
{
 char *VAR_8;
 daddr_t VAR_9;
 unsigned int VAR_10;
 struct zfsdsk *VAR_11 = (struct zfsdsk *) VAR_4;

 if ((VAR_5 & (VAR_0 - 1)) || (VAR_7 & (VAR_0 - 1)))
  return -1;

 VAR_8 = VAR_6;
 VAR_9 = VAR_5 / VAR_0;
 VAR_9 += VAR_11->dsk.start;
 while (VAR_7 > 0) {
  VAR_10 = VAR_7 / VAR_0;
  if (VAR_10 > VAR_1 / VAR_0)
   VAR_10 = VAR_1 / VAR_0;
  FUNC_1(VAR_2->rdbuf, VAR_8, VAR_10 * VAR_0);
  if (FUNC_0(&VAR_11->dsk, VAR_2->rdbuf, VAR_9, VAR_10))
   return -1;
  VAR_8 += VAR_10 * VAR_0;
  VAR_9 += VAR_10;
  VAR_7 -= VAR_10 * VAR_0;
 }

 return 0;
}
